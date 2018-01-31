/********************************************************************************
** Form generated from reading UI file 'vo.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VO_H
#define UI_VO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_VO
{
public:
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QCustomPlot *Wave_Display;
    QGroupBox *groupBox;
    QPushButton *Connect_Btn;
    QLineEdit *IP_LineEdit;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *Port_LineEdit;
    QTextBrowser *Network_View;
    QSlider *Display_Slider;
    QLabel *label_13;
    QWidget *tab_2;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QTextEdit *textEdit_2;
    QPushButton *pushButton_4;
    QLabel *label_3;
    QLabel *label_4;
    QTextEdit *textEdit_3;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit_4;
    QLabel *label_8;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QPushButton *Open_Btn;
    QLabel *label_10;
    QPushButton *Close_Btn;
    QPushButton *pushButton_8;
    QWidget *tab_4;

    void setupUi(QWidget *VO)
    {
        if (VO->objectName().isEmpty())
            VO->setObjectName(QStringLiteral("VO"));
        VO->resize(1051, 674);
        label = new QLabel(VO);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(280, 20, 401, 41));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(22);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        tabWidget = new QTabWidget(VO);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 80, 1061, 601));
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        Wave_Display = new QCustomPlot(tab_1);
        Wave_Display->setObjectName(QStringLiteral("Wave_Display"));
        Wave_Display->setGeometry(QRect(30, 60, 891, 291));
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(80, 410, 501, 131));
        Connect_Btn = new QPushButton(groupBox);
        Connect_Btn->setObjectName(QStringLiteral("Connect_Btn"));
        Connect_Btn->setGeometry(QRect(340, 50, 93, 28));
        IP_LineEdit = new QLineEdit(groupBox);
        IP_LineEdit->setObjectName(QStringLiteral("IP_LineEdit"));
        IP_LineEdit->setGeometry(QRect(190, 30, 113, 21));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(90, 30, 72, 15));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(90, 70, 72, 15));
        Port_LineEdit = new QLineEdit(groupBox);
        Port_LineEdit->setObjectName(QStringLiteral("Port_LineEdit"));
        Port_LineEdit->setGeometry(QRect(190, 70, 113, 21));
        Network_View = new QTextBrowser(tab_1);
        Network_View->setObjectName(QStringLiteral("Network_View"));
        Network_View->setGeometry(QRect(660, 370, 381, 191));
        Display_Slider = new QSlider(tab_1);
        Display_Slider->setObjectName(QStringLiteral("Display_Slider"));
        Display_Slider->setGeometry(QRect(400, 20, 160, 22));
        Display_Slider->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(tab_1);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(340, 20, 72, 15));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(500, 0, 461, 531));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 30, 371, 31));
        dateTimeEdit = new QDateTimeEdit(tab_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(50, 70, 194, 22));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 70, 93, 28));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(160, 120, 111, 31));
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(280, 120, 101, 31));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 120, 61, 21));
        label_2->setTextFormat(Qt::RichText);
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(110, 200, 111, 31));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 240, 141, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 171, 131, 21));
        label_3->setTextFormat(Qt::RichText);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 210, 72, 15));
        textEdit_3 = new QTextEdit(tab_2);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(110, 240, 111, 31));
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 250, 72, 15));
        comboBox_2 = new QComboBox(tab_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(50, 330, 87, 22));
        comboBox_3 = new QComboBox(tab_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setGeometry(QRect(260, 330, 87, 22));
        label_6 = new QLabel(tab_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 300, 72, 15));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 300, 72, 15));
        textEdit_4 = new QTextEdit(tab_2);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(150, 380, 81, 31));
        label_8 = new QLabel(tab_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 380, 111, 20));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(250, 380, 131, 28));
        label_9 = new QLabel(tab_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(50, 430, 72, 15));
        Open_Btn = new QPushButton(tab_2);
        Open_Btn->setObjectName(QStringLiteral("Open_Btn"));
        Open_Btn->setGeometry(QRect(40, 460, 93, 28));
        label_10 = new QLabel(tab_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(170, 430, 72, 15));
        Close_Btn = new QPushButton(tab_2);
        Close_Btn->setObjectName(QStringLiteral("Close_Btn"));
        Close_Btn->setGeometry(QRect(160, 460, 93, 28));
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(40, 510, 401, 28));
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(VO);

        tabWidget->setCurrentIndex(0);
        comboBox_2->setCurrentIndex(1);
        comboBox_3->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(VO);
    } // setupUi

    void retranslateUi(QWidget *VO)
    {
        VO->setWindowTitle(QApplication::translate("VO", "VO", 0));
        label->setText(QApplication::translate("VO", "Virtual Oscilloscope", 0));
        groupBox->setTitle(QApplication::translate("VO", "\347\275\221\347\273\234\350\256\276\347\275\256", 0));
        Connect_Btn->setText(QApplication::translate("VO", "Connect", 0));
        label_11->setText(QApplication::translate("VO", "IP Address:", 0));
        label_12->setText(QApplication::translate("VO", "Port:", 0));
        label_13->setText(QApplication::translate("VO", "Scale:", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("VO", "\346\263\242\345\275\242\346\230\276\347\244\272", 0));
        pushButton->setText(QApplication::translate("VO", "\350\257\267\346\261\202\350\256\276\345\244\207\344\277\241\346\201\257", 0));
        pushButton_2->setText(QApplication::translate("VO", "\350\256\276\347\275\256\346\227\266\351\227\264", 0));
        pushButton_3->setText(QApplication::translate("VO", "\350\256\276\347\275\256\350\277\220\350\241\214\345\217\202\346\225\260", 0));
        label_2->setText(QApplication::translate("VO", "\346\250\241\345\274\217\357\274\232", 0));
        pushButton_4->setText(QApplication::translate("VO", "\350\256\276\347\275\256\346\211\253\346\217\217\346\263\242\351\225\277\350\214\203\345\233\264", 0));
        label_3->setText(QApplication::translate("VO", "\350\256\276\347\275\256\346\211\253\346\217\217\346\263\242\351\225\277\350\214\203\345\233\264", 0));
        label_4->setText(QApplication::translate("VO", "\345\274\200\345\247\213\346\263\242\351\225\277", 0));
        label_5->setText(QApplication::translate("VO", "\347\273\210\346\255\242\346\263\242\351\225\277", 0));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("VO", "\345\274\200", 0)
         << QApplication::translate("VO", "\345\205\263", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("VO", "\345\274\200", 0)
         << QApplication::translate("VO", "\345\205\263", 0)
        );
        label_6->setText(QApplication::translate("VO", "\345\274\200\345\205\263\345\205\211\346\272\220", 0));
        label_7->setText(QApplication::translate("VO", "\345\274\200\345\205\263\346\201\222\346\265\201\346\263\265", 0));
        label_8->setText(QApplication::translate("VO", "\350\256\276\347\275\256\346\201\222\346\265\201\346\263\265\345\216\213\345\212\233", 0));
        pushButton_5->setText(QApplication::translate("VO", "\350\256\276\347\275\256\346\201\222\346\265\201\346\263\265\345\216\213\345\212\233", 0));
        label_9->setText(QApplication::translate("VO", "\345\220\257\345\212\250\346\243\200\346\265\213", 0));
        Open_Btn->setText(QApplication::translate("VO", "\345\274\200", 0));
        label_10->setText(QApplication::translate("VO", "\345\201\234\346\255\242\346\243\200\346\265\213", 0));
        Close_Btn->setText(QApplication::translate("VO", "\345\205\263", 0));
        pushButton_8->setText(QApplication::translate("VO", "\350\257\273\345\217\226\345\220\270\345\205\211\345\272\246\343\200\201\345\217\202\346\257\224\351\200\232\351\201\223\345\205\211\345\274\272\343\200\201\346\243\200\346\265\213\351\200\232\351\201\223\345\205\211\345\274\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("VO", "\350\211\262\350\260\261\344\273\252\350\256\276\347\275\256", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("VO", "\345\217\202\346\225\260\350\256\241\347\256\227", 0));
    } // retranslateUi

};

namespace Ui {
    class VO: public Ui_VO {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VO_H
