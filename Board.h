#pragma once
class Board
{
private:
	int board[9][9];

public:
	void generatenum();
	void cekregion();
	void cekrow();
	void cekcolumn();
	void fill(int x, int y, int value);
	void hapus(int x, int y);
};

