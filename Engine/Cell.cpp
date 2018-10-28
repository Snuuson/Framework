#include "Cell.h"

void Cell::Draw(Graphics & gfx)
{
	gfx.DrawRect(RectI(pos*size, size, size).GetExpanded(-2) ,c);
}

void Cell::Move(int width, int height)
{
	int columnCount = width / size;
	int rowCount = height / size;
	pos += vel;
	if (pos.x < 0) {
		pos.x = columnCount-1;
	}
	if (pos.x > columnCount-1) {
		pos.x = 0;
	}
	if (pos.y < 0) {
		pos.y = rowCount-1;
	}
	if (pos.y > rowCount-1) {
		pos.y = 0;
	}
	int i = 0;
	/*rect.left += vel.x * size ;
	rect.right += vel.x * size;
	rect.top += vel.y * size;
	rect.bottom += vel.y * size;
	if (rect.left < 0 || rect.right >= width || rect.top < 0 || rect.bottom >= height) {
		vel.x *= -1;
		vel.y *= -1;
		this->Move(width,height);
	}*/
}

void Cell::ChangeColor(Color c)
{
	this->c = c;
}

Cell::Status Cell::getStatus()
{
	return stat;
}

Cell::Cell()
{
}

Cell::Cell(const Vei2 & _pos, int _size, Color _c)
	:
	rect(RectI(_pos * _size,_size, _size)),
	c(_c),
	size(_size),
	pos(_pos)
{
}

Cell::~Cell()
{
}
