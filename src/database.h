#ifndef DATABASE_H
#define DATABASE_H

#include <QtCore/QObject>
#include <QtSql/QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QVariant>
#include <QHash>
#include <QDebug>
#include <QRandomGenerator>
#include <QCryptographicHash>

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    ~DataBase();

    bool connect(const QString &database,
                 const QString &type,
                 const QString &host,
                 const QString &username,
                 const QString &password,
                 const QString &port);
    bool isConnected();
    bool solicitationV2(const QHash<QString, QString> &data);
    bool solicitationV3(const QHash<QString, QString> &data);
    int getID();
    bool cleanTables();
    QString errorMessage() { return m_errorMessage; }

private:
    QSqlDatabase db;
    QString m_errorMessage;
};

#endif // DATABASE_H
