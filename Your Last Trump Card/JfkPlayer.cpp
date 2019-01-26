#include "JfkPlayer.h"

Player::Player()
{

	initSprites();

}

void Player::update(sf::Time t_dt)
{
	keyinput();
	jFKstances();
	animate(t_dt);
	jFKSprite1.setPosition(posX,posY);
	
}

void Player::render(sf::RenderWindow & window)
{

	window.draw(jFKSprite1);
}

void Player::breakWalls()
{
	//break wall function goes here
}

void Player::moveLeft()
{//moves left
	posX = posX--;
}

void Player::moveRight()
{//moves right
	posX = posX++;
}

void Player::moveUp()
{//moves up
	posY = posY--;
}

void Player::moveDown()
{//moves down
	posY = posY++;
}

void Player::jFKstances()
{
	if (animationControl)
	{
		if (jfkStance == 1)
		{
			sf::IntRect jfkRect(5, 0, 32, 40);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 2)
		{
			sf::IntRect jfkRect(5, 41, 32, 41);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 3)
		{
			sf::IntRect jfkRect(11, 83, 22, 42);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 4)
		{
			sf::IntRect jfkRect(8, 125, 28, 42);
			jFKSprite1.setTextureRect(jfkRect);
		}
	}
	else if (animationControl == false)
	{//change this here
		if (jfkStance == 1)
		{
			sf::IntRect jfkRect(47, 0, 32, 41);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 2)
		{
			sf::IntRect jfkRect(47, 41, 32, 42);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 3)
		{
			sf::IntRect jfkRect(53, 83, 22, 41);
			jFKSprite1.setTextureRect(jfkRect);
		}

		if (jfkStance == 4)
		{
			sf::IntRect jfkRect(50, 125, 22, 41);
			jFKSprite1.setTextureRect(jfkRect);
		}
	}


}

void Player::animate(sf::Time t_dt)
{
	
	if (deltaTime >= 1)
	{
		deltaTime = deltaTime + t_dt.asSeconds();
		animationControl = true;
		if (deltaTime >= 2)
		{
			
			

			deltaTime = 0;
		}
	}
	else 
	{
		animationControl = false;
		deltaTime = deltaTime + t_dt.asSeconds();
	}
}

void Player::keyinput()
{//handles the movement
	//willl pass into the functions just here to make everything look neat <3
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		jfkStance = 4;
		moveLeft();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		jfkStance = 3;
		moveRight();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		jfkStance = 2;
		moveUp();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		jfkStance = 1;
		moveDown();
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::L))
	{
		breakWalls();
	}

}

void Player::initSprites()
{
	if (!jFKTex.loadFromFile("ASSETS/IMAGES/JFK.png"))
	{
		std::cout << "Error loading spriteSheet" << std::endl;
	}

	jFKSprite1.setTexture(jFKTex);
	jFKSprite1.setPosition(posX, posY);
	sf::IntRect jfkRect(5, 0, 32, 40);
	jFKSprite1.setTextureRect(jfkRect);
	jFKSprite1.setScale(1.5, 1.5);


	
	
	
	
}

sf::Vector2f Player::getPosition()
{
	return jFKSprite1.getPosition();
}
//top x and y and the width and height