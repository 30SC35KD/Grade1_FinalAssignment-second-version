#include "aftergoal.h"
#include<QPainter>
#include<QPushButton>
#include<QLabel>
#include<QMovie>
#include<QString>
aftergoal::aftergoal(QWidget *parent)
    : QWidget{parent}
{
    this->setFixedSize(750,450);
    setWindowIcon(QIcon(":/new/prefix1/image/soccer_aftergoal.jpg"));
    celebrate->move(100,300);
    celebrate->setFixedSize(150,50);
    celebrate->setFont(QFont("Roman typeface",18));
    celebrate->setText("Celebrate");
    continue0->move(500,300);
    continue0->setFixedSize(150,50);
    continue0->setFont(QFont("Roman typeface",18));
    continue0->setText("Continue");
    connect(continue0,&QPushButton::released,[=]{
        this->hide();
        this->P1_IsGoal=false;
        this->P2_IsGoal=false;
        emit recover();
    });
    connect(celebrate,&QPushButton::clicked,[=]
{
        if(this->t=="messi")
        {}
});
}

void aftergoal::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    QPixmap prebackground;
    prebackground.load(":/new/prefix1/image/goal.jpg");
    painter.drawPixmap(0,0,this->width(),this->height(),prebackground);
}

void aftergoal::playgif(QString path)
{QLabel *label = new QLabel(this);
    QMovie *movie = new QMovie(path);
    label->setMovie(movie); // 1. 设置要显示的 GIF 动画图片
    movie->start();         // 2. 启动动画
    label->show();

    QObject::connect(movie, &QMovie::frameChanged, [=](int frameNumber) {
        // GIF 动画执行一次就结束
        if (frameNumber == movie->frameCount() - 1) {
            movie->stop();
        }
    });
}
