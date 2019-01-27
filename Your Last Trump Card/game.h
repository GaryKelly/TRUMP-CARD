// @Author Dylan Curran
#pragma once

#include "Trump.h"
#include <SFML/Graphics.hpp>
#include "JfkPlayer.h"
#include "Globals.h"
#include "Block.h"
#include <SFML/Audio.hpp>



class Game
{
public:

	Trump DTrump;
	
	Player jfk;

	bool noMovement = false;



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
	void playSound();
	void death();
	void changeLevel1();
	void changeLevel2();
	void changeLevel3();
	void changeLevel4();
	sf::RenderWindow m_window;
	Block mazeLv1[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv2[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv3[LEVEL1SQ][LEVEL1SQ];
	Block mazeLv4[LEVEL1SQ][LEVEL1SQ];
	Level gameLevel;

	sf::SoundBuffer buffOof;
	sf::Sound oof;

	sf::SoundBuffer backingTrack;
	sf::Sound backMyTrack;

	bool trumpSong = false;
};



