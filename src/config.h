#ifndef CONFIG_H
#define CONFIG_H

#include <QtCore/QObject>
#include <QSettings>
#include <QHash>

class Config : public QObject
{
    Q_OBJECT

public:
    explicit Config(QObject *parent = nullptr);

    bool setDBConfig(const QHash<QString, QString>& data);
    void setProtocol(const QString protocol);

    QHash<QString, QString> getDBConfig();
    QString getProtocol();
};

#endif // CONFIG_H
