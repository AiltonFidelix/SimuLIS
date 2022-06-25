#ifndef DBCONFIG_H
#define DBCONFIG_H

#include <QDialog>
#include <QMessageBox>
#include "database.h"
#include "config.h"

namespace Ui {
class DbConfig;
}

class DbConfig : public QDialog
{
    Q_OBJECT

public:
    explicit DbConfig(QWidget *parent = nullptr);
    ~DbConfig();

protected:
    void changeEvent(QEvent *e);

private slots:
    void on_pushButtonCancel_clicked();
    void on_pushButtonSave_clicked();
    void on_pushButtonClean_clicked();

private:
    Ui::DbConfig *ui;
    Config m_config;
    QHash<QString, QString> m_data;
};

#endif // DBCONFIG_H
