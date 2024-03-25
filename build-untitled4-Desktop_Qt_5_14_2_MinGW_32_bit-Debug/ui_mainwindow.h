/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QCheckBox *checkBox_delete_yes;
    QLineEdit *lineEdit_perem;
    QCheckBox *checkBox_timer_no;
    QLabel *label_5;
    QLineEdit *lineEdit_save;
    QPushButton *pushButton;
    QLineEdit *lineEdit_timer;
    QLabel *label_2;
    QCheckBox *checkBox_timer_yes;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label;
    QCheckBox *checkBox_delete_no;
    QLineEdit *lineEdit_mask;
    QCheckBox *checkBox_overwrite_no;
    QLabel *label_6;
    QCheckBox *checkBox_overwrite_yes;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(100, 80, 621, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        checkBox_delete_yes = new QCheckBox(gridLayoutWidget);
        checkBox_delete_yes->setObjectName(QString::fromUtf8("checkBox_delete_yes"));

        gridLayout->addWidget(checkBox_delete_yes, 4, 1, 1, 1);

        lineEdit_perem = new QLineEdit(gridLayoutWidget);
        lineEdit_perem->setObjectName(QString::fromUtf8("lineEdit_perem"));

        gridLayout->addWidget(lineEdit_perem, 9, 1, 1, 2);

        checkBox_timer_no = new QCheckBox(gridLayoutWidget);
        checkBox_timer_no->setObjectName(QString::fromUtf8("checkBox_timer_no"));

        gridLayout->addWidget(checkBox_timer_no, 7, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        lineEdit_save = new QLineEdit(gridLayoutWidget);
        lineEdit_save->setObjectName(QString::fromUtf8("lineEdit_save"));

        gridLayout->addWidget(lineEdit_save, 5, 1, 1, 2);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 3);

        lineEdit_timer = new QLineEdit(gridLayoutWidget);
        lineEdit_timer->setObjectName(QString::fromUtf8("lineEdit_timer"));

        gridLayout->addWidget(lineEdit_timer, 8, 1, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        checkBox_timer_yes = new QCheckBox(gridLayoutWidget);
        checkBox_timer_yes->setObjectName(QString::fromUtf8("checkBox_timer_yes"));

        gridLayout->addWidget(checkBox_timer_yes, 7, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 9, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        checkBox_delete_no = new QCheckBox(gridLayoutWidget);
        checkBox_delete_no->setObjectName(QString::fromUtf8("checkBox_delete_no"));

        gridLayout->addWidget(checkBox_delete_no, 4, 2, 1, 1);

        lineEdit_mask = new QLineEdit(gridLayoutWidget);
        lineEdit_mask->setObjectName(QString::fromUtf8("lineEdit_mask"));

        gridLayout->addWidget(lineEdit_mask, 2, 1, 1, 2);

        checkBox_overwrite_no = new QCheckBox(gridLayoutWidget);
        checkBox_overwrite_no->setObjectName(QString::fromUtf8("checkBox_overwrite_no"));

        gridLayout->addWidget(checkBox_overwrite_no, 6, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 8, 0, 1, 1);

        checkBox_overwrite_yes = new QCheckBox(gridLayoutWidget);
        checkBox_overwrite_yes->setObjectName(QString::fromUtf8("checkBox_overwrite_yes"));

        gridLayout->addWidget(checkBox_overwrite_yes, 6, 1, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 10, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 10, 1, 1, 2);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 30, 481, 41));
        QFont font;
        font.setPointSize(12);
        label_8->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\265\320\271\321\201\321\202\320\262\320\270\321\217 \320\277\321\200\320\270 \320\277\320\276\320\262\321\202\320\276\321\200\320\265\320\275\320\270\320\270 \320\270\320\274\320\265\320\275\320\270 \320\262\321\213\321\205\320\276\320\264\320\275\320\276\320\263\320\276 \321\204\320\260\320\271\320\273\320\260", nullptr));
        checkBox_delete_yes->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260", nullptr));
        checkBox_timer_no->setText(QCoreApplication::translate("MainWindow", "\320\225\320\264\320\270\320\275\320\276\321\200\320\260\320\267\320\276\320\262\320\276", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \321\200\320\260\320\261\320\276\321\202\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\204\320\260\320\271\320\273\320\260 \320\264\320\273\321\217 \320\274\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270(\320\277\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\320\265 \321\201\321\202\321\200\320\276\320\272\321\203 \"\320\274\320\260\321\201\320\272\320\260 \321\204\320\260\320\271\320\273\320\260\" \320\277\320\265\321\200\320\265\320\264 \320\262\321\213\320\261\320\276\321\200\320\276\320\274)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\321\217\321\202\321\214 \320\273\320\270 \320\262\321\205\320\276\320\264\320\275\321\213\320\265 \321\204\320\260\320\271\320\273\321\213?", nullptr));
        checkBox_timer_yes->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\320\265 \320\264\320\273\321\217 \320\274\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\320\270", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\202\321\214 \320\264\320\273\321\217 \321\201\320\276\321\205\321\200\320\260\320\275\320\265\320\275\320\270\321\217 \321\204\320\260\320\271\320\273\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\234\320\260\321\201\320\272\320\260 \321\204\320\260\320\271\320\273\320\260", nullptr));
        checkBox_delete_no->setText(QCoreApplication::translate("MainWindow", "\320\235\320\265\321\202", nullptr));
        checkBox_overwrite_no->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\320\264\320\270\321\204\320\270\320\272\320\260\321\206\320\270\321\217 \321\204\320\260\320\271\320\273\320\260", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\213 \321\202\320\260\320\271\320\274\320\265\321\200\320\260(\320\262 \321\201\320\265\320\272\321\203\320\275\320\264\320\260\321\205)", nullptr));
        checkBox_overwrite_yes->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\267\320\260\320\277\320\270\321\201\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214 \321\200\320\260\320\261\320\276\321\202\321\203 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213(\320\277\321\200\320\270 \320\265\320\264\320\270\320\275\320\276\321\200\320\260\320\267\320\276\320\262\320\276\320\274 \320\267\320\260\320\277\321\203\321\201\320\272\320\265)", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\237\321\203\321\201\320\272 \321\202\320\260\320\271\320\274\320\265\321\200\320\260(\320\277\321\200\320\270 \321\200\320\260\320\261\320\276\321\202\320\265 \320\277\320\276 \321\202\320\260\320\271\320\274\320\265\321\200\321\203)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\265\320\275\320\270\320\265 \320\276\320\277\320\265\321\200\320\260\321\206\320\270\320\270 XOR \320\275\320\260\320\264 \321\201\320\276\320\264\320\265\321\200\320\266\320\270\320\274\321\213\320\274 \321\204\320\260\320\271\320\273\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
