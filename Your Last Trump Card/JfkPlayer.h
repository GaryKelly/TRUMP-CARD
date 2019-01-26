#include <iostream>
#include <SFML/Graphics.hpp>
#include "Globals.h"
#include "Block.h"
#pragma once


class Player
{
public:
	enum direction{Left, Right, Up, Down};
	
	Block block;
	
	double posX = 45;
	double posY = 0;

	float deltaTime = 0;

	bool animationControl = false;

	int jfkStance = 1;

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
	void readWalls();

	sf::Vector2f getPosition();
















};