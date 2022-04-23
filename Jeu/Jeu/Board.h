#pragma once
#include <QGridLayout>
#include <memory>
#include "Player.h"
//Modele
namespace Modele {

	class ChessBoard
	{
	public:
		ChessBoard();

		void placerPiece();

		//private:
		static std::shared_ptr<Piece> chessBoard[8][8];
		Player* playerWhite;
		Player* playerBlack;
	};
}