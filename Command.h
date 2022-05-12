#pragma once
//Class Interface

class Command
{
public :
	virtual void undo(int, int, int) = 0;
	virtual void execute(int, int) = 0;
};
