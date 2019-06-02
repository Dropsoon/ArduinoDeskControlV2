#include "modemusicsyncsettingsdialog.h"
#include "ui_modemusicsyncsettingsdialog.h"

ModeMusicSyncSettingsDialog::ModeMusicSyncSettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModeMusicSyncSettingsDialog)
{
    ui->setupUi(this);
}

ModeMusicSyncSettingsDialog::~ModeMusicSyncSettingsDialog()
{
    delete ui;
}
