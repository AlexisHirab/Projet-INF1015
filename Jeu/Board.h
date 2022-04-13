#include <QGridLayout>
#include <memory>
#include "Piece.h"

class ChessBoard 
{
	
public:
	ChessBoard() = default;

	void addPiece(std::shared_ptr<Piece> piece);

	std::shared_ptr<Piece> chessBoard[8][8];
};