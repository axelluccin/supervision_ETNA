#include "information_linux.h"
#include <string>
#include <iomanip>


information_linux::information_linux()
{
    int code_retour;
    string os_name;
    list<string> hdd_list;

    //OS
    code_retour=system("uname -s > resultat.txt" );
    code_retour=system("cat /etc/*-release |grep -Ei '^name|version=' | cut -d '=' -f2 | sed -e 's/\"//g' >> resultat.txt");
    code_retour=system("uname -m >> resultat.txt");

    //Processeur
    code_retour=system("cat /proc/cpuinfo | grep -i 'model name' | cut -d ':' -f2| uniq >> resultat.txt");
    code_retour=system("grep 'processor' /proc/cpuinfo -c >> resultat.txt" );
    code_retour=system("grep -i flags /proc/cpuinfo | grep -io 'lm' | uniq >> resultat.txt");

    //hdd
    //code_retour=system("lsblk -d | grep -c sd >> resultat.txt");
    code_retour=system("lsblk -d | grep -c 'disk'  >> resultat.txt");
    code_retour=system("lsblk -d | grep 'disk' | awk '{print $4}' >> resultat.txt");
    code_retour=system("df -h | grep sd | awk '{print $6}' >> resultat.txt");

    ifstream ifs("resultat.txt");

    getline(ifs, os_name);
    getline(ifs, os_ID);
    getline(ifs, os_version);
    getline(ifs, os_architecture);

    getline(ifs, proc_model);
    getline(ifs, proc_count);
    getline(ifs, proc_architecture);

    getline(ifs, hdd_count);

    if (os_architecture == "x86_64")
        os_architecture = "64 bits";
    else
        os_architecture = "32 bits";

    os_ID = os_ID + " " + os_name;

    if (proc_architecture == "lm")
        proc_architecture = "64 bits";
    else
        proc_architecture = "32 bits";

    if(atoi(hdd_count.c_str()) == 1){
        getline(ifs, hdd_total);
    }
    else{
        int taille = 0;
        string ct;
        for(int i = 0; i < atoi(hdd_count.c_str()); i++){
            getline(ifs, ct);
            taille += atoi(ct.c_str());
        }
        ostringstream temp;
        temp << taille;
        hdd_total = temp.str();
    }

    if(atoi(hdd_count.c_str()) == 1)
        getline(ifs, path_fs);
    else{
        string nbr;
        for(int i = 0; i < atoi(hdd_count.c_str()); i++)
        {
            getline(ifs, nbr);
            hdd_list.push_back(nbr);
        }
    }
    qDebug() << path_fs.c_str();
    ifs.close();

}

string information_linux::get_os_ID()
{
    return os_ID;
}

string information_linux::get_os_architecture()
{
    return os_architecture;
}

string information_linux::get_os_version()
{
    return os_version;
}

string information_linux::get_proc_model()
{
    return proc_model;
}

string information_linux::get_proc_count()
{
    return proc_count;
}

string information_linux::get_proc_architecture()
{
    return proc_architecture;
}

string information_linux::get_ram_total()
{
    struct sysinfo memInfo;
    sysinfo (&memInfo);
    long long int totalPhysMem = memInfo.totalram;
    totalPhysMem *= memInfo.mem_unit;

    ostringstream oss;

    oss << std::setprecision(3) << totalPhysMem/1024.0/1024/1024 ;

    ram_total = oss.str();

    return ram_total;
}

string information_linux::get_ram_usage()
{
    struct sysinfo memInfo;
    sysinfo (&memInfo);
    long long int physMemUsed = memInfo.totalram - memInfo.freeram;
    physMemUsed *= memInfo.mem_unit;

    ostringstream oss;

    oss << std::setprecision(3) << physMemUsed/1024.0/1024/1024;

    ram_usage = oss.str();
    return ram_usage;
}

string information_linux::get_ram_free()
{
    struct sysinfo memInfo;
    sysinfo (&memInfo);
    long long int physMemFree = memInfo.freeram;
    physMemFree *= memInfo.mem_unit;

    ostringstream oss;

     oss << std::setprecision(3) << physMemFree/1024.0/1024/1024;


    return oss.str();
}

string information_linux::get_hdd_count(){
    return hdd_count;
}

string information_linux::get_hdd_total(){
    if(atoi(hdd_count.c_str()) == 1){
        ostringstream temp;
        temp << atoi(hdd_total.c_str());
        hdd_total = temp.str();
    }
    return hdd_total;
}


string information_linux::get_hdd_usage()
{
    struct statvfs stat;
    statvfs(path_fs.c_str(), &stat);

    double GB = (1024 * 1024) * 1024.0;

    long long int physHddUsage = (stat.f_blocks * stat.f_frsize) - (stat.f_bfree * stat.f_frsize) ;

    ostringstream oss;

    oss << fixed << showpoint << setprecision(2) << physHddUsage/GB;

    hdd_usage = oss.str();

    return  hdd_usage;
}



