#include "Board.h"
#include <vector>




void Board::Draw(Graphics& gfx)
{
	for (int i = 0; i < cellCount; i++) {
		for (int j = 0; j < 2; j++) {
			cellArray[i][j].Draw(gfx);
		}
	}
}

void Board::MoveCells()
{
	for (int i = 0; i < cellCount; i++) {
		for (int j = 1; j < 2; j++) {
			cellArray[i][j].ChangeColor(Colors::Red);
			cellArray[i][j].Move(width, height);
		}
	}
	
	
}

Board::Board(int width, int height, int size)
	:
	width(width),
	height(height),
	cellSize(size),
	cellCount((width / size) * (height / size)),
	cellArray(new Cell*[cellCount])
{
	for (int i = 0; i < cellCount; i++) {
		cellArray[i] = new Cell[10];
	}
	
	
	for (int i = 0; i < cellCount; i++) {
		int column = i%(width/size);
		int row = i/ (width / size);
		cellArray[i][0] = Cell(Vei2(column, row), size, Colors::Cyan);
	}
}

Board::~Board()
{
}
