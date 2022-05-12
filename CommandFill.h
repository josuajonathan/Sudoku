#pragma once
#include "Command.h"
#include "Board.h"

class CommandFill : public Command
{
private:
	Board mboard;

public :
	void setboard(Board);
	Board getboard();
	void undo(int x, int y, int value);
	void execute(int x, int y);
};
