#pragma once
#include "Cell.h"
#include "Graphics.h"
class Board
{
	
private:
	int width;
	int height;
	int cellSize;
	int cellCount;
public:
	
	Cell* cellArray;
	void Draw(Graphics& gfx);
	Board(int width, int height, int size);
	~Board();
};

