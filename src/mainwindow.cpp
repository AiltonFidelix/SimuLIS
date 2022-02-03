#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    init();
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @author Ailton Fidelix
 * @date  01-25-2022
 * @note  Tela sobre o sistema
*/
void MainWindow::on_actionSobre_triggered()
{
    QMessageBox *infoMSG = new QMessageBox(this);
    infoMSG->setIconPixmap(QPixmap(":/img/icon.png").scaled(QSize(30,30)));
    infoMSG->setWindowTitle("Sobre");
    infoMSG->setText("Este software simula uma solicitação\n"
                     "de exame vinda de um sistema LIS.\n\n"
                     "Autor: Ailton Fidelix\n"
                     "Versão: 1.0.0");
    infoMSG->addButton(QMessageBox::Ok)->setMinimumSize(80,30);
    infoMSG->exec();
}

/**
 * @author Ailton Fidelix
 * @date  01-26-2022
 * @note  Faz a solicitação de exame
*/
void MainWindow::on_pushButtonSend_clicked()
{
    QHash<QString, QString> solicitation;

    if(ui->lineEditName->text() == "" || ui->lineEditId->text()  == "" || ui->lineEditCodExam->text() == ""
            || ui->lineEditCodVer->text() == "" || ui->lineEditCodMat->text() == ""
            || ui->lineEditCodSol->text() == "" || ui->lineEditCodAmo->text() == ""){
        QMessageBox::warning(this, "Erro", "Por favor preencha todos os campos!");
        return;
    }

    solicitation["name"] = ui->lineEditName->text();
    solicitation["sex"] = ui->comboBoxSex->currentText();
    solicitation["sol"] = ui->lineEditCodSol->text();
    solicitation["amo"] = ui->lineEditCodAmo->text();
    solicitation["idCom"] = ui->lineEditId->text();
    solicitation["lisEx"] = ui->lineEditCodExam->text();
    solicitation["lisVer"] = ui->lineEditCodVer->text();
    solicitation["lisMat"] = ui->lineEditCodMat->text();

    if(m_db.solicitation(solicitation))
        QMessageBox::information(this, "Sucesso", "Pedido solicitado com sucesso!");
    else {
        QString message = "Erro: " + m_db.errorMessage();
        qInfo() << message;
        QMessageBox::warning(this, "Erro", message);
    }

    clearFields();
}

/**
 * @author Ailton Fidelix
 * @date  01-26-2022
 * @note  Limpa todos os campos
*/
void MainWindow::clearFields()
{
    ui->lineEditName->clear();
    ui->lineEditCodSol->clear();
    ui->lineEditCodAmo->clear();
    ui->comboBoxSex->setCurrentIndex(0);
    ui->lineEditId->clear();
    ui->lineEditCodExam->clear();
    ui->lineEditCodVer->clear();
    ui->lineEditCodMat->clear();
}

/**
 * @author Ailton Fidelix
 * @date  01-27-2022
 * @note  Chama tela de configuração do banco
*/
void MainWindow::on_actionBanco_de_Dados_triggered()
{
    DbConfig config;
    config.exec();
}

/**
 * @author Ailton Fidelix
 * @date  02-02-2022
 * @note  Inicia conexão com o banco de dados
*/
void MainWindow::init()
{
    QString message = "";

    Config data;

    QHash<QString, QString> c = data.getConfig();

    if(m_db.connect(c["database"], c["type"], c["host"], c["username"], c["password"], c["port"])){
        message = "Conectado ao banco: " + c["database"];
        ui->statusbar->showMessage(message);
    }
    else{
        message = "Falha ao conectar: " + m_db.errorMessage();
        ui->statusbar->showMessage(message);
    }
}
