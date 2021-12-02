#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include "Model/ProductModel.h"
#include "Widget/ProductWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      productModel(nullptr),
      productWidget(nullptr)
{
    ui->setupUi(this);

    productModel = new ProductModel(this);
    productWidget = new ProductWidget(this);
    productWidget->setModel(productModel);

    setCentralWidget(productWidget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

