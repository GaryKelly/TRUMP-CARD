#include <iostream>
#include <SFML/Graphics.hpp>

#pragma once


class Player
{
public:
	double posX = 200;
	double posY = 200;

	float deltaTime = 0;

	bool animationControl = false;

	int jfkStance = 1; //will control what sprite to use
	

	sf::Texture jFKTex;
	sf::Sprite jFKSprite1;
	


	Player();
	void update(sf::Time t_dt);
	void render(sf::RenderWindow & window);


	void breakWalls();

	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();

	void jFKstances(); // will change the int recs for jfk
	void animate(sf::Time t_dt);

	void keyinput();
	void initSprites();

	sf::Vector2f getPosition();
















};