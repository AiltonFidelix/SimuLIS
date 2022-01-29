#include "dbconfig.h"
#include "ui_dbconfig.h"

DbConfig::DbConfig(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DbConfig)
{
    ui->setupUi(this);
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
    m_data["user"] = ui->lineEditUser->text();
    m_data["pass"] = ui->lineEditPass->text();
    m_data["host"] = ui->lineEditHost->text();
    m_data["dbname"] = ui->lineEditDb->text();

    if(m_config.setConfig(m_data))
        QMessageBox::information(this, "Sucesso", "Configurações salvas com sucesso!");
    else {
        QMessageBox::warning(this, "Erro", "Falha ao salvar configurações!");
    }
    close();
}
