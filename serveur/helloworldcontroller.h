#ifndef HELLOWORLDCONTROLLER_H
#define HELLOWORLDCONTROLLER_H

#include <QtGlobal>

#include "httprequest.h"
#include "httpresponse.h"
#include "httprequesthandler.h"

#include "information_windows.h"



class HelloWorldController : public HttpRequestHandler
{
    Q_OBJECT
public:
    HelloWorldController(QObject* parent=0);
    void service(HttpRequest& request, HttpResponse& response);
private:
    #ifdef Q_OS_WIN
        information_windows *test = new information_windows();
    #endif
};





#endif // HELLOWORLDCONTROLLER_H
