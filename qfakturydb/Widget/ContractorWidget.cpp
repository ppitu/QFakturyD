#include "ContractorWidget.h"
#include "ui_ContractorWidget.h"

ContractorWidget::ContractorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContractorWidget)
{
    ui->setupUi(this);
}

ContractorWidget::~ContractorWidget()
{
    delete ui;
}
