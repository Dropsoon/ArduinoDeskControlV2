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

    int portpixels1, portpixels2, portpixels3;
    std::string portenabled1, portenabled2, portenabled3;

private slots:
    void on_cEnabledPort1_clicked(bool checked);

    void on_cEnabledPort2_toggled(bool checked);

    void on_cEnabledPort3_toggled(bool checked);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_hPixelsCount1_sliderMoved(int position);

    void on_hPixelsCount2_sliderMoved(int position);

    void on_hPixelsCount3_sliderMoved(int position);

private:
    Ui::LEDSettingsDialog *ui;
};

#endif // LEDSETTINGSDIALOG_H
