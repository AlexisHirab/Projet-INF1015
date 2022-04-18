#include "Player.h"

Player::Player(bool white) {
	if (white) {
		//King* king = new King();
		pieces_[0] = std::make_shared<King>(0, 4);
		/*pieces_[1] = std::make_shared<King>(0, 3, "Q");
		pieces_[2] = std::make_shared<Piece>(0, 2, "B");
		pieces_[3] = std::make_shared<Piece>(0, 5, "B");*/

		

	}
	else {
		pieces_[0] = std::make_shared<King>(7, 4);
	/*	std::shared_ptr<Piece> piece2 = std::make_shared<Piece>(7, 3, "Q");
		std::shared_ptr<Piece> piece3 = std::make_shared<Piece>(7, 2, "B");
		std::shared_ptr<Piece> piece4 = std::make_shared<Piece>(7, 5, "B");

		pieces_[1] = piece2;
		pieces_[2] = piece3;
		pieces_[3] = piece4;*/

	}
}
