#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{
    // Do nothing
}

DataBase::~DataBase()
{
    db.close();
}

/**
 * @author Ailton Fidelix
 * @date  01-25-2022
 * @note  Função para conexão ao banco de dados Lwsde3
 * @param database Nome do banco de dados
 * @param type Tipoe do drive
 * @param host Endereço host do banco
 * @param username Usuário do banco
 * @param password Senha do usuário
 * @param port Port do banco
 * @return Retorna se houve sucesso ao conectar ao banco de dados
*/
bool DataBase::connect(const QString& database,
                       const QString& type,
                       const QString& host,
                       const QString& username,
                       const QString& password,
                       const QString& port)
{

    QCryptographicHash md5(QCryptographicHash::Md5);
    md5.addData(password.toLatin1());
    QString dbPassword(md5.result().toBase64());
    dbPassword = dbPassword.mid(dbPassword.size()/2, 6);

    db = QSqlDatabase::addDatabase(type);
    db.setHostName(host);
    db.setDatabaseName(database);
    db.setUserName(username);
    db.setPassword(dbPassword);
    if(port == ""){
        if(type == "QOCI")
            db.setPort(1521);
        else
            db.setPort(5432);
    }
    else
        db.setPort(port.toInt());

    bool open = db.open();

    if(!open)
        m_errorMessage = db.lastError().text();

    return open;
}

/**
 * @author Ailton Fidelix
 * @date  02-02-2022
 * @return Retorna status de conexão com o banco
*/
bool DataBase::isConnected()
{
    return db.isOpen();
}

/**
 * @author Ailton Fidelix
 * @date  02-07-2022
 * @note  Função para solicitação de exames ao Lwsde2
 * @param data Dados da solicitação
 * @return Retorna se houve sucesso ao executar a query
*/
bool DataBase::solicitationV2(const QHash<QString, QString> &data)
{
    QSqlQuery query;

    QString sql(  "INSERT INTO lws_comandos VALUES "
                  "("
                  ":idCom, 1, "
                  "'01990001D02    SP1K E', "
                  "':sol|:name|:sex||||COMENTARIOS|1|:lisEx^1', "
                  "1)");

    sql.replace(":name", data["name"]);
    sql.replace(":sex", data["sex"]);
    sql.replace(":idCom", data["idCom"]);
    sql.replace(":sol", data["sol"]);
    sql.replace(":lisEx", data["lisEx"]);

    query.prepare(sql);

    bool exec = query.exec();

    if(!exec)
        m_errorMessage = query.lastError().text();

    return exec;
}

