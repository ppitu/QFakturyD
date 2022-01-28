#include "ContractorWidget.h"
#include "ui_ContractorWidget.h"

#include "Dialog/ContractorDialog.h"

ContractorWidget::ContractorWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContractorWidget)
{
    ui->setupUi(this);

    connect(ui->btnAdd, &QPushButton::clicked, this, &ContractorWidget::createContractor);
}

ContractorWidget::~ContractorWidget()
{
    delete ui;
}

void ContractorWidget::createContractor()
{
    ContractorDialog dialog;
    dialog.exec();
}
