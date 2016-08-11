#ifndef INFORMATION_WINDOWS_H
#define INFORMATION_WINDOWS_H

#include <QString>
#include <stdio.h>
#include <QSysInfo>

using namespace std;
class information_windows
{
public:
    information_windows();

    string get_os_ID();
    string get_os_architecture();
    string get_os_version();

    string get_proc_model();
    string get_proc_architecture();
    string get_proc_count();
    //string get_proc_usage();

    string get_ram_total();
    string get_ram_usage();
    string get_ram_free();

    string get_hdd_total();
    string get_hdd_usage();
    string get_hdd_count();
};

#endif // INFORMATION_WINDOWS_H
