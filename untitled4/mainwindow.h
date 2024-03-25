#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QFileDialog>
#include <QFile>
#include <QTimer>
#include <QString>
#include <QByteArray>
#include <QDebug>
#include <QMessageBox>
#include <QButtonGroup>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void time_is_out();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    QString filepath;
    QString mask;
    QTimer timer;
    QByteArray input, perem, rez, tmp;
    QString rezPath;
    int workCount = 0;
    QFile file;
};
#endif // MAINWINDOW_H
