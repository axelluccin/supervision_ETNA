/********************************************************************************
** Form generated from reading UI file 'fenetre_information.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETRE_INFORMATION_H
#define UI_FENETRE_INFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetre_information
{
public:
    QLabel *os_name;
    QLabel *os_architecture;
    QFrame *line;
    QLabel *processeur;
    QLabel *cpu_name;
    QLabel *Memoire;
    QLabel *Disquedurs;
    QLabel *Archi_proc;
    QLabel *proc_nbr;
    QLabel *util_proc;
    QLabel *ram_util;
    QLabel *Nombredisque;
    QLabel *utilisationtotale;
    QPushButton *actualiser;
    QLabel *cpu_architecture;
    QLabel *cpu_count;
    QLabel *cpu_usage;
    QLabel *hdd_count;
    QLabel *hdd_usage;
    QLabel *ram_usage;

    void setupUi(QWidget *fenetre_information)
    {
        if (fenetre_information->objectName().isEmpty())
            fenetre_information->setObjectName(QStringLiteral("fenetre_information"));
        fenetre_information->resize(632, 591);
        os_name = new QLabel(fenetre_information);
        os_name->setObjectName(QStringLiteral("os_name"));
        os_name->setGeometry(QRect(50, 20, 421, 51));
        QFont font;
        font.setPointSize(35);
        os_name->setFont(font);
        os_name->setAlignment(Qt::AlignCenter);
        os_architecture = new QLabel(fenetre_information);
        os_architecture->setObjectName(QStringLiteral("os_architecture"));
        os_architecture->setGeometry(QRect(70, 100, 131, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        os_architecture->setFont(font1);
        line = new QFrame(fenetre_information);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(50, 150, 521, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        processeur = new QLabel(fenetre_information);
        processeur->setObjectName(QStringLiteral("processeur"));
        processeur->setGeometry(QRect(10, 190, 201, 31));
        QFont font2;
        font2.setPointSize(15);
        processeur->setFont(font2);
        processeur->setAlignment(Qt::AlignCenter);
        cpu_name = new QLabel(fenetre_information);
        cpu_name->setObjectName(QStringLiteral("cpu_name"));
        cpu_name->setGeometry(QRect(240, 190, 361, 31));
        QFont font3;
        font3.setPointSize(13);
        cpu_name->setFont(font3);
        cpu_name->setAlignment(Qt::AlignCenter);
        Memoire = new QLabel(fenetre_information);
        Memoire->setObjectName(QStringLiteral("Memoire"));
        Memoire->setGeometry(QRect(10, 320, 201, 31));
        Memoire->setFont(font2);
        Memoire->setAlignment(Qt::AlignCenter);
        Disquedurs = new QLabel(fenetre_information);
        Disquedurs->setObjectName(QStringLiteral("Disquedurs"));
        Disquedurs->setGeometry(QRect(10, 480, 201, 31));
        Disquedurs->setFont(font2);
        Disquedurs->setAlignment(Qt::AlignCenter);
        Archi_proc = new QLabel(fenetre_information);
        Archi_proc->setObjectName(QStringLiteral("Archi_proc"));
        Archi_proc->setGeometry(QRect(90, 230, 91, 16));
        proc_nbr = new QLabel(fenetre_information);
        proc_nbr->setObjectName(QStringLiteral("proc_nbr"));
        proc_nbr->setGeometry(QRect(90, 260, 91, 16));
        util_proc = new QLabel(fenetre_information);
        util_proc->setObjectName(QStringLiteral("util_proc"));
        util_proc->setGeometry(QRect(90, 290, 91, 16));
        ram_util = new QLabel(fenetre_information);
        ram_util->setObjectName(QStringLiteral("ram_util"));
        ram_util->setGeometry(QRect(480, 340, 111, 16));
        Nombredisque = new QLabel(fenetre_information);
        Nombredisque->setObjectName(QStringLiteral("Nombredisque"));
        Nombredisque->setGeometry(QRect(80, 520, 121, 20));
        utilisationtotale = new QLabel(fenetre_information);
        utilisationtotale->setObjectName(QStringLiteral("utilisationtotale"));
        utilisationtotale->setGeometry(QRect(80, 550, 91, 16));
        actualiser = new QPushButton(fenetre_information);
        actualiser->setObjectName(QStringLiteral("actualiser"));
        actualiser->setGeometry(QRect(474, 30, 101, 23));
        cpu_architecture = new QLabel(fenetre_information);
        cpu_architecture->setObjectName(QStringLiteral("cpu_architecture"));
        cpu_architecture->setGeometry(QRect(180, 230, 191, 16));
        QFont font4;
        font4.setPointSize(10);
        cpu_architecture->setFont(font4);
        cpu_architecture->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cpu_count = new QLabel(fenetre_information);
        cpu_count->setObjectName(QStringLiteral("cpu_count"));
        cpu_count->setGeometry(QRect(180, 260, 181, 16));
        cpu_count->setFont(font4);
        cpu_usage = new QLabel(fenetre_information);
        cpu_usage->setObjectName(QStringLiteral("cpu_usage"));
        cpu_usage->setGeometry(QRect(180, 290, 181, 16));
        cpu_usage->setFont(font4);
        hdd_count = new QLabel(fenetre_information);
        hdd_count->setObjectName(QStringLiteral("hdd_count"));
        hdd_count->setGeometry(QRect(230, 520, 181, 16));
        hdd_count->setFont(font4);
        hdd_usage = new QLabel(fenetre_information);
        hdd_usage->setObjectName(QStringLiteral("hdd_usage"));
        hdd_usage->setGeometry(QRect(210, 550, 181, 16));
        hdd_usage->setFont(font4);
        ram_usage = new QLabel(fenetre_information);
        ram_usage->setObjectName(QStringLiteral("ram_usage"));
        ram_usage->setGeometry(QRect(480, 350, 121, 31));
        ram_usage->setFont(font2);
        ram_usage->setAlignment(Qt::AlignCenter);

        retranslateUi(fenetre_information);

        QMetaObject::connectSlotsByName(fenetre_information);
    } // setupUi

    void retranslateUi(QWidget *fenetre_information)
    {
        fenetre_information->setWindowTitle(QString());
        os_name->setText(QString());
        os_architecture->setText(QString());
        processeur->setText(QApplication::translate("fenetre_information", "Processeur", 0));
        cpu_name->setText(QString());
        Memoire->setText(QApplication::translate("fenetre_information", "M\303\251moire", 0));
        Disquedurs->setText(QApplication::translate("fenetre_information", "Disque Durs", 0));
        Archi_proc->setText(QApplication::translate("fenetre_information", "Architecture :", 0));
        proc_nbr->setText(QApplication::translate("fenetre_information", "Processeurs : ", 0));
        util_proc->setText(QApplication::translate("fenetre_information", "Utilisation : ", 0));
        ram_util->setText(QApplication::translate("fenetre_information", "En cours d'utilisation : ", 0));
        Nombredisque->setText(QApplication::translate("fenetre_information", "Nombre de disque(s) : ", 0));
        utilisationtotale->setText(QApplication::translate("fenetre_information", "Utilisation totale : ", 0));
        actualiser->setText(QApplication::translate("fenetre_information", "Actualiser", 0));
        cpu_architecture->setText(QString());
        cpu_count->setText(QString());
        cpu_usage->setText(QString());
        hdd_count->setText(QString());
        hdd_usage->setText(QString());
        ram_usage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class fenetre_information: public Ui_fenetre_information {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETRE_INFORMATION_H
