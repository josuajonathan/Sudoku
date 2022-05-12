#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
protected:
	string username;
	int score;

public:
	Player();
	void setusername(string);
	string getusername();
	int getscore();
};
