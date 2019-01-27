#include "Block.h"


Block::Block() 
{
}

Block::~Block()
{
	
}

void Block::setTextureWall()
{
	m_wall = true;
	if (!m_texture.loadFromFile("ASSETS/IMAGES/Wall.png"))
	{
		std::cout << "Error loading file" << std::endl;
	}

	setSprite();
}

void Block::setTextureFloor()
{
	m_wall = false;
	if (!m_texture.loadFromFile("ASSETS/IMAGES/FloorTile.png"))
	{
		std::cout << "Error loading file" << std::endl;
	}
	setSprite();
}

void Block::setSprite()
{
	m_sprite.setTexture(m_texture);
	
}

void Block::setPos(sf::Vector2f t_pos)
{
	m_pos = t_pos;
	m_sprite.setPosition(m_pos);
}

void Block::makeTransparent()
{
	m_sprite.setColor ( sf::Color( m_sprite.getColor() - m_alpha));
}

void Block::cancelTransparency()
{
	m_sprite.setColor ( sf::Color(m_sprite.getColor() + m_alpha));
}
