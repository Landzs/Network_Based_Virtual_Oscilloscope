#include "vo.h"
#include "ui_vo.h"
#include <qcustomplot.h>
#include <QVector>
#include <QTimer>
#include <QTime>
#include <QMessageBox>
#include <QHostInfo>
#include "qcustomplot.h"
QVector<double> tempx(1024);
QVector<double> tempy(1024);
VO::VO(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VO)
{
    ui->setupUi(this);
    ui->Wave_Display->xAxis->setLabel("Time/ms");
    ui->Wave_Display->yAxis->setLabel("Intensity");
    ui->Wave_Display->xAxis->setRange(0,100);
    ui->Wave_Display->yAxis->setRange(0,100);
    ui->Wave_Display->replot();
    index=0;

    ui->Display_Slider->setMinimum(0);
    ui->Display_Slider->setMaximum(1000);
    ui->Display_Slider->setValue(100);

    status = false;
    ui->Port_LineEdit->setText(QString::number(8080));
    ui->IP_LineEdit->setText("192.168.2.106");
    serverIP =new QHostAddress();
}

VO::~VO()
{
    delete ui;
}


void VO::on_Connect_Btn_clicked()
{
    if(!status)
    {
        QString ip = ui->IP_LineEdit->text();
        int port =ui->Port_LineEdit->text().toInt();
        if(!serverIP->setAddress(ip))
        {
            QMessageBox::information(this,tr("error"),tr("server ip address error!"));
            return;
        }
        tcpSocket = new QTcpSocket(this);
        connect(tcpSocket,SIGNAL(connected()),this,SLOT(slotConnected()));
        connect(tcpSocket,SIGNAL(disconnected()),this,SLOT(slotDisconnected()));
        connect(tcpSocket,SIGNAL(readyRead()),this,SLOT(dataReceived()));
        tcpSocket->connectToHost(*serverIP,port);
        status=true;
    }
    else
    {
        tcpSocket->disconnectFromHost();
        status=false;
    }
}

void VO::slotConnected()
{
    ui->Network_View->append(tr("Connect Success!"));
    ui->Connect_Btn->setText(tr("Disconnect"));
}

void VO::slotDisconnected()
{
	ui->Network_View->append(tr("Disconnect Success!"));
	ui->Connect_Btn->setText(tr("Connect"));
}





void  VO::dataReceived()
{
    while(tcpSocket->bytesAvailable()>0)
    {
        char buf[1024];
        int lc,size;
        tcpSocket->read(buf,size);
        lc=(unsigned char) (buf[0]);
        QString data= QString::number(lc, 10);
        //QString data= tcpSocket->readAll();
        ui->Network_View->append(data);
        int tempv = data.toInt();
        tempx[index]=index;
        tempy[index] = tempv;
        index++;
        int t = index>100 ? index - 100 : 0;
        ui->Wave_Display->addGraph();
        ui->Wave_Display->xAxis->setRange(t, 100+t);
        ui->Wave_Display->graph(0)->setData(tempx,tempy);
        ui->Wave_Display->replot();
    }
}

void VO::on_Display_Slider_valueChanged(int value)
{
        ui->Wave_Display->addGraph();
        ui->Wave_Display->xAxis->setRange(ui->Display_Slider->value(), ui->Display_Slider->value()+100);
        ui->Wave_Display->replot();
}

void VO::on_Open_Btn_clicked()
{
    QString msg;
    msg[0]=0;
    msg[1]=1;
    tcpSocket->write(msg.toLatin1(),msg.length());
}

void VO::on_Close_Btn_clicked()
{
    QString msg;
    msg[0]=0;
    msg[1]=0;
    tcpSocket->write(msg.toLatin1(),msg.length());
}
