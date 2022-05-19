#include "Board.h"

Board::Board()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			Papan[i][j] = 0;
		}
	}
}

bool Board::cekrow() {
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			for (int k = 0; k < 9; k++)
			{
				if (k < 8)
				{
					k = 0;
					if (Papan[i][j] == Papan[i][k])
					{
						return false;
					}
				}
				else
				{
					if (Papan[i][j] == Papan[i][k])
					{
						return false;
					}
				}
			}
		}
	}

	return true;
}

void Board::fill(int x, int y, int value) {
	Papan[x][y] = value;
}

void Board::hapus(int x, int y) {
	Papan[x][y] = 0;
}
