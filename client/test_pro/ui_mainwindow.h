/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCheckBox *RAM;
    QCheckBox *OS;
    QCheckBox *HDD;
    QCheckBox *CPU;
    QPushButton *valider;
    QLineEdit *lineEdit;
    QPushButton *parcourir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(396, 340);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        RAM = new QCheckBox(centralWidget);
        RAM->setObjectName(QStringLiteral("RAM"));
        RAM->setGeometry(QRect(90, 110, 211, 21));
        OS = new QCheckBox(centralWidget);
        OS->setObjectName(QStringLiteral("OS"));
        OS->setGeometry(QRect(90, 140, 131, 17));
        HDD = new QCheckBox(centralWidget);
        HDD->setObjectName(QStringLiteral("HDD"));
        HDD->setGeometry(QRect(90, 170, 91, 17));
        CPU = new QCheckBox(centralWidget);
        CPU->setObjectName(QStringLiteral("CPU"));
        CPU->setGeometry(QRect(90, 200, 81, 17));
        valider = new QPushButton(centralWidget);
        valider->setObjectName(QStringLiteral("valider"));
        valider->setGeometry(QRect(270, 250, 75, 23));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(90, 30, 221, 20));
        lineEdit->setFrame(true);
        lineEdit->setAlignment(Qt::AlignCenter);
        parcourir = new QPushButton(centralWidget);
        parcourir->setObjectName(QStringLiteral("parcourir"));
        parcourir->setGeometry(QRect(60, 250, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 396, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        RAM->setText(QApplication::translate("MainWindow", "M\303\251moire", 0));
        OS->setText(QApplication::translate("MainWindow", "Syt\303\250me d'exploitation", 0));
        HDD->setText(QApplication::translate("MainWindow", "Disques durs", 0));
        CPU->setText(QApplication::translate("MainWindow", "Processeur", 0));
        valider->setText(QApplication::translate("MainWindow", "Valider", 0));
        parcourir->setText(QApplication::translate("MainWindow", "Parcourir ...", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
