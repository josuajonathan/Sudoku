#include "Player.h"

Player::Player() {
	username = " ";
	score = 0;
}

void Player::setusername(string username)
{
	this->username = username;
}

string Player::getusername()
{
	return username;
}

int Player::getscore()
{
	return score;
}
