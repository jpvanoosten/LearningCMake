#include <Game.h>

#include <iostream>

using namespace std;

Game::Game()
{}

Game::~Game()
{}

void Game::Update(float deltaTime)
{
    cout << "Game::Update( " << deltaTime << "s )\n";
}

void Game::Render()
{
    cout << "Game::Render()\n";
}
