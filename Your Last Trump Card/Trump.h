#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Trump
{
private:
	const int m_SPEEDWAGON = 1;
	float m_posX = 10.0f;
	float m_posY = 10.0f;
	int m_sap = 0;
	int m_trumpX = 1;
	int m_trumpY = 1;
	
	bool m_alive = true;
	sf::Sprite m_Trump;
	sf::Texture m_TextTrump;
	float m_trumpTimer = 0;
	sf::IntRect trumpBoi;

public:
	Trump();
	void initSprite();
	void updateTrump(sf::Time t_deltaTime);
	void kill();
	void draw(sf::RenderWindow & t_window);
};
