#include "enemy.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> // rand() -> really large int
#include "game.h"
#include <iostream>


extern Game * game;

//std::string list[] = {"C:\\hello\\shluha2.png", "C:\\hello\\leva2.png"};

Enemy::Enemy(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent){
    //set random x position
    //int random_number = rand() % 700;
    //this->setMouseTracking(true);
    setPos(rand_int, 0);

    // drew the rect
    setRect(0,0,15,15);
    //setPixmap(QPixmap("C:\\hello\\smile1.png"));

    // make/connect a timer to move() the enemy every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    // start the timer
    timer->start(50);
}

void Enemy::move(){
    // move enemy down
    setPos(x(),y()+ 1 + ordinata);

    // destroy enemy when it goes out of the screen
    if (pos().y() > 600){
        scene()->setBackgroundBrush(Qt::red);
        game->setWindowTitle("YOU LOOSE!");
        scene()->removeItem(this);
        delete this;
    }
}

void Enemy::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    this->scene()->removeItem(this);
    delete(this);
}
/*void Enemy::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->ordinata = 1 + 2*ordinata;
    qDebug() << this->ordinata << "\n";
}*/

