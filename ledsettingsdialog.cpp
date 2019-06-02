#include "ledsettingsdialog.h"
#include "ui_ledsettingsdialog.h"

LEDSettingsDialog::LEDSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LEDSettingsDialog)
{
    ui->setupUi(this);
}

LEDSettingsDialog::~LEDSettingsDialog()
{
    delete ui;
}
