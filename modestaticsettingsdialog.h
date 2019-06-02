#ifndef MODESTATICSETTINGSDIALOG_H
#define MODESTATICSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ModeStaticSettingsDialog;
}

class ModeStaticSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModeStaticSettingsDialog(QWidget *parent = nullptr);
    ~ModeStaticSettingsDialog();

private:
    Ui::ModeStaticSettingsDialog *ui;
};

#endif // MODESTATICSETTINGSDIALOG_H
