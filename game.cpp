#include "game.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QFont>
#include <QGraphicsScene>
#include <QKeyEvent>
#include "enemy.h"
#include <QGraphicsSceneMouseEvent>
#include <QDebug>

//#include "Enemy.h"


Game::Game(QWidget *parent){
    // create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,600);

    //Game.setWindowTitle("самая лучшая программа");

    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(800,600);

    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),this, SLOT(spawn()));
    timer->start(500);

    show();
}

void Game::spawn()
{
    Enemy * enemy = new Enemy();
    scene->addItem(enemy);
}
/*void Game::mouseMoveEvent(QMouseEvent *event) {
    if (event->type() == QMoveEvent)
    {
        //this->ordinata = 1 + 2*ordinata;
        qDebug() << "click";
    }
    qDebug() << QString::number(event->pos().x());
    qDebug() << QString::number(event->pos().y());
}*/
/*void Game::eventFilter(QObject *obj, QEvent *event)
{
    if (obj == Enemy) {
        QEvent::Type type = event->type();
        if  (type == QEvent::MouseMove) {

            qDebug()<<"No curcor";

        } else if (type == QEvent::HoverEnter) {

            qDebug()<<"YES curcor";

        }else if (type == QEvent::MouseButtonPress) {
            qDebug()<<"Voy voy enter";
        }
    }
    if  (event->type() == QEvent::MouseMove) {

        qDebug()<<"No curcor";

    }

    //return QWidget::eventFilter(obj, event);
}*/
