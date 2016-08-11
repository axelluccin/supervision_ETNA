#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->valider, SIGNAL(clicked()), this, SLOT(Settings()));
    connect(ui->parcourir, SIGNAL(clicked()), this, SLOT(open_explorateur()) );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Settings()
{
    QFile my_settings("Config.ini");
    QString str = ui->lineEdit->text();

    if(my_settings.open(QIODevice::WriteOnly|QIODevice::Text)){
        QTextStream flux(&my_settings);
        flux << "ADRESS=" << str << endl;


        if(ui->CPU->isChecked()){
            flux << "CPU=YES" << endl;
            cpu = true;
        }
        else{
            flux << "CPU=NO" << endl;
            cpu = false;
        }
        if (ui->HDD->isChecked()){
            flux << "HDD=YES" << endl;
            hdd = true;
        }
        else{
            flux << "HDD=NO" << endl;
            hdd = false;
        }

        if(ui->OS->isChecked()){
            flux << "OS=YES" << endl;
            os = true;
        }
        else{
            flux << "OS=NO" << endl;
            os = false;
        }

        if(ui->RAM->isChecked()){
            flux << "RAM=YES" << endl;
            ram = true;
        }
        else{
            flux << "RAM=NO" << endl;
            ram = false;
        }

        my_settings.close();
    }
        fenetre_information *f_info = new fenetre_information(ram, hdd, cpu, os);
    f_info->show();
    f_info->get_information();
    this->close();
}

void MainWindow::open_explorateur()
{
    QString filename = QFileDialog::getOpenFileName();

    ifstream ifs(filename.toStdString().c_str());
    string line;
    size_t position;

    while(ifs.eof()){
        getline(ifs, line);
        if (line.find("ADRESS")){
            position=line.find("=");
            adress=line.substr(position+1);
        }
        else if(line.find("OS")){
            os = line.find("YES") ? true : false;
        }
        else if(line.find("RAM")){
            ram = line.find("YES") ? true : false;
        }
        else if(line.find("CPU")){
            cpu = line.find("YES") ? true : false;
        }
        else if(line.find("HDD")){
            hdd = line.find("YES") ? true : false;
        }
    }

    ifs.close();
    fenetre_information *f_info = new fenetre_information(ram, hdd, cpu, os);
    f_info->show();
    f_info->get_information();
    this->close();
}
