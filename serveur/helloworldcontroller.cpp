#include "helloworldcontroller.h"
#include <QJsonObject>
#include <QJsonDocument>

HelloWorldController::HelloWorldController(QObject* parent) : HttpRequestHandler(parent)
{
}

void HelloWorldController::service(HttpRequest &request, HttpResponse &response) {

    QByteArray path = request.getPath();
    //QDebug << request.get
    response.setHeader("Content-Type", "application/json; charset=ISO-8859-1");
    QJsonObject json;


    if (path == "/os"){
        json["name"] = QString::fromStdString(test->get_os_ID());
        json["version"] = QString::fromStdString(test->get_os_version());
        json["architecture"] = QString::fromStdString(test->get_os_architecture());
    }
    else if(path == "/cpu"){
        json["model"] = QString::fromStdString(test->get_proc_model());
        json["architecture"] = QString::fromStdString(test->get_proc_architecture());
        json["count"] = QString::fromStdString(test->get_proc_count());
    }
    else if(path == "/ram"){
        json["total"] = QString::fromStdString(test->get_ram_total());
        json["usage"] = QString::fromStdString(test->get_ram_usage());
        json["free"] = QString::fromStdString(test->get_ram_free());
    }
    else if(path == "/hdd"){
        json["count"] = QString::fromStdString(test->get_hdd_count());
        json["total"] = QString::fromStdString(test->get_hdd_total());
        json["usage"] = QString::fromStdString(test->get_hdd_usage());
    }
    QJsonDocument doc;
    doc.setObject(json);
    QString dp(doc.toJson(QJsonDocument::Indented));
    QByteArray ba = dp.toLocal8Bit();
    response.write(ba);
}

