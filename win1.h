#ifndef WIN1_H
#define WIN1_H
#include<QPaintEvent>
#include <QWidget>

class win1 : public QWidget
{
    Q_OBJECT
public:
    explicit win1(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent*);
signals:

};

#endif // WIN1_H
