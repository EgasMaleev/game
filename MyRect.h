#ifndef MYRECT_H
#define MYRECT_H
#include <QGraphicsScene>
#include <QTimer>
#include <QList>
#include "enemy.h"
#include <QDebug>

class MyRect: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent *event);
/*public slots:
    void spawn();
};*/

#endif // MYRECT_H
