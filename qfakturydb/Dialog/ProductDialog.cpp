
#include "ProductDialog.h"
#include "ui_ProductDialog.h"

#include "TypeClass/Price.h"

ProductDialog::ProductDialog(Product& product, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductDialog),
    mProduct(product)
{
    ui->setupUi(this);

    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &ProductDialog::accept);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &ProductDialog::reject);
    connect(ui->dsNet, &QDoubleSpinBox::editingFinished, this, &ProductDialog::calculateGross);
    connect(ui->cbVat, &QComboBox::currentIndexChanged, this, &ProductDialog::calculateGross);

    ui->elIdent->setText(mProduct.getIdent());
    ui->elName->setText(mProduct.getName());
    ui->elCode->setText(mProduct.getCode());
    ui->elDescription->setText(mProduct.getDescription());
    ui->elMetric->setText(mProduct.getMetric());
    ui->elQuality->setText(mProduct.getQuality());
    ui->elPKWIU->setText(mProduct.getPkwiu());
    ui->dsNet->setValue(mProduct.getPrice().getNet().toDouble());
    ui->dsGross->setValue(mProduct.getPrice().getGross().toDouble());
}

ProductDialog::~ProductDialog()
{
    delete ui;
}

void ProductDialog::accept()
{
    Price price(ui->dsNet->value(), ui->cbVat->currentText());
    Product product(mProduct.getId(), mProduct.getLastId(), ui->elIdent->text(),
                    ui->elName->text(), ui->elCode->text(), ui->elPKWIU->text(),
                    ui->elDescription->text(), ui->elQuality->text(), ui->elMetric->text(),
                    price);

    mProduct = product;

    QDialog::accept();
}

void ProductDialog::reject()
{
    QDialog::reject();
}

void ProductDialog::calculateGross()
{
    Price price(ui->dsNet->value(), ui->cbVat->currentText());
    ui->dsGross->setValue(price.getGross().toDouble());
    qDebug() << "Dziala: " << price.getGross();
}
