#include "names.h"

Names::Names(QObject *parent)
    : QObject{parent}
{

}

QString Names::getName(int gender)
{
    int index = QRandomGenerator::global()->bounded(m_maxNames);
    QString name;
    if(gender == 0)
        name = m_maleNames.at(index);
   else
        name = m_femaleNames.at(index);
    index = QRandomGenerator::global()->bounded(m_maxLastNames);
    QString lastName = m_lastNames.at(index);

    return name + " " + lastName;
}
