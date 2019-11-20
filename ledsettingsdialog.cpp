#include "ledsettingsdialog.h"
#include "ui_ledsettingsdialog.h"
#include "mainwindow.h"

LEDSettingsDialog::LEDSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LEDSettingsDialog)
{
    ui->setupUi(this);

    MainWindow main;

    //wczytywanie ustawien

    ui->hPixelsCount1->setValue(stoi(main.settingsf.get_setting("portpixels1")));
    ui->hPixelsCount2->setValue(stoi(main.settingsf.get_setting("portpixels2")));
    ui->hPixelsCount3->setValue(stoi(main.settingsf.get_setting("portpixels3")));

    if(main.settingsf.get_setting("portenabled1") == "true"){
        ui->hPixelsCount1->setEnabled(true);
        ui->lcdPort1->setEnabled(true);
        ui->cEnabledPort1->setChecked(true);
    } else{
        ui->hPixelsCount1->setEnabled(false);
        ui->lcdPort1->setEnabled(false);
        ui->cEnabledPort1->setChecked(false);
    }

    if(main.settingsf.get_setting("portenabled2") == "true"){
        ui->hPixelsCount2->setEnabled(true);
        ui->lcdPort2->setEnabled(true);
        ui->cEnabledPort2->setChecked(true);
    } else {
        ui->hPixelsCount2->setEnabled(false);
        ui->lcdPort2->setEnabled(false);
        ui->cEnabledPort2->setChecked(false);
    }

    if(main.settingsf.get_setting("portenabled3") == "true"){
        ui->hPixelsCount3->setEnabled(true);
        ui->lcdPort3->setEnabled(true);
        ui->cEnabledPort3->setChecked(true);
    } else {
        ui->hPixelsCount3->setEnabled(false);
        ui->lcdPort3->setEnabled(false);
        ui->cEnabledPort3->setChecked(false);
    }
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

void LEDSettingsDialog::on_pushButton_2_clicked() //exit
{
    close();
}

void LEDSettingsDialog::on_pushButton_clicked() //save
{
    //TODO
}
