#ifndef ENEMY_H
#define ENEMY_H

#include <QRect>

class Game;

class Enemy
{
public:
    Enemy(Game *game);
    QRect getRect();
    void move();
    void shoot();

private:
    QRect rect;
    int speed;
    Game *game;
};

#endif // ENEMY_H
