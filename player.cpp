#include "player.h"

using std::cout; //pozwala na nie pisanie std:: 
using std::cin;
using std::endl;

player::player() 	
{
	choice = 0;
	points = 0;
}

void player::makemove() 
{
	cout << "Dostepne ruchy:\n";
	cout << "[1] Kamien\n";
	cout << "[2] Papier\n";
	cout << "[3] Nozyce\n";
	cout << "Wybierz ruch:\n";
	cin >> choice;
	while (cin.fail() == true || choice < 0)
	{
		system("cls");
		cout << "Wybierz ruch:" << endl;
		cin.clear();
		cin.ignore(256, '\n');
		cin >> choice;
	}
}

void player::addPoints()
{
	points++;
}

void player::setName()
{
	cout << "Podaj nazwe gracza\n";
	cin >> name;
}

int player::getChoice() const
{
	return choice;
}

int player::getPoints() const
{
	return points;
}

std::string player::getName() const
{
	return name;
}

