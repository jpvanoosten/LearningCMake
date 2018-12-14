#include <Game.h>

#include <iostream>

using std;

Game::Game()
{}

Game::~Game()
{}

void Game::Update(float deltaTime)
{
    cout << "Game::Update( " << deltaTime << " )\n";
}

void Game::Render()
{
    cout << "Game::Render()\n";
}
