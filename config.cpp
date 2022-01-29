#include "config.h"

Config::Config(QObject *parent) : QObject(parent)
{

}

/**
 * @author Ailton Fidelix
 * @date  01-26-2022
 * @note  Salva as configurações do banco no arquivo json
 * @param data Dados de acesso ao banco
*/
bool Config::setConfig(const QHash<QString, QString> &data)
{
    return false;
}

/**
 * @author Ailton Fidelix
 * @date  01-29-2022
 * @note  Pega configurações do banco de dados
 * @return retorna QHash com as configurações do banco
*/
QHash<QString, QString> Config::getConfig()
{
    QHash<QString, QString> config;

    config["type"] = "QPSQL";
    config["host"] = "localhost";
    config["database"] = "lwsde3";
    config["username"] = "labwide";
    config["password"] = "dDeiVH";
    config["port"] = "5432";

    return config;
}
