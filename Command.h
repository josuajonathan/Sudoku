#pragma once
//Class Interface

class Command
{
public:
	virtual void undo() = 0;
	virtual void execute() = 0;
};
