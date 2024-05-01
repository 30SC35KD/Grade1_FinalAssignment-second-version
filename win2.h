#ifndef WIN2_H
#define WIN2_H

#include <QWidget>

class win2 : public QWidget
{
    Q_OBJECT
public:
    explicit win2(QWidget *parent = nullptr);
void paintEvent(QPaintEvent*);
public slots:

signals:
};

#endif // WIN2_H
