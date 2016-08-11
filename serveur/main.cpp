#include <QCoreApplication>
#include <QSettings>
#include <QFile>
#include <QDir>
#include <QString>
#include "httplistener.h"
#include "helloworldcontroller.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);
    QString binDir=QCoreApplication::applicationDirPath();
    QString appName=QCoreApplication::applicationName();
    QFile file;
    //qDebug(appName.toStdString().c_str());
    file.setFileName("test.ini");
    if(file.exists()){
        qDebug("config file loaded");
        QString configFileName=QDir(file.fileName()).canonicalPath();
        QSettings* listenerSettings=new QSettings(configFileName,QSettings::IniFormat,&app);
        listenerSettings->beginGroup("listener");
        // Start the HTTP server
        new HttpListener(listenerSettings, new HelloWorldController(&app), &app);
    }
    else{
        qFatal("file not found");
    }


    return app.exec();
}
