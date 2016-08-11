#include "information_windows.h"

information_windows::information_windows()
{

}

string information_windows::get_os_ID()
{
    return "WINDOWS";
}

string information_windows::get_os_version()
{
    return "10";
}

string information_windows::get_os_architecture()
{
    return "64 bits";
}

string information_windows::get_proc_model(){
    return "intel";
}

string information_windows::get_proc_count()
{
    return "8";
}

string information_windows::get_proc_architecture()
{
    return "64 bits";
}

string information_windows::get_ram_total()
{
    return "8.00";
}

string information_windows::get_ram_usage()
{
    return "4.15";
}

string information_windows::get_ram_free()
{
    return "3.85";
}

string information_windows::get_hdd_count()
{
    return "1";
}

string information_windows::get_hdd_total()
{
    return "1000";
}

string information_windows::get_hdd_usage(){
    return "400";
}



