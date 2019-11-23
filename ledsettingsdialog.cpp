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

    portpixels1 = stoi(main.settingsf.get_setting("portpixels1"));
    portpixels2 = stoi(main.settingsf.get_setting("portpixels2"));
    portpixels3 = stoi(main.settingsf.get_setting("portpixels3"));

    portenabled1 = main.settingsf.get_setting("portenabled1");
    portenabled2 = main.settingsf.get_setting("portenabled2");
    portenabled3 = main.settingsf.get_setting("portenabled3");

    ui->hPixelsCount1->setValue(portpixels1);
    ui->hPixelsCount2->setValue(portpixels2);
    ui->hPixelsCount3->setValue(portpixels3);

    if(portenabled1 == "true"){
        ui->hPixelsCount1->setEnabled(true);
        ui->lcdPort1->setEnabled(true);
        ui->cEnabledPort1->setChecked(true);
    } else{
        ui->hPixelsCount1->setEnabled(false);
        ui->lcdPort1->setEnabled(false);
        ui->cEnabledPort1->setChecked(false);
    }

    if(portenabled2 == "true"){
        ui->hPixelsCount2->setEnabled(true);
        ui->lcdPort2->setEnabled(true);
        ui->cEnabledPort2->setChecked(true);
    } else {
        ui->hPixelsCount2->setEnabled(false);
        ui->lcdPort2->setEnabled(false);
        ui->cEnabledPort2->setChecked(false);
    }

    if(portenabled3 == "true"){
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
        portenabled1 = "true";
    } else {
        ui->hPixelsCount1->setEnabled(false);
        ui->lcdPort1->setEnabled(false);
        portenabled1 = "false";
    }
}

void LEDSettingsDialog::on_cEnabledPort2_toggled(bool checked)
{
    if(checked){
        ui->hPixelsCount2->setEnabled(true);
        ui->lcdPort2->setEnabled(true);
        portenabled2 = "true";
    } else {
        ui->hPixelsCount2->setEnabled(false);
        ui->lcdPort2->setEnabled(false);
        portenabled2 = "false";
    }
}

void LEDSettingsDialog::on_cEnabledPort3_toggled(bool checked)
{
    if(checked){
        ui->hPixelsCount3->setEnabled(true);
        ui->lcdPort3->setEnabled(true);
        portenabled3 = "true";
    } else {
        ui->hPixelsCount3->setEnabled(false);
        ui->lcdPort3->setEnabled(false);
        portenabled3 = "false";
    }
}

void LEDSettingsDialog::on_pushButton_2_clicked() //exit
{
    close();
}

void LEDSettingsDialog::on_pushButton_clicked() //save
{
    MainWindow main;
    main.settingsf.set_setting("portpixels1", std::to_string(portpixels1));
    main.settingsf.set_setting("portpixels2", std::to_string(portpixels2));
    main.settingsf.set_setting("portpixels3", std::to_string(portpixels3));
    main.settingsf.set_setting("portenabled1", portenabled1);
    main.settingsf.set_setting("portenabled2", portenabled2);
    main.settingsf.set_setting("portenabled3", portenabled3);
    main.settingsf.save_file("settings.txt");
}

void LEDSettingsDialog::on_hPixelsCount1_sliderMoved(int position)
{
    portpixels1 = position;
}

void LEDSettingsDialog::on_hPixelsCount2_sliderMoved(int position)
{
    portpixels2 = position;
}

void LEDSettingsDialog::on_hPixelsCount3_sliderMoved(int position)
{
    portpixels3 = position;
}
