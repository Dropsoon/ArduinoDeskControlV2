#include "moderainbowsettingsdialog.h"
#include "ui_moderainbowsettingsdialog.h"
#include "mainwindow.h"

ModeRainbowSettingsDialog::ModeRainbowSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeRainbowSettingsDialog)
{
    ui->setupUi(this);
    MainWindow main;
    speed = stoi(main.settingsf.get_setting("rainbowspeed"));
    ui->sSpeed->setValue(speed);
}

ModeRainbowSettingsDialog::~ModeRainbowSettingsDialog()
{
    delete ui;
}

void ModeRainbowSettingsDialog::on_bExit_clicked()
{
    close();
}

void ModeRainbowSettingsDialog::on_bSave_clicked()
{
    MainWindow main;
    main.settingsf.set_setting("rainbowspeed", std::to_string(speed));
    main.settingsf.save_file("settings.txt");
}

void ModeRainbowSettingsDialog::on_sSpeed_sliderMoved(int position)
{
    speed = position;
}
