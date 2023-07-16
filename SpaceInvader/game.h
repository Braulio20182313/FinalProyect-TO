#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QTimer>
#include <QKeyEvent>
#include "bullet.h"
class Player;
class Enemy;

class Game : public QWidget
{
    Q_OBJECT

public:
    Game(QWidget *parent = nullptr);
    ~Game();

protected:
    void keyPressEvent(QKeyEvent *event);
    void keyReleaseEvent(QKeyEvent *event);
    void paintEvent(QPaintEvent *event);
    void updateGame();

private:
    void initializeGame();
    void checkCollisions();
    void gameOver();

    Player *player;
    QList<Enemy*> enemies;
    QList<Bullet*> playerBullets;
    QList<Bullet*> enemyBullets;
    bool gameRunning;
    bool leftPressed;
    bool rightPressed;
    QTimer *gameTimer;
};

#endif // GAME_H
