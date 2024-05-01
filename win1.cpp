#include "win1.h"
#include<QPainter>
#include<QLabel>
#include<QPalette>
#include<QPushButton>
#include<QApplication>
#include<QProcess>
#include<QDir>
#include<QDebug>
win1::win1(QWidget *parent)
    : QWidget{parent}
{
    this->setFixedSize(800,500);
    this->setWindowTitle("SoccerGoal");
    setWindowIcon(QIcon(":/new/prefix1/image/soccerfourth.jpg"));
    QLabel *q=new QLabel(this);
    q->setFixedSize(800,500);
    q->move(100,-10);
    q->setText("Congratulations on P1's Victory!");
    QPalette pe;
    pe.setColor(QPalette::WindowText,Qt::white);
    q->setPalette(pe);
    q->setFont(QFont("Roman typeface",33,87));
    QPushButton *returnback=new QPushButton(this);
    returnback->setFont(QFont("Roman typeface",18));
    returnback->setText("Return");
    returnback->setGeometry(650,400,100,50);
    connect(returnback,&QPushButton::clicked,[=]{    qApp->closeAllWindows();
    QProcess::startDetached(QApplication::applicationFilePath(), QApplication::arguments(), QDir::currentPath());
    qDebug()<<"6";});

}
void win1::paintEvent(QPaintEvent*)
{
    QPainter p(this);
    QPixmap winground;
    winground.load(":/new/prefix1/image/win.jpg");
    p.drawPixmap(0,0,this->width(),this->height(),winground);
}
