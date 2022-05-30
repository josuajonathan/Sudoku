#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
	string username;
	int score;

public :
	void setusername(string);
	string getusername();
	
	//void setscore(int);
	//int getscore();
};

