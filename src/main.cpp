#include "mainwindow.h"

#include <QtWidgets/QApplication>
#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /* Seta a aplicação a ser usada pelo sistema */
    QCoreApplication::setOrganizationName("SimuLIS");
    QCoreApplication::setOrganizationDomain("SimuLIS.com");
    QCoreApplication::setApplicationName("SimuLIS");

    QSettings settings(QCoreApplication::organizationName(), QCoreApplication::applicationName());

    MainWindow w;
    w.show();

    return a.exec();
}
