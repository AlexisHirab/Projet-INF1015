#include "King.h"
#include <iostream>
#include "Board.h"

using Modele::ChessBoard;

int King::compteur_ = 0;

King::King(int x, int y) {
	this->setType("K");
	this->setPos(x, y);
	compteur_++;

	if (compteur_ == 3) {
		throw(TooManyKingsException());
	}
}

King::~King() {
	compteur_--;
	ChessBoard::chessBoard[getPos().posX][getPos().posY] = nullptr;
}

int King::getCompteur() { return compteur_; }

void King::move(Position position)
{
	if (ChessBoard::chessBoard[position.posX][position.posY] = nullptr) {

		ChessBoard::chessBoard[getPos().posX][getPos().posY] = nullptr;
		setPos(position.posX, position.posY);
	}
	else if (ChessBoard::chessBoard[position.posX][position.posY] != nullptr
		&& ChessBoard::chessBoard[position.posX][position.posY]->getType() != getType()) {
		
		ChessBoard::chessBoard[getPos().posX][getPos().posY] = nullptr;
		setPos(position.posX, position.posY);
	}
	else if (ChessBoard::chessBoard[position.posX][position.posY] != nullptr
		&& ChessBoard::chessBoard[position.posX][position.posY]->getType() == getType()) {
		
		setPos(getPos().posX, getPos().posY);
	}
}
