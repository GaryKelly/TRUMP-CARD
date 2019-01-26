//@author Dylan Curran
#include "game.h"
#include <iostream>

Game::Game()
	: m_window{ sf::VideoMode(800,800), "Trump Card" } 
	// , sf::Style::Fullscreen }
{
	loadLevel1();
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
	jfk.update(t_deltaTime);
}

void Game::render()
{
	m_window.clear(sf::Color(0,0,0,0));

	
	for (int i = 0; i < LEVEL1SQ; i++)
	{
		for (int j = 0; j < LEVEL1SQ; j++)
		{
			mazeLv1[i][j].draw(m_window);
		}
	}
	jfk.render(m_window);
	m_window.display();
}

void Game::loadLevel1()
{
	for (int i = LEVEL1SQ-1; i >= 0; i--)
	{
		for (int j = LEVEL1SQ-1; j >= 0; j--)
		{
			if (level1[i][j] == 0)
			{
				mazeLv1[i][j].setTextureFloor();
			}
			else
			{
				mazeLv1[i][j].setTextureWall();
			}
			mazeLv1[i][j].setPos(sf::Vector2f(i*BLOCK_H_AND_W, j*BLOCK_H_AND_W));
		}
	}
}

