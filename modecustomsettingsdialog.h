#ifndef MODECUSTOMSETTINGSDIALOG_H
#define MODECUSTOMSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ModeCustomSettingsDialog;
}

class ModeCustomSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModeCustomSettingsDialog(QWidget *parent = nullptr);
    ~ModeCustomSettingsDialog();

private:
    Ui::ModeCustomSettingsDialog *ui;
};

#endif // MODECUSTOMSETTINGSDIALOG_H
