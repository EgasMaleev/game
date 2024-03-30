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
    //Enemy* enemy = new Enemy(QIcon("C:\\hello\\smile.png"));
    scene->addItem(enemy);
}
