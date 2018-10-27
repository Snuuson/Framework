#include "Board.h"




void Board::Draw(Graphics& gfx)
{
	for (int i = 0; i < cellCount; i++) {
		cellArray[i].Draw(gfx);
	}
}

Board::Board(int width, int height, int size)
	:
	width(width),
	height(height),
	cellSize(size),
	cellCount((width / size) * (height / size)),
	cellArray(new Cell[cellCount])
{
	for (int i = 0; i < cellCount; i++) {
		int column = i%(width/size);
		int row = i/ (width / size);
		Cell tmp = Cell(Vei2(column, row), size, Colors::Cyan);
		cellArray[i] = tmp;
	}
}

Board::~Board()
{
}
