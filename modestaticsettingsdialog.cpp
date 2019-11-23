#include "modestaticsettingsdialog.h"
#include "ui_modestaticsettingsdialog.h"
#include <QPalette>
#include "mainwindow.h"

ModeStaticSettingsDialog::ModeStaticSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeStaticSettingsDialog)
{
    ui->setupUi(this);

    MainWindow main;
    iRedVal = stoi(main.settingsf.get_setting("customred"));
    iGreenVal = stoi(main.settingsf.get_setting("customgreen"));
    iBlueVal = stoi(main.settingsf.get_setting("customblue"));

    ui->sRed->setValue(iRedVal);
    ui->sGreen->setValue(iGreenVal);
    ui->sBlue->setValue(iBlueVal);

    connect(ui->sRed, &QAbstractSlider::sliderMoved, this, &ModeStaticSettingsDialog::onColorChanged);
    connect(ui->sGreen, &QAbstractSlider::sliderMoved, this, &ModeStaticSettingsDialog::onColorChanged);
    connect(ui->sBlue, &QAbstractSlider::sliderMoved, this, &ModeStaticSettingsDialog::onColorChanged);
    onColorChanged();
}

ModeStaticSettingsDialog::~ModeStaticSettingsDialog()
{
    delete ui;
}

void ModeStaticSettingsDialog::on_bExit_clicked()
{
    close();
}

void ModeStaticSettingsDialog::on_sRed_valueChanged(int value)
{
    iRedVal = value;
}

void ModeStaticSettingsDialog::on_sGreen_valueChanged(int value)
{
    iGreenVal = value;
}

void ModeStaticSettingsDialog::on_sBlue_valueChanged(int value)
{
    iBlueVal = value;
}

void ModeStaticSettingsDialog::onColorChanged()
{
    m_color.setRgb(ui->sRed->value(), ui->sGreen->value(), ui->sBlue->value());
    QPalette pal = ui->wDisplayColor->palette();
    pal.setColor(QPalette::Window, m_color);
    ui->wDisplayColor->setPalette(pal);
    emit colorChanged(m_color);
}

void ModeStaticSettingsDialog::on_bSave_clicked()
{
    MainWindow main;
    main.settingsf.set_setting("customred", std::to_string(iRedVal));
    main.settingsf.set_setting("customgreen", std::to_string(iGreenVal));
    main.settingsf.set_setting("customblue", std::to_string(iBlueVal));
    main.settingsf.save_file("settings.txt");
}
