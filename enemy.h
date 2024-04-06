#ifndef ENEMY_H
#define ENEMY_H

//#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>
#include <QMouseEvent>

class Enemy: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent=0);
    int rand_int = (rand() % 46) * 15;
    int ordinata = rand_int % 4;

    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseMoveEvent(QGraphicsRectItem *event);

public slots:
    void move();
};
#endif // ENEMY_H
