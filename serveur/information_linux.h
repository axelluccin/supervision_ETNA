#ifndef INFORMATION_LINUX_H
#define INFORMATION_LINUX_H

#ifdef __linux__

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <sys/types.h>
#include <sys/sysinfo.h>
#include <sstream>
#include <list>
#include <sys/statvfs.h>
#include <QDebug>


using namespace std;

class information_linux
{
public:
    information_linux();
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

private:
    string os_ID;
    string os_architecture;
    string os_version;

    string proc_model;
    string proc_architecture;
    string proc_count;
    string proc_usage;

    string ram_total;
    string ram_usage;

    string hdd_total;
    string hdd_count;
    string hdd_usage;

    string path_fs;

};

#endif //__linux__

#endif // INFORMATION_LINUX_H
