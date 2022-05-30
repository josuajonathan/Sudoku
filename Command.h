#pragma once
//class interface

class Command
{
public:
	virtual void undo() = 0;
	virtual void execute() = 0;
};
