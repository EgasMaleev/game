#ifndef GAME_H
#define GAME_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Game; }
QT_END_NAMESPACE
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>
#include <QObject>

class Game: public QGraphicsView{
    Q_OBJECT
public:
    Game(QWidget * parent=0);

    QGraphicsScene * scene;

private slots:
    void spawn();
};
#endif // GAME_H
