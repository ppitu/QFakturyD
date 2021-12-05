#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include <QWidget>

namespace Ui {
class ProductWidget;
}

class ProductModel;

class ProductWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWidget(QWidget *parent = nullptr);
    ~ProductWidget();

    void setModel(ProductModel* model);

private slots:
    void createProduct();
    void editProduct();
    void removeProduct();

private:
    Ui::ProductWidget *ui;

    ProductModel* productModel;
};

#endif // PRODUCTWIDGET_H
