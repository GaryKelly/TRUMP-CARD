//@author Dylan Curran
#include "game.h"
#include <iostream>

Game::Game()
	: m_window{ sf::VideoMode(800,800), "Trump Card" }// , sf::Style::Fullscreen }
{

}
Game::~Game()
{
}
void Game::run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	sf::Time timePerFrame = sf::seconds(1.f / 60.f);
	while (m_window.isOpen())
	{
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			processEvents();
			update(timePerFrame);
		}
		render();
	}
}

void Game::processEvents()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			m_window.close();
		}
	}
}

void Game::update(sf::Time t_deltaTime)
{
}

void Game::render()
{

}

