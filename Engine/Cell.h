#pragma once
#include "Vei2.h"
#include "Colors.h"
#include "Graphics.h"
class Cell
{

private:

	RectI rect;
	int size;
	Color c;
public:
	void Draw(Graphics& gfx);
	Cell();
	Cell(const Vei2& _pos,int _size, Color _c);
	~Cell();
};

