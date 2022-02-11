#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets/QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QHash>
#include "database.h"
#include "dbconfig.h"
#include "config.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionSobre_triggered();

    void on_pushButtonSend_clicked();

    void clearFields();

    void setFields(int index);

    void on_actionBanco_de_Dados_triggered();

    void on_comboBoxProtocolo_currentIndexChanged(int index);

private:
    void init();

private:
    Ui::MainWindow *ui;
    DataBase m_db;
    QString m_protocol;
};
#endif // MAINWINDOW_H
