#pragma once
#include "Command.h"
#include "CommandDelete.h"
#include "CommandFill.h"
#include <stack>
using namespace std;

class Invoker
{
private:
	stack <Command* > Commands;

public:
	Invoker();

	void pushCommand(Command* command);
	void popCommand();
};
