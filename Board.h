#pragma once
#include <iostream>
using namespace std;

class Board
{
private:
	int Papan[9][9];

public:
	Board();
	void generatenum();
	void cekregion();
	bool cekrow();
	void cekcolumn();
	void fill(int, int, int);
	void hapus(int, int);
};
