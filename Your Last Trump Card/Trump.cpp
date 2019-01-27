#include "Trump.h"

Trump::Trump()
{
	initSprite();
}

void Trump::initSprite()
{
	if (!m_TextTrump.loadFromFile("ASSETS/IMAGES/TrumpSpriteSheet.png"))
	{
		std::cout << "Watch out he doesn't have a trumpet" << std::endl;
	}
	m_Trump.setTexture(m_TextTrump);
	trumpBoi = (sf::IntRect(m_trumpX, m_trumpY,42,42));
	m_Trump.setTextureRect(trumpBoi);
	m_Trump.setPosition(m_position);
}

void Trump::updateTrump(sf::Time t_deltaTime)
{
	m_trumpTimer += t_deltaTime.asSeconds();
	if (m_trumpTimer>1)
	{ 
		trumpBoi=(sf::IntRect(m_trumpX * 42, m_trumpY, 42, 42));
		m_trumpTimer = 0;
		m_trumpX++;
		m_Trump.setTextureRect(trumpBoi);
	}
	if (m_trumpX >= 3)
	{
		m_trumpX = 0;
	}
}

void Trump::kill()
{
	m_alive = false;
}

void Trump::draw(sf::RenderWindow & t_window)
{
	if (m_alive == true)
	{
		t_window.draw(m_Trump);
	}
}
