#include "config.h"

Config::Config(QObject *parent) : QObject(parent)
{
    // Do nothing
}

/**
 * @author Ailton Fidelix
 * @date  02-08-2022
 * @note  Salva a versão do protocolo no arquivo json
 * @param protocol Versão do protocolo
*/
void Config::setProtocol(const QString protocol)
{
    QSettings m_settings("SimuLIS", "SimuLIS");

    m_settings.setValue("protocol", protocol);
}

/**
 * @author Ailton Fidelix
 * @date  01-26-2022
 * @note  Salva as configurações do banco no arquivo json
 * @param data Dados de acesso ao banco
*/
bool Config::setDBConfig(const QHash<QString, QString> &data)
{
    QSettings m_settings("SimuLIS", "SimuLIS");

    m_settings.setValue("type", data["type"]);
    m_settings.setValue("host", data["host"]);
    m_settings.setValue("database", data["database"]);
    m_settings.setValue("username", data["username"]);
    m_settings.setValue("password", data["password"]);
    m_settings.setValue("port", data["port"]);

    return true;
}

/**
 * @author Ailton Fidelix
 * @date  01-29-2022
 * @note  Pega configurações do banco de dados
 * @return retorna QHash com as configurações do banco
*/
QHash<QString, QString> Config::getDBConfig()
{
    QHash<QString, QString> config;

    QSettings m_settings("SimuLIS", "SimuLIS");

    config["type"] = m_settings.value("type").toString();
    config["host"] = m_settings.value("host").toString();
    config["database"] = m_settings.value("database").toString();
    config["username"] = m_settings.value("username").toString();
    config["password"] = m_settings.value("password").toString();
    config["port"] = m_settings.value("port").toString();

    return config;
}

/**
 * @author Ailton Fidelix
 * @date  02-08-2022
 * @return retorna versão protocolo
*/
QString Config::getProtocol()
{
    QSettings m_settings("SimuLIS", "SimuLIS");

    return m_settings.value("protocol").toString();
}
