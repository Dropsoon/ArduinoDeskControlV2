#ifndef MODERAINBOWSETTINGSDIALOG_H
#define MODERAINBOWSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ModeRainbowSettingsDialog;
}

class ModeRainbowSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModeRainbowSettingsDialog(QWidget *parent = nullptr);
    ~ModeRainbowSettingsDialog();

private:
    Ui::ModeRainbowSettingsDialog *ui;
};

#endif // MODERAINBOWSETTINGSDIALOG_H
