#include "modestaticsettingsdialog.h"
#include "ui_modestaticsettingsdialog.h"
#include <QPalette>

ModeStaticSettingsDialog::ModeStaticSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeStaticSettingsDialog)
{
    ui->setupUi(this);

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
