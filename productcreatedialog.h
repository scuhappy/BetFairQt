#ifndef PRODUCTCREATEDIALOG_H
#define PRODUCTCREATEDIALOG_H

#include <QDialog>

namespace Ui {
class ProductCreateDialog;
}

class ProductCreateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ProductCreateDialog(QWidget *parent = 0);
    ~ProductCreateDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ProductCreateDialog *ui;
};

#endif // PRODUCTCREATEDIALOG_H
