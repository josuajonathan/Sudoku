#include "Player.h"

Player::Player() {
	username = "Player 1";
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
