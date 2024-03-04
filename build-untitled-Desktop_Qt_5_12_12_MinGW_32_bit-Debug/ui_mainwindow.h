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
    QLabel *lbl_pic;
    QPushButton *total_exit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 621);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWidget{\n"
"background-color : #e1feff;\n"
"colo:rgb(170, 255, 255)c ;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lbl_pic = new QLabel(centralwidget);
        lbl_pic->setObjectName(QString::fromUtf8("lbl_pic"));
        lbl_pic->setGeometry(QRect(0, -20, 921, 641));
        total_exit = new QPushButton(centralwidget);
        total_exit->setObjectName(QString::fromUtf8("total_exit"));
        total_exit->setGeometry(QRect(-20, 570, 951, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("Onyx"));
        font.setPointSize(40);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        total_exit->setFont(font);
        total_exit->setCursor(QCursor(Qt::OpenHandCursor));
        total_exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"font: 40pt \"Onyx\" ;\n"
"color: #333;\n"
"border: 2px solid #8eb0ffd;\n"
"border-radius: 20px;\n"
"border-style: outset;\n"
"background: qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1#8eb0ff\n"
");\n"
"padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background:  qradialgradient(\n"
"cx: 0.3, cy: -0.4, fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #fff, stop: 1 #bec8ff\n"
");\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_pic->setText(QString());
        total_exit->setText(QApplication::translate("MainWindow", "start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
