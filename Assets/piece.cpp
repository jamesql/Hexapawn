// Piece Asset

#include "assets.h"

namespace Assets 
{

	Move* Piece::getMoves()
	{
		return nullptr;
	}

	Move Piece::movePiece(int newX, int newY)
	{
		Move* p = nullptr;
		Move m = *p;
		return m;
	}

	Piece::Piece(Team t, int x, int y)
	{
		Piece::tm = t;
		Piece::posX = x;
		Piece::posY = y;
	}

}
