#include "win2.h"
#include<QPainter>
#include<QLabel>
#include<QPalette>
#include<QPushButton>
#include<QApplication>
#include<QProcess>
#include<QDir>
#include<QDebug>
win2::win2(QWidget *parent)
    : QWidget{parent}
{
    this->setFixedSize(800,500);
    this->setWindowTitle("SoccerGoal");
    setWindowIcon(QIcon(":/new/prefix1/image/soccerfourth.jpg"));
    QLabel *q=new QLabel(this);
    q->setFixedSize(800,500);
    q->move(100,-10);
    q->setText("Congratulations on P2's Victory!");
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
void win2::paintEvent(QPaintEvent*)
{
    QPainter p(this);
    QPixmap winground;
    winground.load(":/new/prefix1/image/win0.jpg");
    p.drawPixmap(0,0,this->width(),this->height(),winground);
}
