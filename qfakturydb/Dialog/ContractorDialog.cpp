#include "ContractorDialog.h"
#include "ui_ContractorDialog.h"

ContractorDialog::ContractorDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ContractorDialog)
{
    ui->setupUi(this);
}

ContractorDialog::~ContractorDialog()
{
    delete ui;
}
