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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DbConfig
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QLabel *labelCon;
    QComboBox *comboBoxCom;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelUser;
    QLineEdit *lineEditUser;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelPass;
    QLineEdit *lineEditPass;
    QHBoxLayout *horizontalLayout_4;
    QLabel *labelHost;
    QLineEdit *lineEditHost;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelDb;
    QLineEdit *lineEditDb;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButtonClean;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonSave;
    QPushButton *pushButtonCancel;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *DbConfig)
    {
        if (DbConfig->objectName().isEmpty())
            DbConfig->setObjectName(QString::fromUtf8("DbConfig"));
        DbConfig->resize(400, 291);
        layoutWidget = new QWidget(DbConfig);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 10, 360, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelCon = new QLabel(layoutWidget);
        labelCon->setObjectName(QString::fromUtf8("labelCon"));
        labelCon->setMinimumSize(QSize(100, 0));
        labelCon->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(labelCon);

        comboBoxCom = new QComboBox(layoutWidget);
        comboBoxCom->addItem(QString());
        comboBoxCom->addItem(QString());
        comboBoxCom->setObjectName(QString::fromUtf8("comboBoxCom"));
        comboBoxCom->setMinimumSize(QSize(250, 0));
        comboBoxCom->setMaximumSize(QSize(250, 16777215));

        horizontalLayout->addWidget(comboBoxCom);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelUser = new QLabel(layoutWidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setMinimumSize(QSize(100, 0));
        labelUser->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(labelUser);

        lineEditUser = new QLineEdit(layoutWidget);
        lineEditUser->setObjectName(QString::fromUtf8("lineEditUser"));
        lineEditUser->setMinimumSize(QSize(250, 0));
        lineEditUser->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_2->addWidget(lineEditUser);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelPass = new QLabel(layoutWidget);
        labelPass->setObjectName(QString::fromUtf8("labelPass"));
        labelPass->setMinimumSize(QSize(100, 0));
        labelPass->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_3->addWidget(labelPass);

        lineEditPass = new QLineEdit(layoutWidget);
        lineEditPass->setObjectName(QString::fromUtf8("lineEditPass"));
        lineEditPass->setMinimumSize(QSize(250, 0));
        lineEditPass->setMaximumSize(QSize(250, 16777215));
        lineEditPass->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(lineEditPass);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        labelHost = new QLabel(layoutWidget);
        labelHost->setObjectName(QString::fromUtf8("labelHost"));
        labelHost->setMinimumSize(QSize(100, 0));
        labelHost->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_4->addWidget(labelHost);

        lineEditHost = new QLineEdit(layoutWidget);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));
        lineEditHost->setMinimumSize(QSize(250, 0));
        lineEditHost->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_4->addWidget(lineEditHost);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelDb = new QLabel(layoutWidget);
        labelDb->setObjectName(QString::fromUtf8("labelDb"));
        labelDb->setMinimumSize(QSize(100, 0));
        labelDb->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_5->addWidget(labelDb);

        lineEditDb = new QLineEdit(layoutWidget);
        lineEditDb->setObjectName(QString::fromUtf8("lineEditDb"));
        lineEditDb->setMinimumSize(QSize(250, 0));
        lineEditDb->setMaximumSize(QSize(250, 16777215));

        horizontalLayout_5->addWidget(lineEditDb);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        pushButtonClean = new QPushButton(layoutWidget);
        pushButtonClean->setObjectName(QString::fromUtf8("pushButtonClean"));
        pushButtonClean->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_6->addWidget(pushButtonClean);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        pushButtonSave = new QPushButton(layoutWidget);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayout_6->addWidget(pushButtonSave);

        pushButtonCancel = new QPushButton(layoutWidget);
        pushButtonCancel->setObjectName(QString::fromUtf8("pushButtonCancel"));

        horizontalLayout_6->addWidget(pushButtonCancel);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        retranslateUi(DbConfig);

        QMetaObject::connectSlotsByName(DbConfig);
    } // setupUi

    void retranslateUi(QDialog *DbConfig)
    {
        DbConfig->setWindowTitle(QApplication::translate("DbConfig", "Configura\303\247\303\265es", nullptr));
        label->setText(QApplication::translate("DbConfig", "Banco de Dados", nullptr));
        labelCon->setText(QApplication::translate("DbConfig", "Conex\303\243o:", nullptr));
        comboBoxCom->setItemText(0, QApplication::translate("DbConfig", "Postgres", nullptr));
        comboBoxCom->setItemText(1, QApplication::translate("DbConfig", "Oracle", nullptr));

        labelUser->setText(QApplication::translate("DbConfig", "Usu\303\241rio:", nullptr));
        labelPass->setText(QApplication::translate("DbConfig", "Senha:", nullptr));
        labelHost->setText(QApplication::translate("DbConfig", "Host:", nullptr));
        labelDb->setText(QApplication::translate("DbConfig", "Banco:", nullptr));
        pushButtonClean->setText(QApplication::translate("DbConfig", "Limpar banco", nullptr));
        pushButtonSave->setText(QApplication::translate("DbConfig", "Salvar", nullptr));
        pushButtonCancel->setText(QApplication::translate("DbConfig", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DbConfig: public Ui_DbConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DBCONFIG_H
