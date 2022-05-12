#include "CommandFill.h"

void CommandFill::setboard(Board mboard) {
	this->mboard = mboard;
}

Board CommandFill::getboard() {
	return mboard;
}

/*void CommandFill::undo(int x, int y) {
	mboard.deleteCell(x, y);
}

void CommandFill::execute(int x, int y, int value) {
	mboard.fillCell(x, y, value);
}*/
