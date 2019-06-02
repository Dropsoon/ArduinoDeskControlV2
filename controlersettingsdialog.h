#ifndef CONTROLERSETTINGSDIALOG_H
#define CONTROLERSETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
class ControlerSettingsDialog;
}

class ControlerSettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ControlerSettingsDialog(QWidget *parent = nullptr);
    ~ControlerSettingsDialog();

private:
    Ui::ControlerSettingsDialog *ui;
};

#endif // CONTROLERSETTINGSDIALOG_H
