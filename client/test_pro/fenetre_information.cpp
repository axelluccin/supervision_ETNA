#include "fenetre_information.h"
#include "ui_fenetre_information.h"

fenetre_information::fenetre_information(bool ra, bool h, bool c, bool o, QWidget *parent) :
    ui(new Ui::fenetre_information)
{
    ui->setupUi(this);
    ram = ra;
    hdd = h;
    cpu = c;
    os = o;
    connect(ui->actualiser, SIGNAL(clicked()), this, SLOT(actualiser()));
}

fenetre_information::~fenetre_information()
{
    delete ui;
}
void fenetre_information::req_information(string req)
{
    string my_url = "http://"+adress_serv+":8080/";

    my_url+=req;

    QUrl url = QUrl(my_url.c_str());
    qDebug() << url.toString() << endl;
    QEventLoop *eventLoop = new QEventLoop();
    QNetworkRequest requete(url);
    QNetworkAccessManager *m = new QNetworkAccessManager(this);

    QNetworkReply *rep = m->get(requete);
    while(!rep->isFinished()){
        eventLoop->processEvents();
    }
    QByteArray b = rep->readAll();

    QJsonDocument json2  = QJsonDocument::fromJson(b);
    json = json2.object();
    return;
}

void fenetre_information::get_information()
{
    if (os){
        req_information(os_req);
        ui->os_name->setText(json["name"].toString());
        ui->os_architecture->setText(json["architecture"].toString());
    }
    if(ram){
        req_information(ram_req);
        ui->ram_usage->setText(json["usage"].toString()+"/"+json["total"].toString()+" Go");
    }
    if(cpu){
        req_information(cpu_req);
        ui->cpu_name->setText(json["model"].toString());
        ui->cpu_count->setText(json["count"].toString());
        ui->cpu_architecture->setText(json["architecture"].toString());
    }
    if(hdd){
        req_information(hdd_req);
        ui->hdd_count->setText(json["count"].toString());
        ui->hdd_usage->setText(json["usage"].toString()+"/"+json["total"].toString()+" Go");
    }

}

void fenetre_information::actualiser()
{
    get_information();
}


