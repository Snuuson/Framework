#pragma once
#include "Vei2.h"
#include "Colors.h"
#include "Graphics.h"
class Cell
{

private:
	enum Status {
		food = 1,
		poison = 2,
		normalCell = 3
	};
	RectI rect;
	int size;
	Color c;
	Vei2 vel = {-1,0};
	Vei2 pos;
	Status stat = Status::normalCell;
public:
	void Draw(Graphics& gfx);
	void Move(int width, int height);
	void ChangeColor(Color c);
	Cell::Status getStatus();
	Cell();
	Cell(const Vei2& _pos,int _size, Color _c);
	~Cell();
};

