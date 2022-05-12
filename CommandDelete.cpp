#include "CommandDelete.h"

void CommandDelete::setboard(Board mboard) {
	this->mboard = mboard;
}

Board CommandDelete::getboard() {
	return mboard;
}

/*void CommandDelete::undo(int x, int y, int value) {
	mboard.fillCell(x, y, value);
}

void CommandDelete::execute(int x, int y) {
	mboard.deleteCell(x, y);
}*/
