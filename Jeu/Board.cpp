#include "Board.h"
#include <QGraphicsScene>
#include <QGridLayout>

void ChessBoard::addPiece(std::shared_ptr<Piece> piece) 
{
	chessBoard[piece->tilePos.posX][piece->tilePos.posY] = piece;
}