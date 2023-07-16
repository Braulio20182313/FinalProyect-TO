#ifndef BULLET_H
#define BULLET_H

#include <QRect>

class Game;

class Bullet
{
public:
    Bullet(Game *game, bool isPlayerBullet, int x, int y);
    QRect getRect();
    void move();

private:
    QRect rect;
    int speed;
    bool playerBullet;
    Game *game;
};

#endif // BULLET_H
