#include "controlersettingsdialog.h"
#include "ui_controlersettingsdialog.h"

ControlerSettingsDialog::ControlerSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControlerSettingsDialog)
{
    ui->setupUi(this);
}

ControlerSettingsDialog::~ControlerSettingsDialog()
{
    delete ui;
}
