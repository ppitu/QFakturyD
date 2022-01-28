#ifndef CONTRACTORWIDGET_H
#define CONTRACTORWIDGET_H

#include <QWidget>

namespace Ui {
class ContractorWidget;
}

class ContractorWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ContractorWidget(QWidget *parent = nullptr);
    ~ContractorWidget();

private slots:
    void createContractor();

private:
    Ui::ContractorWidget *ui;
};

#endif // CONTRACTORWIDGET_H
