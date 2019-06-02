#include "moderainbowsettingsdialog.h"
#include "ui_moderainbowsettingsdialog.h"

ModeRainbowSettingsDialog::ModeRainbowSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeRainbowSettingsDialog)
{
    ui->setupUi(this);
}

ModeRainbowSettingsDialog::~ModeRainbowSettingsDialog()
{
    delete ui;
}
