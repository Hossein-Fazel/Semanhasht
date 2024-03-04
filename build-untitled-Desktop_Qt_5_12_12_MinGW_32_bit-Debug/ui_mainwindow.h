/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *total_exit;
    QPushButton *pushButton;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1990, 1104);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWidget{\n"
"color : #000000;\n"
"};\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        total_exit = new QPushButton(centralwidget);
        total_exit->setObjectName(QString::fromUtf8("total_exit"));
        total_exit->setGeometry(QRect(650, 850, 611, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Variable Display Semib"));
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        total_exit->setFont(font);
        total_exit->setCursor(QCursor(Qt::OpenHandCursor));
        total_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 40pt \"Segoe UI Variable Display Semib\";\n"
"color: #000000;\n"
"border: 2px solid #000000;\n"
"border-radius: 40px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #ffe724\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:  qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #f8ffae\n"
");\n"
"}\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(430, 110, 1071, 611));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/Screenshot 2024-03-04 112257.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(8000, 8000));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-10, -30, 2021, 1211));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color : #000000 ;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        label_2->raise();
        total_exit->raise();
        pushButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        total_exit->setText(QApplication::translate("MainWindow", "start", nullptr));
        pushButton->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
