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
<<<<<<< HEAD
#include <QVector>
=======
#include <QRandomGenerator>
#include <QCryptographicHash>
>>>>>>> develop

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);
    ~DataBase();

<<<<<<< HEAD
    bool connect(const QString& database,
                 const QString& type,
                 const QString& host,
                 const QString& username,
                 const QString& password,
                 const QString& port);
    bool isConnected();
    bool solicitationV2(const QHash<QString, QString>& data);
    bool solicitationV3(const QHash<QString, QString>& data);
    bool cleanTables();
    int getIDs();
    QString errorMessage() {return m_errorMessage;}
=======
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
>>>>>>> develop

private:
    QSqlDatabase db;
    QString m_errorMessage;
};

#endif // DATABASE_H
