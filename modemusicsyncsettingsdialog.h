#ifndef MODEMUSICSYNCSETTINGSDIALOG_H
#define MODEMUSICSYNCSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ModeMusicSyncSettingsDialog;
}

class ModeMusicSyncSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModeMusicSyncSettingsDialog(QWidget *parent = nullptr);
    ~ModeMusicSyncSettingsDialog();

private:
    Ui::ModeMusicSyncSettingsDialog *ui;
};

#endif // MODEMUSICSYNCSETTINGSDIALOG_H
