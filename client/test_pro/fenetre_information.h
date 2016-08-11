#ifndef FENETRE_INFORMATION_H
#define FENETRE_INFORMATION_H

#include <string>
#include <QWidget>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QEventLoop>

using namespace std;

namespace Ui {
class fenetre_information;
}

class fenetre_information : public QWidget
{
    Q_OBJECT

public:
    explicit fenetre_information(bool ra = false, bool h = false, bool c = false, bool o = false, QWidget *parent = 0);
    ~fenetre_information();
    void get_information();
private slots:
    void actualiser();

private:
    Ui::fenetre_information *ui;
    bool ram;
    bool hdd;
    bool cpu;
    bool os;

    const string adress_serv = "192.168.208.128";
    const string ram_req = "ram";
    const string hdd_req = "hdd";
    const string os_req = "os";
    const string cpu_req = "cpu";

    string request;

    QJsonObject json;

    void req_information(string req);
};

#endif // FENETRE_INFORMATION_H
