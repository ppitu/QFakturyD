#include "ProductWidget.h"
#include "ui_ProductWidget.h"

#include "Model/ProductModel.h"
#include "Dialog/ProductDialog.h"

ProductWidget::ProductWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWidget),
    productModel(nullptr)
{
    ui->setupUi(this);

    connect(ui->btnAdd, &QPushButton::clicked, this, &ProductWidget::createProduct);
    connect(ui->btnRemove, &QPushButton::clicked, this, &ProductWidget::removeProduct);
    connect(ui->btnEdit, &QPushButton::clicked, this, &ProductWidget::editProduct);
}

ProductWidget::~ProductWidget()
{
    delete ui;
}

void ProductWidget::setModel(ProductModel *model)
{
    productModel = model;
    ui->productTable->setModel(productModel);
}

void ProductWidget::createProduct()
{
    Product product;

    ProductDialog dialog(product);

    auto dialogCode = dialog.exec();

    if(dialogCode == QDialog::Accepted)
    {
        QModelIndex createdIndex = productModel->addProduct(product);
        ui->productTable->setCurrentIndex(createdIndex);
    }
}

void ProductWidget::editProduct()
{
    if(ui->productTable->selectionModel()->selectedIndexes().isEmpty())
    {
        return;
    }

    QModelIndex currentProductIndex = ui->productTable->selectionModel()->selectedIndexes().first();

    auto product = qvariant_cast<Product>(productModel->data(currentProductIndex, ProductModel::Roles::ID_ROLE));

    ProductDialog dialog(product, this);

    auto dialogCode = dialog.exec();

    if(dialogCode == QDialog::Accepted)
    {
        productModel->setData(currentProductIndex, QVariant::fromValue(product), ProductModel::Roles::ID_ROLE);
    }
}

void ProductWidget::removeProduct()
{
    if(ui->productTable->selectionModel()->selectedIndexes().isEmpty())
    {
        return;
    }

    int row = ui->productTable->selectionModel()->currentIndex().row();
    productModel->removeRow(row);
}
