#ifndef VO_H
#define VO_H

#include <QWidget>
#include "qcustomplot.h"
#include <QVector>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QTcpSocket>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QHostAddress>
#include <QTcpSocket>
namespace Ui {
class VO;
}

class VO : public QWidget
{
    Q_OBJECT

public:
    explicit VO(QWidget *parent = 0);
    ~VO();


private slots:
    void on_Connect_Btn_clicked();
    void slotConnected();
    void slotDisconnected();
    void dataReceived();

    void on_Display_Slider_valueChanged(int value);

    void on_Open_Btn_clicked();

    void on_Close_Btn_clicked();

private:
    Ui::VO *ui;
    bool status;    //是否连接状态
    int index;
    QHostAddress *serverIP;
    QTcpSocket *tcpSocket;
};

#endif // VO_H
