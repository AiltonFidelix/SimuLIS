/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionBanco_de_Dados;
    QAction *actionSobre;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelSex;
    QComboBox *comboBoxSex;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelId;
    QLineEdit *lineEditId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelCodExam;
    QLineEdit *lineEditCodExam;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEditCodVer;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *lineEditCodMat;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSend;
    QSpacerItem *horizontalSpacer;
    QMenuBar *menubar;
    QMenu *menuConfigura_es;
    QMenu *menuSobre;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(422, 396);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(600, 600));
        MainWindow->setBaseSize(QSize(0, 0));
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setAnimated(true);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        actionBanco_de_Dados = new QAction(MainWindow);
        actionBanco_de_Dados->setObjectName(QString::fromUtf8("actionBanco_de_Dados"));
        actionSobre = new QAction(MainWindow);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 381, 321));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(layoutWidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setMinimumSize(QSize(130, 0));
        labelName->setMaximumSize(QSize(130, 16777215));

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(layoutWidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(150, 0));
        lineEditName->setMaximumSize(QSize(150, 16777215));

        horizontalLayout->addWidget(lineEditName);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelSex = new QLabel(layoutWidget);
        labelSex->setObjectName(QString::fromUtf8("labelSex"));
        labelSex->setMinimumSize(QSize(130, 0));
        labelSex->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_7->addWidget(labelSex);

        comboBoxSex = new QComboBox(layoutWidget);
        comboBoxSex->addItem(QString());
        comboBoxSex->addItem(QString());
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));
        comboBoxSex->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(comboBoxSex);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelId = new QLabel(layoutWidget);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setMinimumSize(QSize(130, 0));
        labelId->setMaximumSize(QSize(130, 16777215));
        labelId->setSizeIncrement(QSize(0, 0));

        horizontalLayout_2->addWidget(labelId);

        lineEditId = new QLineEdit(layoutWidget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(lineEditId);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        labelCodExam = new QLabel(layoutWidget);
        labelCodExam->setObjectName(QString::fromUtf8("labelCodExam"));
        labelCodExam->setMinimumSize(QSize(130, 0));
        labelCodExam->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(labelCodExam);

        lineEditCodExam = new QLineEdit(layoutWidget);
        lineEditCodExam->setObjectName(QString::fromUtf8("lineEditCodExam"));
        lineEditCodExam->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(lineEditCodExam);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(130, 0));
        label->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_4->addWidget(label);

        lineEditCodVer = new QLineEdit(layoutWidget);
        lineEditCodVer->setObjectName(QString::fromUtf8("lineEditCodVer"));
        lineEditCodVer->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lineEditCodVer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(130, 0));
        label_2->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_5->addWidget(label_2);

        lineEditCodMat = new QLineEdit(layoutWidget);
        lineEditCodMat->setObjectName(QString::fromUtf8("lineEditCodMat"));
        lineEditCodMat->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_5->addWidget(lineEditCodMat);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButtonSend = new QPushButton(layoutWidget);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        horizontalLayout_6->addWidget(pushButtonSend);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 422, 22));
        menuConfigura_es = new QMenu(menubar);
        menuConfigura_es->setObjectName(QString::fromUtf8("menuConfigura_es"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QString::fromUtf8("menuSobre"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuConfigura_es->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuConfigura_es->addAction(actionBanco_de_Dados);
        menuSobre->addAction(actionSobre);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "SimuLIS", nullptr));
        MainWindow->setWindowFilePath(QString());
        actionBanco_de_Dados->setText(QApplication::translate("MainWindow", "Banco de Dados", nullptr));
        actionSobre->setText(QApplication::translate("MainWindow", "Sobre", nullptr));
        labelName->setText(QApplication::translate("MainWindow", "<b>Nome:</b>", nullptr));
        labelSex->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Sexo:</span></p></body></html>", nullptr));
        comboBoxSex->setItemText(0, QApplication::translate("MainWindow", "M", nullptr));
        comboBoxSex->setItemText(1, QApplication::translate("MainWindow", "F", nullptr));

        labelId->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">ID:                  </span></p></body></html>", nullptr));
        labelCodExam->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">C\303\263d. Exame LIS:</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Vers\303\243o LIS:</b>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Material LIS:</b>", nullptr));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Solicitar", nullptr));
        menuConfigura_es->setTitle(QApplication::translate("MainWindow", "Configura\303\247\303\265es", nullptr));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
