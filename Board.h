#pragma once
#include <iostream>
using namespace std;

class Board
{
private:
	int board[9][9];

public:
	void generatenum();
	void cekregion();
	void cekrow();
	void cekcolumn();
	void fillCell(int, int, int);
	void deleteCell(int, int);
};

