#ifndef MODESTATICSETTINGSDIALOG_H
#define MODESTATICSETTINGSDIALOG_H

#include <QDialog>
#include <QColor>

namespace Ui {
class ModeStaticSettingsDialog;
}

class ModeStaticSettingsDialog : public QDialog
{
    Q_OBJECT
    Q_PROPERTY(QColor color READ color NOTIFY colorChanged)

public:
    explicit ModeStaticSettingsDialog(QWidget *parent = nullptr);
    ~ModeStaticSettingsDialog();

    int iRedVal, iGreenVal, iBlueVal;

    QColor color() const
    {
        return m_color;
    }

signals:
    void colorChanged(QColor color);

private slots:
    void on_bExit_clicked();

    void on_sRed_valueChanged(int value);

    void on_sGreen_valueChanged(int value);

    void on_sBlue_valueChanged(int value);

    void onColorChanged();

    void on_bSave_clicked();

private:
    Ui::ModeStaticSettingsDialog *ui;
    QColor m_color;
};

#endif // MODESTATICSETTINGSDIALOG_H
