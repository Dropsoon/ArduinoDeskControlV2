#include "applicationsettingsdialog.h"
#include "ui_applicationsettingsdialog.h"

ApplicationSettingsDialog::ApplicationSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ApplicationSettingsDialog)
{
    ui->setupUi(this);
}

ApplicationSettingsDialog::~ApplicationSettingsDialog()
{
    delete ui;
}

void ApplicationSettingsDialog::on_pushButton_clicked()
{
    close();
}