/**
 * @author Ailton Fidelix
 * @date  01-25-2022
 * @note  Função para solicitação de exames ao Lwsde3
 * @param data Dados da solicitação
 * @return Retorna se houve sucesso ao executar a query
*/
bool DataBase::solicitationV3(const QHash<QString, QString>& data)
{
    QSqlQuery query;

    QString sql(  "DELETE FROM lws_com_resultados "
                  "WHERE id_comunicacao = :sol; "
                  "DELETE FROM lws_com_solicitacao_exames "
                  "WHERE id_comunicacao = :sol; "
                  "DELETE FROM lws_com_amostras "
                  "WHERE id_comunicacao = :sol; "
                  "DELETE FROM lws_com_pacientes "
                  "WHERE id_comunicacao = :sol; "
                  "DELETE FROM lws_comunicacao "
                  "WHERE id_comunicacao = :sol; "
                  "INSERT INTO lws_comunicacao "
                  "("
                  "id_comunicacao,id_origem,id_destino,tipo_comunicacao,"
                  "seq_comunicacao,data_hora,observacao,status,cod_resposta"
                  ") "
                  "VALUES ("
                  ":sol,90,99,1,3,CURRENT_TIMESTAMP,NULL,0,NULL"
                  "); "
                  "INSERT INTO lws_com_pacientes "
                  "("
                  "id,id_comunicacao,codigo_paciente_lis,nome,"
                  "sexo,data_nascimento,biotipo_lis,prontuario"
                  ") "
                  "VALUES "
                  "("
                  ":idCom,:sol,':sol-:idCom',':name',"
                  "':sex',CURRENT_TIMESTAMP,NULL,'0000195:idCom'"
                  "); "
                  "INSERT INTO lws_com_amostras "
                  "("
                  "id,id_comunicacao,codigo_amostra,id_paciente,"
                  "local,sala,tipo_amostra_lis,ponto_curva,"
                  "data_hora_coleta,material_lis,grupamento_lis,"
                  "solicitacao,nro_interno,origem,comentarios,"
                  "info_clinicas,setor_lis) "
                  "VALUES "
                  "("
                  ":idCom,:sol,':amo',:idCom,"
                  "NULL,NULL,NULL,0,CURRENT_TIMESTAMP,':lisMat',"
                  "NULL,':sol:idCom',NULL,'Externo',"
                  "NULL,NULL,'39'"
                  "); "
                  "INSERT INTO lws_com_solicitacao_exames "
                  "("
                  "id,id_comunicacao,id_amostra,exame_lis,"
                  "versao_lis,solicitacao,setor_lis,situacao,"
                  "prioridade,diluicao,data_hora_solicitacao,"
                  "profissional_solicitante,comentarios,"
                  "rack,posicao,equipamento_lis,ordem"
                  ") "
                  "VALUES "
                  "("
                  ":idCom,:sol,:idCom,':lisEx',:lisVer,':sol:idCom',39,'T',"
                  "NULL,NULL,CURRENT_TIMESTAMP,NULL,NULL,NULL,NULL,NULL,NULL"
                  ");");

    sql.replace(":name", data["name"]);
    sql.replace(":sex", data["sex"]);
    sql.replace(":idCom", data["idCom"]);
    sql.replace(":sol", data["sol"]);
    sql.replace(":amo", data["amo"]);
    sql.replace(":lisEx", data["lisEx"]);
    sql.replace(":lisVer", data["lisVer"]);
    sql.replace(":lisMat", data["lisMat"]);
    qDebug() << sql;
    query.prepare(sql);

    bool exec = query.exec();

    if(!exec)
        m_errorMessage = query.lastError().text();

    return exec;
}

/**
 * @author Ailton Fidelix
 * @date  01-25-2022
 * @note  Exclui todas as tabelas do banco Lwsde3
 * @return Retorna se houve sucesso ao executar a query
*/
bool DataBase::cleanTables()
{
    QSqlQuery query;

    QString sql("DROP TABLE IF EXISTS "
                "lws_com_amostras, "
                "lws_com_antibiograma, "
                "lws_com_eventos_comandos, "
                "lws_com_flags, "
                "lws_com_graficos, "
                "lws_com_pacientes, "
                "lws_com_resultados, "
                "lws_com_solicitacao_exames, "
                "lws_comunicacao "
                "CASCADE;");

    query.prepare(sql);

    bool ok = query.exec();

    if(!ok)
        m_errorMessage = query.lastError().text();

    return ok;
}

/**
 * @author Ailton Fidelix
 * @date  05-23-2022
 * @note  Pega o ID do banco Lwsde3
 * @return Retorna um ID disponível para incluir no lwsde3
 */
int DataBase::getID()
{
    QVector<int> ids;
    int id = 1;
    bool inRange = false;
    QSqlQuery query("select id from lws_com_pacientes");

    while (query.next())
    {
        ids.append(query.value(0).toInt());
    }

    if(ids.count() > 0){
        for (int i = 1; i < ids.last(); i++)
        {
            if (i != ids[i - 1])
            {
                id = i;
                inRange = true;
                break;
            }
        }
        if (!inRange)
            id = ids.last() + 1;
    }
    return id;
}
