#ifndef PLAYER_H
#define PLAYER_H

#include <QRect>

class Game;

class Player
{
public:
    Player(Game *game);
    QRect getRect();
    void moveLeft();
    void moveRight();
    void stopMoving();
    void shoot();

private:
    QRect rect;
    int speed;
    Game *game;
};

#endif // PLAYER_H
