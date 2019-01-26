#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Block
{
private:
	bool m_wall{false};
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Color m_alpha = sf::Color(0, 0, 0, 225);
	sf::Vector2f m_pos;
public:
	Block();
	~Block();
	void setTextureWall();
	void setTextureFloor();
	void setSprite();
	void setPos(sf::Vector2f t_pos);
	void draw(sf::RenderWindow & t_window)
	{
		t_window.draw(m_sprite);
	}
	bool isWall() { return m_wall; }
	void makeTransparent();
	void cancelTransparency();

};