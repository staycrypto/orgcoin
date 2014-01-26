#include "openpaydialog.h"
#include "ui_openpaydialog.h"

openpayDialog::openpayDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::openpayDialog)
{
    ui->setupUi(this);
}

openpayDialog::~openpayDialog()
{
    delete ui;
}
