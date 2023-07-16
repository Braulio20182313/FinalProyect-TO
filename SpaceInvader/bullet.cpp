#include "bullet.h"
#include "game.h"

Bullet::Bullet(Game *game, bool isPlayerBullet, int x, int y)
    : game(game), playerBullet(isPlayerBullet)
{
    // Set up bullet's initial position, speed, and size based on playerBullet
}

QRect Bullet::getRect()
{
    return rect;
}

void Bullet::move()
{
    // Move the bullet upwards if it's a player bullet or downwards if it's an enemy bullet
}
