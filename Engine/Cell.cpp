#include "Cell.h"

void Cell::Draw(Graphics & gfx)
{
	gfx.DrawRect(rect.GetExpanded(-2),c);
}

Cell::Cell()
{
}

Cell::Cell(const Vei2 & _pos, int _size, Color _c)
	:
	rect(RectI(_pos * _size,_size, _size)),
	c(_c),
	size(_size)
{
}

Cell::~Cell()
{
}
