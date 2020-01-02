#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>

//pliki dialogowe trybów
#include "moderainbowsettingsdialog.h"
#include "modestaticsettingsdialog.h"
#include "modecustomsettingsdialog.h"
#include "modemusicsyncsettingsdialog.h"

//pliki od ustawień
#include "ledsettingsdialog.h"
#include "controlersettingsdialog.h"
#include "applicationsettingsdialog.h"
#include "settings.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QSerialPort serial; //obiekt połączenia z kontrolerem
    QString sComSelected; //zmienna wybranego portu
    bool bConnected = false; //zmienna statusu połączenia
    std::string settingsfilename = "settings.txt";
    settings settingsf;

private slots:
    void on_bConnect_clicked();

    void on_cSelectPort_currentIndexChanged(const QString &arg1);

    void on_bModeRainbowSettings_clicked();

    void on_bModeStaticSettings_clicked();

    void on_bModeMusicSyncSettings_clicked();

    void on_bModeCustomSettings_clicked();

    void on_bSettingsLED_clicked();

    void on_bSettingsControler_clicked();

    void on_bSettingsApp_clicked();

    void on_bRefresh_clicked();

    void on_bModeStatic_clicked();

    void on_bModeRainbow_clicked();

private:
    Ui::MainWindow *ui;

    //ui od trybów
    ModeRainbowSettingsDialog *uirainbowsettings;
    ModeStaticSettingsDialog *uistaticsettings;
    ModeCustomSettingsDialog *uicustomsettings;
    ModeMusicSyncSettingsDialog *uimusicsettings;

    //ui od ustawień
    LEDSettingsDialog *uiledsettings;
    ControlerSettingsDialog *uicontrollersettings;
    ApplicationSettingsDialog *uiapplicationsettings;
};

#endif // MAINWINDOW_H
