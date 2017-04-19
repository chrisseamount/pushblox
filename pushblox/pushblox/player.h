#pragma once

#include "entity.h"

class Player : public Entity
{
public:
	Player();
	void updateSpritePosition();
	void keyboardInput();
	void keyboardInput2();
	void drawToWindow();
	void loadTexture();
	sf::Texture playerTexture;

	int getDirection() const;

	int _direction = 1;
	int _counterWalking = 0;
	bool _isRunning = false;

private:
	int _movementSpeed = 5;
	int _spritePosition = 32;
};