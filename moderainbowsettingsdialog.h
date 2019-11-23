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
    int speed;

private slots:
    void on_bExit_clicked();

    void on_bSave_clicked();

    void on_sSpeed_sliderMoved(int position);

private:
    Ui::ModeRainbowSettingsDialog *ui;
};

#endif // MODERAINBOWSETTINGSDIALOG_H
