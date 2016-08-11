#ifndef INFORMATION_H
#define INFORMATION_H

#ifdef Q_WS_WIN
#include "information_windows.h"

class information
{
public:
    information();
    information_windows *info = new information_windows();
};

#endif

#ifdef Q_OS_LINUX
#include "information_linux.h"

class information
{
public:
    information();
    information_linux *info = new information_linux();
};
#endif
#endif // INFORMATION_H
