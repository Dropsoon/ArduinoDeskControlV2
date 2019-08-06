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

private slots:
    void on_cEnabledPort1_clicked(bool checked);

    void on_cEnabledPort2_toggled(bool checked);

    void on_cEnabledPort3_toggled(bool checked);

    void on_pushButton_2_clicked();

private:
    Ui::LEDSettingsDialog *ui;
};

#endif // LEDSETTINGSDIALOG_H
