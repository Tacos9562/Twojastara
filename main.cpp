#include "Game.h"

using std::cout; //pozwala na nie pisanie std:: 
using std::endl;

int main()
{
	cout << "=====WITAJ W GRZE KAMIEN PAPIER NOZYCE=====" << endl;
	Game s;       //symulacja
	s.play();	  //wywo³anie symulacji
	return 0;
}