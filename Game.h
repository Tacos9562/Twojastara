#pragma once
#include "player.h"
#include <vector>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include "Bot.h"

class Game
{
private:
	int numberOfPlayers;
	player* players;
	bool isBot;

public:
	//template <typename T>
	//void checkError(T& input);

	void allocateMemory();
	void freeMemory();
	void addPlayers();
	void initializationPlayers();
	void play();
	void decision();
	bool checkPoints(int rounds, player Test);
	Game();
};
