#include <QGridLayout>
#include <memory>
#include "Player.h"
//Modele

class ChessBoard 
{
public:
	ChessBoard();

	void placerPiece();

//private:
	std::shared_ptr<Piece> chessBoard[8][8];
	Player* playerWhite;
	Player* playerBlack;
};