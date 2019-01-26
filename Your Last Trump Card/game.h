// @Author Dylan Curran
#pragma once

#include <SFML/Graphics.hpp>
#include "Globals.h"
#include "Block.h"


class Game
{
public:

	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();
private:
	const static int LEVEL1SQ{ 10 };
	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();
	void loadLevel1();
	void loadLevel2();
	void loadLevel3();
	void loadLevel4();
	sf::RenderWindow m_window;
	Block mazeLv1[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv2[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv3[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv4[LEVEL1SQ][LEVEL1SQ];
	Level gameLevel;
};



