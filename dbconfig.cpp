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
