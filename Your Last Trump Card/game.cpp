//@author Dylan Curran
#include "game.h"
#include <iostream>

Game::Game()
	: m_window{ sf::VideoMode(840,840), "Trump Card" } 
	// , sf::Style::Fullscreen }
{
	loadLevel1();
	loadLevel2();
	loadLevel3();
	loadLevel4();
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			mazeLv2[i][j].makeTransparent();
			mazeLv3[i][j].makeTransparent();
			mazeLv4[i][j].makeTransparent();
		}
	}
	gameLevel = Level::LEVEL1;
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
	{
		gameLevel = Level::LEVEL2;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{
		gameLevel = Level::LEVEL3;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::M))
	{
		gameLevel = Level::LEVEL4;
	}
}

void Game::render()
{
	m_window.clear();
	switch (gameLevel)
	{
	case Level::LEVEL1:
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv1[i][j].draw(m_window);
			}
		}
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv2[i][j].draw(m_window);
			}
		}
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv3[i][j].draw(m_window);
			}
		}
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv4[i][j].draw(m_window);
			}
		}
		break;
	case Level::LEVEL2:
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv2[i][j].draw(m_window);
			}
		}
		break;
	case Level::LEVEL3:
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv3[i][j].draw(m_window);
			}
		}
		break;
	case Level::LEVEL4:
		for (int i = 0; i < LEVEL1SQ; i++)
		{
			for (int j = 0; j < LEVEL1SQ; j++)
			{
				mazeLv4[i][j].draw(m_window);
			}
		}
		break;
	default:
		break;
	}

	
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

void Game::loadLevel2()
{
	for (int i = LEVEL1SQ - 1; i >= 0; i--)
	{
		for (int j = LEVEL1SQ - 1; j >= 0; j--)
		{
			if (level2[i][j] == 0)
			{
				mazeLv2[i][j].setTextureFloor();
			}
			else
			{
				mazeLv2[i][j].setTextureWall();
			}
			mazeLv2[i][j].setPos(sf::Vector2f(i*BLOCK_H_AND_W, (j*BLOCK_H_AND_W)+420));
		}
	}
}

void Game::loadLevel3()
{
	for (int i = LEVEL1SQ - 1; i >= 0; i--)
	{
		for (int j = LEVEL1SQ - 1; j >= 0; j--)
		{
			if (level3[i][j] == 0)
			{
				mazeLv3[i][j].setTextureFloor();
			}
			else
			{
				mazeLv3[i][j].setTextureWall();
			}
			mazeLv3[i][j].setPos(sf::Vector2f((i*BLOCK_H_AND_W)+420, (j*BLOCK_H_AND_W)+420));
		}
	}
}

void Game::loadLevel4()
{
	for (int i = LEVEL1SQ - 1; i >= 0; i--)
	{
		for (int j = LEVEL1SQ - 1; j >= 0; j--)
		{
			if (level4[i][j] == 0)
			{
				mazeLv4[i][j].setTextureFloor();
			}
			else
			{
				mazeLv4[i][j].setTextureWall();
			}
			mazeLv4[i][j].setPos(sf::Vector2f((i*BLOCK_H_AND_W)+420, j*BLOCK_H_AND_W));
		}
	}
}

