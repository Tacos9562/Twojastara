#include "Game.h"

using std::cout; //pozwala na nie pisanie std:: 
using std::cin;
using std::endl;
using std::vector;

Game::Game()
{
	initializationPlayers();
	addPlayers();
	addPlayers();
	//players = new player(); //alokuje pamiec i wywo³uje konstruktora dla playera tworzy nowy obiekt
	//players.resize(number);
	players[0].setName();
	players[1].setName();
}

void Game::addPlayers()
{
	//players.push_back(player());
}

void Game::initializationPlayers()
{
	auto numberOfPlayers = 0; //kompilator domysla siê co to za obiekt
	cout << "Podaj liczbe graczy (1 do 2):";
	cin >> numberOfPlayers;
	while (cin.fail() == true || numberOfPlayers <1 || numberOfPlayers>2)
	{
		system("cls");
		cout << "Podaj liczbe graczy:" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> numberOfPlayers;
	}
}

void Game::play()
{
	bool winner=false;
	int rounds = 0;
	cout << "Podaj liczbe rozgrywek\n ";
	cin >> rounds;

	while (winner == false)
	{
		players[0].makemove();
		players[1].makemove();
		decision();
		
		cout << "\nGracz1 "<<players[0].getPoints();
		cout << "Gracz2\n"<<players[1].getPoints();

	}
}

bool Game::checkPoints(int rounds,player Test)
{
	return Test.getPoints() == rounds;
}

void Game::decision()
{
	//1 - kamien 2 - papier 3 - nozyce 
	if (players[0].getChoice() == 1)
	{
		if (players[1].getChoice() == 1)
		{
			cout << "REMIS";
		}
		else if (players[1].getChoice() == 2)
		{
			cout << "PRZEGRANA";
			players[1].getName();
		}
		else if (players[1].getChoice() == 3)
		{
			cout << "WYGRYNA";
			players[1].getName();
		}
	}
	//1 - kamien 2 - papier 3 - nozyce 
	if (players[0].getChoice() == 2)
	{
		if (players[1].getChoice() == 1)
		{
			cout << "WYGRANA";
		}
		else if (players[1].getChoice() == 2)
		{
			cout << "REMIS";
			players[1].getName();
		}
		else if (players[1].getChoice() == 3)
		{
			cout << "PRZEGRANA";
			players[1].getName();
		}
	}
	//1 - kamien 2 - papier 3 - nozyce 
	if (players[0].getChoice() == 3)
	{
		if (players[1].getChoice() == 1)
		{
			cout << "PRZEGRANA";
		}
		else if (players[1].getChoice() == 2)
		{
			cout << "WYGRANA";
			players[1].getName();
		}
		else if (players[1].getChoice() == 3)
		{
			cout << "REMIS";
			players[1].getName();
		}
	}
}

/*
template <typename T> //szablon
void Game::checkError(T& input)
{
	T temp;
	while (cin.fail() == true)
	{
		cout << "Podaj liczbe graczy:" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		system("cls");
		cin >> temp;
	}
	input = temp;
}
*/