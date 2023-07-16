#include "player.h"
#include "game.h"

Player::Player(Game *game)
    : game(game)
{
    // Set up player's initial position, speed, and size
}

QRect Player::getRect()
{
    return rect;
}

void Player::moveLeft()
{
    // Move the player to the left
}

void Player::moveRight()
{
    // Move the player to the right
}

void Player::stopMoving()
{
    // Stop player's movement
}

void Player::shoot()
{
    // Create a bullet and add it to the playerBullets list in the game
}
