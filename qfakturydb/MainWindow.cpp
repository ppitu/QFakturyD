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
  ui->WMessageLog->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

