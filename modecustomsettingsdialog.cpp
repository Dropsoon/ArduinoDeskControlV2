#include "modecustomsettingsdialog.h"
#include "ui_modecustomsettingsdialog.h"

ModeCustomSettingsDialog::ModeCustomSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeCustomSettingsDialog)
{
    ui->setupUi(this);
}

ModeCustomSettingsDialog::~ModeCustomSettingsDialog()
{
    delete ui;
}
