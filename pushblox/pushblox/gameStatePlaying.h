#pragma once

#include "gameState.h"
#include "player.h"
#include <iostream>
#include <memory>

namespace State
{
	class GameStatePlaying : public GameState
	{
	public:
		GameStatePlaying(Game& game);
		
		void input();
		void update(double dt);
		void draw();

	private:
		//std::unique_ptr<Player> playerOne;
		Player playerOne;
	};
}