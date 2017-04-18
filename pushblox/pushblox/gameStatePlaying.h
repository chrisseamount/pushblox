#pragma once

#include "gameState.h"
#include "player.h"

namespace State
{
	class GameStatePlaying : public GameState
	{
	public:
		GameStatePlaying(Game& game);
		
		void input(sf::Time& dt);
		void update(double dt);
		void draw();
	private:
		Player player;
	};
}