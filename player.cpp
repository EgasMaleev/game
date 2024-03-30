#include "player.h"
#include <QDebug>

/*player::player(): QObject(), QGraphicsRectItem(){

    setPos(0, 0);

    setRect(0, 0, 15, 15);

}*/

void player::keyPressEvent(QKeyEvent* event){
    qDebug<<"MyRect";
}

/*void player::spawn(){
    Enemy* enemy = new Enemy();
    scene()->addItem(enemy);
}*/
