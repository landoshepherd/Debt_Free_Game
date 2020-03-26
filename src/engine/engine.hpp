//
//  engine.hpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/23/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#ifndef engine_hpp
#define engine_hpp

#include <string>
#include "../account/account.hpp"
#include "../player/player.hpp"

//class Player;
class Engine
{
	//Functions for main dashboard operations
	public:
		Engine();
		~Engine();
		void initializePlayer();
		int calculateTotalPlayerSavings();
		bool validMainMenuInput(std::string& userInput);
		bool validGameplayInput(std::string& userInput);
		void printGameDashboard();
		void printMainMenu();
		void mainGameLoop();
		void startGameEngine();
	
	public:
		void printIncomeData();
		bool validIncomeDetailInput(std::string& userInput);
		void launchIncomeDetail();

	private:
		Player m_player;
};
	
#endif /* engine_hpp */
