#ifndef DBCONFIG_H
#define DBCONFIG_H

#include <QDialog>

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

private:
    Ui::DbConfig *ui;
};

#endif // DBCONFIG_H
