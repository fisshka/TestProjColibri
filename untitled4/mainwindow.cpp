#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->checkBox_timer_no->setCheckState(Qt::Checked);
    ui->checkBox_delete_no->setCheckState(Qt::Checked);
    ui->checkBox_overwrite_yes->setCheckState(Qt::Checked);//установление "дефолтных" настроек
    mask = "Text Files (*.txt)";//установление "дефолтного" значения маски
    connect(&timer,SIGNAL( timeout() ), SLOT(time_is_out()));//связь таймера со слотом time is out
    connect(&timer,SIGNAL( timeout() ), SLOT(on_pushButton_2_clicked()));//связь таймера со слотом, в котором происходит содержимое файла

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString tmp = ui->lineEdit_mask->text();
    if(!tmp.isEmpty())
    mask ="Files (*" + tmp.mid(tmp.indexOf(".")) + ")";//сохранение маски файла
    filepath = QFileDialog::getOpenFileName(this, "Choose a file", "", mask);//выбор файла и запись пути к нему в filepath


}
void MainWindow::time_is_out()
{
    QMessageBox dialog(this);
    dialog.setText("Программа снова начала работу!");
    dialog.exec();//уведомление о том, что программа снова начала работу и таймер истек

}

void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox aware(this);
    if(
            (ui->checkBox_timer_no->isChecked() && ui->checkBox_timer_yes->isChecked())
            || (ui->checkBox_delete_no->isChecked() && ui->checkBox_delete_yes->isChecked())
            ||(ui->checkBox_overwrite_no->isChecked() && ui->checkBox_overwrite_yes->isChecked())
            ||ui->lineEdit_save->text().isEmpty()
            || ui->lineEdit_perem->text().isEmpty()
            ||filepath.isEmpty()
       )
    {
        aware.setText("Вы некорректно ввели настройки.");
        aware.exec();
        return;
    } //проверка на корректность ввода
    file.setFileName(filepath);
    if(file.isOpen())//проверка на то, открыт ли файл(защита от "дурака")
    {
        aware.setText("Пожалуйста, закройте файл");
        aware.exec();
    }
    file.open(QIODevice::ReadOnly);//открытие файла по сохраненному пути
    input = file.readAll();
    file.close();//чтение содержимого файла в массив QByteArray и закрытие файла
    if(ui->checkBox_delete_yes->isChecked())
        file.remove();//проверка на то,включено ли удаление файлов, и их удаление в этом случае
    perem = ui->lineEdit_perem->text().toUtf8();//перевод введенной переменной в QByteArray
    rez.clear();//очищение прошлого результата в случае работы таймера

    for(int i = input.size() - 1, j = perem.size() - 1; i >= 0 || j >= 0;--i, --j)
    {
        if(i >= 0 && j >= 0)
            rez.push_front(input[i]^perem[j]);
        else if(i >= 0)
            rez.push_front(input[i]^0x00);
        else if(j >= 0)
            rez.push_front(perem[j]^0x00);

    } //выполнение операции XOR
    rezPath = ui->lineEdit_save->text() + "/rezult.bin";//"дефолтное" имя файла
    if(ui->checkBox_overwrite_no->isChecked() && workCount > 0)
    rezPath = ui->lineEdit_save->text() + "/rezult(" + QString::number(workCount) + ").bin";// модификация файла в случае, если включена соответствующая настройка
    file.setFileName(rezPath);
    file.open(QIODevice::WriteOnly);//создание или перезапись файла
    file.write(rez);
    file.close();//запись результата в файл в виде массива байтов и закрытие файла
    workCount++;//счетчик того, сколько раз сработала программа - для модификации имени файла в случае, если была выбрана соответствующая настройка





}

void MainWindow::on_pushButton_3_clicked()
{
    if(ui->checkBox_timer_yes->isChecked() && ui->lineEdit_timer->text().toInt() > 0)
        timer.start(1000 * ui->lineEdit_timer->text().toInt());//запуска таймера при нажатии на кнопку
}
