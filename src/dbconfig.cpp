#include "dbconfig.h"
#include "ui_dbconfig.h"

DbConfig::DbConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DbConfig)
{
    ui->setupUi(this);

    m_data = m_config.getConfig();

    ui->lineEditUser->setText(m_data["username"]);
    ui->lineEditPass->setText(m_data["password"]);
    ui->lineEditHost->setText(m_data["host"]);
    ui->lineEditDb->setText(m_data["database"]);

    if(m_data["type"] == "QOCI")
        ui->comboBoxCom->setCurrentIndex(1);
    else {
        ui->comboBoxCom->setCurrentIndex(0);
    }

}

DbConfig::~DbConfig()
{
    delete ui;
}

void DbConfig::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

/**
 * @author Ailton Fidelix
 * @date  01-27-2022
 * @note  Fecha configurações
*/
void DbConfig::on_pushButtonCancel_clicked()
{
    close();
}

/**
 * @author Ailton Fidelix
 * @date  01-27-2022
 * @note  Salva os dados de configurações do banco no json
*/
void DbConfig::on_pushButtonSave_clicked()
{
    if(ui->lineEditUser->text() == "" || ui->lineEditPass->text()  == ""
            || ui->lineEditHost->text() == "" || ui->lineEditDb->text() == ""){
        QMessageBox::warning(this, "Erro", "Por favor preencha todos os campos!");
        return;
    }

    m_data["type"] = ui->comboBoxCom->currentText() == "Oracle" ? "QOCI" : "QPSQL";
    m_data["username"] = ui->lineEditUser->text();
    m_data["password"] = ui->lineEditPass->text();
    m_data["host"] = ui->lineEditHost->text();
    m_data["database"] = ui->lineEditDb->text();

    if(m_config.setConfig(m_data))
        QMessageBox::information(this, "Sucesso", "Configurações salvas com sucesso!");
    else {
        QMessageBox::warning(this, "Erro", "Falha ao salvar configurações!");
    }
    close();
}

/**
 * @author Ailton Fidelix
 * @date  02-02-2022
 * @note  Limpa todo o banco de dados
*/
void DbConfig::on_pushButtonClean_clicked()
{   /*
    QMessageBox msgBox;
    msgBox.setWindowTitle("Atenção");
    msgBox.setText("Esse operação irá limpar todos os dados do banco. Deseja continuar?");
    msgBox.setStandardButtons(QMessageBox::Cancel | QMessageBox::Ok);
    msgBox.setDefaultButton(QMessageBox::Cancel);
    int ret = msgBox.exec();

    if(ret == QMessageBox::Ok){

        DataBase m_db;

        if(m_db.cleanTables())
            QMessageBox::information(this, "Sucesso", "Banco limpo com sucesso!");
        else {
            QString message = "Erro: " + m_db.errorMessage();
            QMessageBox::warning(this, "Erro", message);
        }
    }
    */
    QMessageBox::warning(this, "Ops", "Essa funcionalidade ainda não foi implementada.\n Sorry!");
}
