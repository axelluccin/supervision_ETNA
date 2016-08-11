#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QString>
#include <QIODevice>
#include <QTextStream>
#include <QFileDialog>
#include <QDebug>
#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
#include "fenetre_information.h"

using namespace std;

namespace Ui {
class MainWindow;
}


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void Settings();
    void open_explorateur();

private:
    Ui::MainWindow *ui;
    bool ram;
    bool os;
    bool hdd;
    bool cpu;
    string adress;
};

#endif // MAINWINDOW_H
