/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"
#include <chrono>

Game::Game(MainWindow& wnd)
	:
	wnd(wnd),
	gfx(wnd),
	cell(Cell(Vei2(1, 3), 10, Colors::Red)),
	board(Board(gfx.ScreenWidth,gfx.ScreenHeight,10)),
	ft(FrameTimer())
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	UpdateModel();
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()
{
	timer += ft.Mark();
	//std::wstringstream s;
	//s << L"Timer is " << timer;
	//std::wstring ws = s.str();
	//LPCWSTR lpcwstr = ws.c_str();
	//OutputDebugString(lpcwstr);
	if (timer > 0.05) {
		
		timer = 0;
		cell.Move(gfx.ScreenWidth,gfx.ScreenHeight);
	}
		
		
	
}

void Game::ComposeFrame()
{
	
	board.Draw(gfx);
	cell.Draw(gfx);
}
