#include "enemy.h"
#include "game.h"

Enemy::Enemy(Game *game)
    : game(game)
{
    // Set up enemy's initial position, speed, and size
}

QRect Enemy::getRect()
{
    return rect;
}

void Enemy::move()
{
    // Move the enemy in a specific pattern (e.g., left-right movement)
}

void Enemy::shoot()
{
    // Create a bullet and add it to the enemyBullets list in the game
}
