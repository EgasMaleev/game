#ifndef ENEMY_H
#define ENEMY_H


#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QGraphicsPixmapItem>

class Enemy: public QObject,public QGraphicsRectItem{
    Q_OBJECT
public:
    Enemy(QGraphicsItem * parent=0);

    void on_mousePressedEvent(QGraphicsSceneMouseEvent *event);
public slots:
    void move();
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
};
#endif // ENEMY_H
