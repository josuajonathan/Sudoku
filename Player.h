#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
	string username;

public:
	Player();
	void setusername(string);
	string getusername();
	void getscore();
};

