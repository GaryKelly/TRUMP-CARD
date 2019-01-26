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
	if (!m_texture.loadFromFile("ASSETS/Wall.png"))
	{
		std::cout << "Error loading file" << std::endl;
	}

	setSprite();
}

void Block::setTextureFloor()
{
	m_wall = false;
	if (!m_texture.loadFromFile("ASSETS/Floor.png"))
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
