#pragma once
#include<iostream>
#include<string>

using std::string;

class player
{
protected:
	int choice;
	string name;
	int points;
public:
	player();

	void makemove(); //METODA
	void addPoints(); //points ++

	int getChoice() const; //AKCESOR
	int getPoints() const; 

	string getName() const;

	void setName();
};