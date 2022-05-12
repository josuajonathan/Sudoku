#pragma once
#include "Command.h"
#include "Board.h"

//Subclass
class CommandDelete : public Command
{
private:
	Board mboard;

public:
	void setboard(Board);
	Board getboard();
	void undo(int, int, int);
	void execute(int, int);
};
