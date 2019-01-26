// @Author Dylan Curran
#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include "JfkPlayer.h"
class Game
{
public:
	
	Player jfk;


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

