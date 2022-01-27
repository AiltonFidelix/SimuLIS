#ifndef CONFIG_H
#define CONFIG_H

#include <QtCore/QObject>
#include <QJsonDocument>

class Config : public QObject
{
    Q_OBJECT
public:
    explicit Config(QObject *parent = nullptr);

signals:

};

#endif // CONFIG_H
