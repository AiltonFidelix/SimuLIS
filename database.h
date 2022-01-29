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

class DataBase : public QObject
{
    Q_OBJECT
public:
    explicit DataBase(QObject *parent = nullptr);

    bool connect(const QString& database,
                 const QString& type,
                 const QString& host,
                 const QString& username,
                 const QString& password,
                 const int& port);

    bool solicitation(const QHash<QString, QString>& data);

    bool cleanTables();

    QString errorMessage() {return m_errorMessage;}

private:
    QString m_errorMessage;

signals:

};

#endif // DATABASE_H
