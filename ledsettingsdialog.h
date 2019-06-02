#ifndef LEDSETTINGSDIALOG_H
#define LEDSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class LEDSettingsDialog;
}

class LEDSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LEDSettingsDialog(QWidget *parent = nullptr);
    ~LEDSettingsDialog();

private:
    Ui::LEDSettingsDialog *ui;
};

#endif // LEDSETTINGSDIALOG_H
