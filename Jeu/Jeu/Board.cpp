#include "Board.h"
#include <QGraphicsScene>
#include <QGridLayout>

using Modele::ChessBoard;
std::shared_ptr<Piece> ChessBoard::chessBoard[8][8] = { nullptr };

ChessBoard::ChessBoard() {
	
	playerWhite = new Player(true);
	playerBlack = new Player(false);
}

void ChessBoard::placerPiece() 
{
	for (auto piece : playerWhite->pieces_) {
		chessBoard[piece->getPos().posX][piece->getPos().posY] = piece;
	}
	for (auto piece : playerBlack->pieces_) {
		chessBoard[piece->getPos().posX][piece->getPos().posY] = piece;
	}
	
}