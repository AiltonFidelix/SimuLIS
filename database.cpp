#include "database.h"

DataBase::DataBase(QObject *parent) : QObject(parent)
{
    // Do nothing
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
                       const int& port)
{
    QSqlDatabase db = QSqlDatabase::addDatabase(type);
    db.setHostName(host);
    db.setDatabaseName(database);
    db.setUserName(username);
    db.setPassword(password);
    db.setPort(port);

    //db.setPassword("dDeiVH");

    bool open = db.open();

    if(!open)
        m_errorMessage = db.lastError().text();

    return open;
}

/**
 * @author Ailton Fidelix
 * @date  01-25-2022
 * @note  Função para solicitação de exames ao Lwsde3
 * @param data Dados da solicitação
 * @return Retorna se houve sucesso ao executar a query
*/
bool DataBase::solicitation(const QHash<QString, QString>& data)
{
    QSqlQuery query;

    query.prepare("DELETE FROM lws_com_resultados"
                  "WHERE id_comunicacao = 888888:idCom;"
                  "DELETE FROM lws_com_solicitacao_exames"
                  "WHERE id_comunicacao = 888888:idCom;"
                  "DELETE FROM lws_com_amostras"
                  "WHERE id_comunicacao = 888888:idCom;"
                  "DELETE FROM lws_com_pacientes"
                  "WHERE id_comunicacao = 888888:idCom;"
                  "DELETE FROM lws_comunicacao"
                  "WHERE id_comunicacao = 888888:idCom;"
                  "INSERT INTO lws_comunicacao"
                  "("
                  "id_comunicacao,id_origem,id_destino,tipo_comunicacao,"
                  "seq_comunicacao,data_hora,observacao,status,cod_resposta)"
                  "VALUES("
                  "888888:idCom,90,99,1,3,CURRENT_TIMESTAMP,NULL,0,NULL"
                  ");"
                  "INSERT INTO lws_com_pacientes"
                  "("
                  "id,id_comunicacao,codigo_paciente_lis,nome,"
                  "sexo,data_nascimento,biotipo_lis,prontuario"
                  ")"
                  "VALUES"
                  "("
                  ":idCom,888888:idCom,'888888:idCom-:idCom',':name',"
                  "':sex',CURRENT_TIMESTAMP,NULL,'0000195:idCom'"
                  ");"
                  "INSERT INTO lws_com_amostras"
                  "("
                  "id,id_comunicacao,codigo_amostra,id_paciente,"
                  "local,sala,tipo_amostra_lis,ponto_curva,"
                  "data_hora_coleta,material_lis,grupamento_lis,"
                  "solicitacao,nro_interno,origem,comentarios,"
                  "info_clinicas,setor_lis"
                  ")"
                  "VALUES"
                  "("
                  ":idCom,888888:idCom,'111222333:idCom',:idCom,"
                  "NULL,NULL,NULL,0,CURRENT_TIMESTAMP,':lisMat',"
                  "NULL,'888888880:idCom',NULL,'Externo',"
                  "NULL,NULL,'39'"
                  ");"
                  "INSERT INTO lws_com_solicitacao_exames"
                  "("
                  "id,id_comunicacao,id_amostra,exame_lis,"
                  "versao_lis,solicitacao,setor_lis,situacao,"
                  "prioridade,diluicao,data_hora_solicitacao,"
                  "profissional_solicitante,comentarios,"
                  "rack,posicao,equipamento_lis,ordem"
                  ")"
                  "VALUES("
                  ":idCom,888888:idCom,:idCom,':lisEx',:lisVer,'888888880:idCom',39,'T',"
                  "NULL,NULL,CURRENT_TIMESTAMP,NULL,NULL,NULL,NULL,NULL,NULL"
                  ")");

    query.bindValue(":name", data["name"]);
    query.bindValue(":sex", data["sex"]);
    query.bindValue(":idCom", data["idCom"]);
    query.bindValue(":lisEx", data["lisEx"]);
    query.bindValue(":lisVer", data["lisVer"]);
    query.bindValue(":lisMat", data["lisMat"]);

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

    query.prepare("DROP SCHEMA public CASCADE");

    bool drop = query.exec();

    query.prepare("CREATE SCHEMA public");

    bool create = query.exec();

    if(!(drop && create))
        m_errorMessage = query.lastError().text();

    return drop && create;
}

