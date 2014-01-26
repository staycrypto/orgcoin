#ifndef OPENPAYDIALOG_H
#define OPENPAYDIALOG_H

#include <QDialog>

namespace Ui {
class openpayDialog;
}

class openpayDialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit openpayDialog(QWidget *parent = 0);
    ~openpayDialog();
    
private:
    Ui::openpayDialog *ui;
};

#endif // OPENPAYDIALOG_H
