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

void LEDSettingsDialog::on_cEnabledPort1_clicked(bool checked)
{
    if(checked){
        ui->hPixelsCount1->setEnabled(true);
        ui->lcdPort1->setEnabled(true);
    } else {
        ui->hPixelsCount1->setEnabled(false);
        ui->lcdPort1->setEnabled(false);
    }
}

void LEDSettingsDialog::on_cEnabledPort2_toggled(bool checked)
{
    if(checked){
        ui->hPixelsCount2->setEnabled(true);
        ui->lcdPort2->setEnabled(true);
    } else {
        ui->hPixelsCount2->setEnabled(false);
        ui->lcdPort2->setEnabled(false);
    }
}

void LEDSettingsDialog::on_cEnabledPort3_toggled(bool checked)
{
    if(checked){
        ui->hPixelsCount3->setEnabled(true);
        ui->lcdPort3->setEnabled(true);
    } else {
        ui->hPixelsCount3->setEnabled(false);
        ui->lcdPort3->setEnabled(false);
    }
}

void LEDSettingsDialog::on_pushButton_2_clicked()
{
    close();
}
