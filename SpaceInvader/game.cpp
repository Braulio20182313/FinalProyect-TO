#include "game.h"
#include "player.h"
#include "enemy.h"
#include "bullet.h"
#include <QPainter>
#include <QKeyEvent>

Game::Game(QWidget *parent) : QWidget(parent)
{
    setFixedSize(800, 600);
    gameRunning = false;
    leftPressed = false;
    rightPressed = false;
    player = new Player(this);
    initializeGame();
    gameTimer = new QTimer(this);
    connect(gameTimer, &QTimer::timeout, this, &Game::updateGame);
    gameTimer->start(16); // ~60 FPS
}

Game::~Game()
{
    delete player;
    qDeleteAll(enemies);
    qDeleteAll(playerBullets);
    qDeleteAll(enemyBullets);
}

void Game::initializeGame()
{
    // Set up initial game state, player, and enemies
}

void Game::keyPressEvent(QKeyEvent *event)
{
    // Handle key press events (e.g., move player)
}

void Game::keyReleaseEvent(QKeyEvent *event)
{
    // Handle key release events (e.g., stop moving player)
}

void Game::paintEvent(QPaintEvent *event)
{
    // Render the game scene using QPainter
}

void Game::updateGame()
{
    // Update game state (e.g., move player and enemies)
    // Check for collisions
    // Repaint the game scene
}

void Game::checkCollisions()
{
    // Check collisions between player, enemies, and bullets
}

void Game::gameOver()
{
    // Handle game over condition
}
