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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_6;
    QVBoxLayout *verticalLayout;
    QFrame *line_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelProtocolo;
    QComboBox *comboBoxProtocolo;
    QSpacerItem *horizontalSpacer_4;
    QFrame *line;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelData;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QLineEdit *lineEditName;
    QLabel *labelSex;
    QComboBox *comboBoxSex;
    QSpacerItem *verticalSpacer_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelId;
    QLineEdit *lineEditId;
    QLabel *labelCodSol;
    QLineEdit *lineEditCodSol;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditCodAmo;
    QLabel *labelCodExam;
    QLineEdit *lineEditCodExam;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEditCodVer;
    QLabel *label_2;
    QLineEdit *lineEditCodMat;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonSend;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_3;
    QSpacerItem *horizontalSpacer_7;
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
        MainWindow->resize(608, 439);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMaximumSize(QSize(800, 800));
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
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelProtocolo = new QLabel(centralwidget);
        labelProtocolo->setObjectName(QString::fromUtf8("labelProtocolo"));
        labelProtocolo->setMinimumSize(QSize(130, 0));
        labelProtocolo->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_7->addWidget(labelProtocolo);

        comboBoxProtocolo = new QComboBox(centralwidget);
        comboBoxProtocolo->addItem(QString());
        comboBoxProtocolo->addItem(QString());
        comboBoxProtocolo->setObjectName(QString::fromUtf8("comboBoxProtocolo"));
        comboBoxProtocolo->setMinimumSize(QSize(150, 0));
        comboBoxProtocolo->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_7->addWidget(comboBoxProtocolo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_7);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        verticalSpacer_4 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        labelData = new QLabel(centralwidget);
        labelData->setObjectName(QString::fromUtf8("labelData"));

        horizontalLayout_5->addWidget(labelData);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_8 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_8);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelName = new QLabel(centralwidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setMinimumSize(QSize(130, 0));
        labelName->setMaximumSize(QSize(130, 16777215));

        horizontalLayout->addWidget(labelName);

        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setMinimumSize(QSize(290, 0));
        lineEditName->setMaximumSize(QSize(290, 16777215));

        horizontalLayout->addWidget(lineEditName);

        labelSex = new QLabel(centralwidget);
        labelSex->setObjectName(QString::fromUtf8("labelSex"));
        labelSex->setMinimumSize(QSize(50, 0));
        labelSex->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(labelSex);

        comboBoxSex = new QComboBox(centralwidget);
        comboBoxSex->addItem(QString());
        comboBoxSex->addItem(QString());
        comboBoxSex->setObjectName(QString::fromUtf8("comboBoxSex"));
        comboBoxSex->setMinimumSize(QSize(50, 0));
        comboBoxSex->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(comboBoxSex);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_5 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelId = new QLabel(centralwidget);
        labelId->setObjectName(QString::fromUtf8("labelId"));
        labelId->setMinimumSize(QSize(130, 0));
        labelId->setMaximumSize(QSize(130, 16777215));
        labelId->setSizeIncrement(QSize(0, 0));

        horizontalLayout_2->addWidget(labelId);

        lineEditId = new QLineEdit(centralwidget);
        lineEditId->setObjectName(QString::fromUtf8("lineEditId"));
        lineEditId->setMinimumSize(QSize(150, 0));
        lineEditId->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(lineEditId);

        labelCodSol = new QLabel(centralwidget);
        labelCodSol->setObjectName(QString::fromUtf8("labelCodSol"));
        labelCodSol->setMinimumSize(QSize(130, 0));
        labelCodSol->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_2->addWidget(labelCodSol);

        lineEditCodSol = new QLineEdit(centralwidget);
        lineEditCodSol->setObjectName(QString::fromUtf8("lineEditCodSol"));
        lineEditCodSol->setMinimumSize(QSize(150, 0));
        lineEditCodSol->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_2->addWidget(lineEditCodSol);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_6 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(130, 0));
        label_3->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(label_3);

        lineEditCodAmo = new QLineEdit(centralwidget);
        lineEditCodAmo->setObjectName(QString::fromUtf8("lineEditCodAmo"));
        lineEditCodAmo->setMinimumSize(QSize(150, 0));
        lineEditCodAmo->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(lineEditCodAmo);

        labelCodExam = new QLabel(centralwidget);
        labelCodExam->setObjectName(QString::fromUtf8("labelCodExam"));
        labelCodExam->setMinimumSize(QSize(130, 0));
        labelCodExam->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_3->addWidget(labelCodExam);

        lineEditCodExam = new QLineEdit(centralwidget);
        lineEditCodExam->setObjectName(QString::fromUtf8("lineEditCodExam"));
        lineEditCodExam->setMinimumSize(QSize(150, 0));
        lineEditCodExam->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_3->addWidget(lineEditCodExam);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_7 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_7);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(130, 0));
        label->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_4->addWidget(label);

        lineEditCodVer = new QLineEdit(centralwidget);
        lineEditCodVer->setObjectName(QString::fromUtf8("lineEditCodVer"));
        lineEditCodVer->setMinimumSize(QSize(150, 0));
        lineEditCodVer->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lineEditCodVer);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(130, 0));
        label_2->setMaximumSize(QSize(130, 16777215));

        horizontalLayout_4->addWidget(label_2);

        lineEditCodMat = new QLineEdit(centralwidget);
        lineEditCodMat->setObjectName(QString::fromUtf8("lineEditCodMat"));
        lineEditCodMat->setMinimumSize(QSize(150, 0));
        lineEditCodMat->setMaximumSize(QSize(150, 16777215));

        horizontalLayout_4->addWidget(lineEditCodMat);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        pushButtonSend = new QPushButton(centralwidget);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));

        horizontalLayout_6->addWidget(pushButtonSend);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_6);

        verticalSpacer_3 = new QSpacerItem(580, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 608, 22));
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
        labelProtocolo->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Usar protocolo:    </span></p></body></html>", nullptr));
        comboBoxProtocolo->setItemText(0, QApplication::translate("MainWindow", "LWSDE3", nullptr));
        comboBoxProtocolo->setItemText(1, QApplication::translate("MainWindow", "LWSDE2", nullptr));

        labelData->setText(QApplication::translate("MainWindow", "<b>Dados da solicita\303\247\303\243o</b>", nullptr));
        labelName->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Nome paciente:</span></p></body></html>", nullptr));
        labelSex->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Sexo:</span></p></body></html>", nullptr));
        comboBoxSex->setItemText(0, QApplication::translate("MainWindow", "M", nullptr));
        comboBoxSex->setItemText(1, QApplication::translate("MainWindow", "F", nullptr));

        labelId->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">ID solicita\303\247\303\243o: </span></p></body></html>", nullptr));
        labelCodSol->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Solicita\303\247\303\243o:</b>", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Amostra:</b>", nullptr));
        labelCodExam->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">C\303\263d. Exame LIS:</span></p></body></html>", nullptr));
        label->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Vers\303\243o LIS:</b>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<b>C\303\263d. Material LIS:</b>", nullptr));
        pushButtonSend->setText(QApplication::translate("MainWindow", "Solicitar Exame", nullptr));
        menuConfigura_es->setTitle(QApplication::translate("MainWindow", "Configura\303\247\303\265es", nullptr));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Sobre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
