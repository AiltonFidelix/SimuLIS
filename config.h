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

    bool setConfig(const QHash<QString, QString>& data);

    QHash<QString, QString> getConfig();

signals:

};

#endif // CONFIG_H
