/********************************************************************************
** Form generated from reading UI file 'dbconfig.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DBCONFIG_H
#define UI_DBCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DbConfig
{
public:
    QLabel *label;
    QComboBox *comboBoxCom;
    QLabel *labelCon;
    QLineEdit *lineEditUser;
    QLabel *labelUser;
    QLabel *labelPass;
    QLineEdit *lineEditPass;
    QLabel *labelHost;
    QLineEdit *lineEditHost;
    QLabel *labelDb;
    QLineEdit *lineEditDb;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *DbConfig)
    {
        if (DbConfig->objectName().isEmpty())
            DbConfig->setObjectName(QString::fromUtf8("DbConfig"));
        DbConfig->resize(400, 300);
        label = new QLabel(DbConfig);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 121, 17));
        comboBoxCom = new QComboBox(DbConfig);
        comboBoxCom->addItem(QString());
        comboBoxCom->addItem(QString());
        comboBoxCom->setObjectName(QString::fromUtf8("comboBoxCom"));
        comboBoxCom->setGeometry(QRect(120, 50, 231, 25));
        labelCon = new QLabel(DbConfig);
        labelCon->setObjectName(QString::fromUtf8("labelCon"));
        labelCon->setGeometry(QRect(30, 50, 67, 17));
        lineEditUser = new QLineEdit(DbConfig);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setGeometry(QRect(120, 90, 231, 25));
        labelUser = new QLabel(DbConfig);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setGeometry(QRect(20, 90, 67, 17));
        labelPass = new QLabel(DbConfig);
        labelPass->setObjectName(QString::fromUtf8("labelPass"));
        labelPass->setGeometry(QRect(20, 130, 67, 17));
        lineEditPass = new QLineEdit(DbConfig);
        lineEditPass->setObjectName(QString::fromUtf8("lineEditPass"));
        lineEditPass->setGeometry(QRect(120, 130, 231, 25));
        labelHost = new QLabel(DbConfig);
        labelHost->setObjectName(QString::fromUtf8("labelHost"));
        labelHost->setGeometry(QRect(20, 170, 67, 17));
        lineEditHost = new QLineEdit(DbConfig);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));
        lineEditHost->setGeometry(QRect(120, 170, 231, 25));
        labelDb = new QLabel(DbConfig);
        labelDb->setObjectName(QString::fromUtf8("labelDb"));
        labelDb->setGeometry(QRect(20, 210, 67, 17));
        lineEditDb = new QLineEdit(DbConfig);
        lineEditDb->setObjectName(QString::fromUtf8("lineEditDb"));
        lineEditDb->setGeometry(QRect(120, 210, 231, 25));
        pushButtonSave = new QPushButton(DbConfig);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));
        pushButtonSave->setGeometry(QRect(160, 260, 89, 25));
        pushButtonCancel = new QPushButton(DbConfig);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));
        pushButtonCancel->setGeometry(QRect(260, 260, 89, 25));

        retranslateUi(DbConfig);

        QMetaObject::connectSlotsByName(DbConfig);
    } // setupUi

    void retranslateUi(QDialog *DbConfig)
    {
        DbConfig->setWindowTitle(QApplication::translate("DbConfig", "Configura\303\247\303\265es", nullptr));
        label->setText(QApplication::translate("DbConfig", "Banco de Dados", nullptr));
        comboBoxCom->setItemText(0, QApplication::translate("DbConfig", "Postgres", nullptr));
        comboBoxCom->setItemText(1, QApplication::translate("DbConfig", "Oracle", nullptr));

        labelCon->setText(QApplication::translate("DbConfig", "Conex\303\243o:", nullptr));
        labelUser->setText(QApplication::translate("DbConfig", "Usu\303\241rio:", nullptr));
        labelPass->setText(QApplication::translate("DbConfig", "Senha:", nullptr));
        labelHost->setText(QApplication::translate("DbConfig", "Host:", nullptr));
        labelDb->setText(QApplication::translate("DbConfig", "Banco:", nullptr));
        pushButtonSave->setText(QApplication::translate("DbConfig", "Salvar", nullptr));
        pushButtonCancel->setText(QApplication::translate("DbConfig", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DbConfig: public Ui_DbConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBCONFIG_H
