#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "moderainbowsettingsdialog.h"
#include "modestaticsettingsdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList List;

    //dodanie elementów do listy portów
    QString tmp;
    for(int i=0; i<32; i++){
        tmp = "COM" + QString::number(i+1);
        List << tmp;
    }
    ui->cSelectPort->addItems(List);

}

MainWindow::~MainWindow()
{
    delete ui;
    serial.close(); //zamknięcie połączenia z kontrolerem
}

void MainWindow::on_bConnect_clicked()
{
    if(bConnected){ //zamknięcie połączenia z kontrolerem i zmiana tekstu na przycisku łączenia
        serial.close();
        ui->bConnect->setText("Połącz");
        bConnected = !bConnected;
    } else { //łączenie z kontrolerem i zmiana tekstu na przycisku łączenia
        ui->bConnect->setText("Łączenie...");
        serial.setPortName(sComSelected);
        serial.setBaudRate(9600);
        serial.setDataBits(QSerialPort::Data8);
        serial.setParity(QSerialPort::NoParity);
        serial.setStopBits(QSerialPort::OneStop);
        serial.setFlowControl(QSerialPort::NoFlowControl);
        if(serial.open(QIODevice::ReadWrite)){
            ui->bConnect->setText("Rozłącz");
            bConnected = !bConnected;
        } else { //zmiana tekstu na przycisku łączenia na błąd
            ui->bConnect->setText("Błąd");
        }
    }
}

void MainWindow::on_cSelectPort_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "Wybierz"){//zapisanie do zmiennej wybranego portu i de/aktywacja przycisku łączenia
            ui->bConnect->setEnabled(false);
        } else {
            ui->bConnect->setEnabled(true);
            sComSelected = arg1;
        }
}

void MainWindow::on_bModeRainbowSettings_clicked()
{
    uirainbowsettings = new ModeRainbowSettingsDialog(this);
    uirainbowsettings->show();
}

void MainWindow::on_bModeStaticSettings_clicked()
{
    uistaticsettings = new ModeStaticSettingsDialog(this);
    uistaticsettings->show();
}

void MainWindow::on_bModeMusicSyncSettings_clicked()
{
    uimusicsettings = new ModeMusicSyncSettingsDialog(this);
    uimusicsettings->show();
}

void MainWindow::on_bModeCustomSettings_clicked()
{
    uicustomsettings = new ModeCustomSettingsDialog(this);
    uicustomsettings->show();
}

void MainWindow::on_bSettingsLED_clicked()
{
    uiledsettings = new LEDSettingsDialog(this);
    uiledsettings->show();
}

void MainWindow::on_bSettingsControler_clicked()
{
    uicontrollersettings = new ControlerSettingsDialog(this);
    uicontrollersettings->show();
}

void MainWindow::on_bSettingsApp_clicked()
{
    uiapplicationsettings = new ApplicationSettingsDialog(this);
    uiapplicationsettings->show();
}
