/*#include <QApplication>
#include <QGraphicsScene>
#include "enemy.h"
#include "player.h"
#include <QGraphicsView>
#include <QGraphicsItem>
#include <QTimer>*/
/*
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //добавляем экран
    QGraphicsScene* scene = new QGraphicsScene();

    //создаём элемент, чтобы поместить его на экран
    Enemy* enemy = new Enemy();
    QGraphicsRectItem* player1 = new QGraphicsRectItem();
    player1->setRect(0, 0, 100, 100);

    //player1->setRect(0, 0, 100, 100);
    //добавляем элемент на экран
    scene->addItem(enemy);
    scene->addItem(player1);
    //делаем наш прямоугольник focusable
    //player1->setFlag(QGraphicsItem::ItemIsFocusable);
    //player1->setFocus();

    //добавляем view
    QGraphicsView* view = new QGraphicsView(scene);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    view->show();
    view->setFixedSize(800, 600);
    scene->setSceneRect(0, 0, 800, 600);

    //player1->setPos(view->width()/2, view->height() - player1->rect().height());

    QTimer* timer = new QTimer();
    QObject::connect(timer, SIGNAL(timeout()), enemy, SLOT(spawn()));
    timer->start(500);
    return a.exec();
}*/

#include "game.h"

#include <QApplication>

Game * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();
}
