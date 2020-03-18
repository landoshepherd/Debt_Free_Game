//
//  engine.cpp
//  Debt_Free_Game
//
//  Created by Lando Shepherd on 12/23/19.
//  Copyright © 2019 Lando Shepherd. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "engine.hpp"
#include <string>

Engine::Engine()
{
	//Do nothing
}

Engine::~Engine()
{
	//Do nothing
}

bool Engine::validMainMenuInput(std::string& userInput)
{
	std::string possibleChoices("ABC");
	if (userInput.size() != 1)
	{
		return false;
	}

	userInput[0] = toupper(userInput[0]);

	if (possibleChoices.find(userInput[0]) != std::string::npos)
	{
		return true;
	}
	return false;
}

bool Engine::validGameplayInput(std::string& userInput)
{
	std::string possibleChoices("NIESDBQ");
	if (userInput.size() != 1)
	{
		return false;
	}

	userInput[0] = toupper(userInput[0]);

	if (possibleChoices.find(userInput[0]) != std::string::npos)
	{
		return true;
	}
	return false;
}

void Engine::printGameDashboard()
{
	std::cout << "Total Income:   $" << std::setw(10) << std::left << 0 << "Total Savings: $" << 0 << std::setw(10) << std::endl;;
	std::cout << "Total Expenses: $" << std::setw(10) << std::left << 0 << "Total Debt: $" << 0 << std::setw(10) << std::endl;
	std::cout << "Total Cashflow: $" << std::setw(10) << std::left << 0 << "Total Networth: $" << 0 << std::setw(10) << std::endl;
	
	std::cout << std::endl;
	std::cout << std::setw(29) << std::right << "Baby Steps" << std::endl;
	std::cout << std::setw(29) << std::right << "----------" << std::endl;
	
	std::cout << "[N] Advance to next month          [I] View Income Detail" << std::endl;
	std::cout << "[E] View Expenses Detail           [S] View Savings Detail" << std::endl;
	std::cout << "[D] View Debt                      [B] View Baby Steps" << std::endl;
	std::cout << "[Q] Quit Game" << std::endl;
}

void Engine::printMainMenu()
{
	std::cout << "Debt Freedom Game" << std::endl;
	std::cout << "[A] Play" << std::endl;
	std::cout << "[B] How To Play" << std::endl;
	std::cout << "[C] Quit" << std::endl;
}

void Engine::printIncomeData()
{
	std::cout << "Income" << std::endl;
	std::cout << "------" << std::endl;
	std::cout << "Salary: $" << 0 << std::endl;
	std::cout << "Press [B] to go Back" << std::endl;
}

bool Engine::validIncomeDetailInput(std::string& userInput)
{
	if (userInput.size() != 1)
	{
		return false;
	}

	if (toupper(userInput[0]) != 'B')
	{
		return false;
	}
	return true;
}

void Engine::launchIncomeDetail()
{
	std::string userInput;
	do
	{
		printIncomeData();
		getline(std::cin, userInput);
	} while (!validIncomeDetailInput(userInput));
	
}
void Engine::mainGameLoop()
{
	std::string userInput;
	do
	{
		printGameDashboard();
		getline(std::cin, userInput);
		if(validGameplayInput(userInput))
		{
			
			if (userInput[0] == 'N')
			{
				std::cout << "Advancing to next month..." << std::endl;
			}
			else if(userInput[0] == 'I')
			{
				launchIncomeDetail();
			}
			else if(userInput[0] == 'E')
			{
				std::cout << "Viewing expense detail..." << std::endl;
			}
			else if(userInput[0] == 'S')
			{
				std::cout << "Viewing savings detail..." << std::endl;
			}
			else if(userInput[0] == 'D')
			{
				std::cout << "Viewing list of debt..." << std::endl;
			}
			else if(userInput[0] == 'B')
			{
				std::cout << "Viewing baby steps..." << std::endl;
			}
			else
			{
				//Player is quitting the game.
			}
		}
		else
		{
			std::cout << "Invalid entry." << std::endl;
		}
	} while (userInput[0] != 'Q');
}

void Engine::startGameEngine()
{
	std::string userInput;
	do
	{
		printMainMenu();
		getline(std::cin, userInput);
		if (validMainMenuInput(userInput))
		{
			if (userInput == "A")
			{
				mainGameLoop();
			}
			else if (userInput == "B")
			{
				std::cout << "Now showing the instructions..." << std::endl;
			}
			else if (userInput == "C")
			{
				std::cout << "Thanks for playing." << std::endl;
			}
		}
		else
		{
			std::cout << "Invalid entry." << std::endl;
			userInput.clear();
		}
	}while(userInput != "C");
}
