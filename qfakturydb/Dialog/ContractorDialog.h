#ifndef CONTRACTORDIALOG_H
#define CONTRACTORDIALOG_H

#include <QDialog>

namespace Ui {
class ContractorDialog;
}

class ContractorDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ContractorDialog(QWidget *parent = nullptr);
    ~ContractorDialog();

private:
    Ui::ContractorDialog *ui;
};

#endif // CONTRACTORDIALOG_H
