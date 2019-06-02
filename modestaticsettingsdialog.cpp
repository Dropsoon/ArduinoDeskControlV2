#include "modestaticsettingsdialog.h"
#include "ui_modestaticsettingsdialog.h"

ModeStaticSettingsDialog::ModeStaticSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeStaticSettingsDialog)
{
    ui->setupUi(this);
}

ModeStaticSettingsDialog::~ModeStaticSettingsDialog()
{
    delete ui;
}

void ModeStaticSettingsDialog::on_bExit_clicked()
{
    close();
}
