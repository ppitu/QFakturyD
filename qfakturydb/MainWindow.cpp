#include "MainWindow.h"
#include "./ui_MainWindow.h"

#include "Model/ProductModel.h"
#include "Widget/ProductWidget.h"
#include "Widget/ContractorWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      productModel(nullptr),
      productWidget(nullptr),
      contractorWidget(nullptr)
{
    ui->setupUi(this);

    productWidget = new ProductWidget(this);
    contractorWidget = new ContractorWidget(this);

    ui->tabWidget->addTab(productWidget, "Produkty");
    ui->tabWidget->addTab(contractorWidget, "Kontrahenci");

    ui->WMessageLog->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

