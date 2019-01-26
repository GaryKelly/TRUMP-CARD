// @Author Dylan Curran
#ifndef GAME
#define GAME

#include "Trump.h"
#include <SFML/Graphics.hpp>

class Game
{
public:
	Trump DTrump;
	Game();
	~Game();
	/// <summary>
	/// main method for game
	/// </summary>
	void run();
private:

	void processEvents();
	void update(sf::Time t_deltaTime);
	void render();

	sf::RenderWindow m_window;
};

#endif // !GAME

