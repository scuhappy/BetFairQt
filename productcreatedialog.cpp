#include "productcreatedialog.h"
#include "ui_productcreatedialog.h"

ProductCreateDialog::ProductCreateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductCreateDialog)
{
    ui->setupUi(this);
}

ProductCreateDialog::~ProductCreateDialog()
{
    delete ui;
}

void ProductCreateDialog::on_pushButton_clicked()
{

}
