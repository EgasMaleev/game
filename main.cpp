#include "game.h"

#include <QApplication>

Game * game;

int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    game = new Game();
    game->setWindowTitle("самая лучшая программа");
    game->show();

    return a.exec();
}
