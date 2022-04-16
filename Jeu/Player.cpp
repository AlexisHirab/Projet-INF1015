#include "Player.h"

Player::Player(bool white) {
	if (white) {
		std::shared_ptr<Piece> piece1 = std::make_shared<Piece>(0, 1, "PB");
		std::shared_ptr<Piece> piece2 = std::make_shared<Piece>(2, 1, "PB");
		std::shared_ptr<Piece> piece3 = std::make_shared<Piece>(3, 1, "PB");
		pieces_[0] = piece1;
		pieces_[1] = piece2;
		pieces_[2] = piece3;
	}
	else {
		std::shared_ptr<Piece> piece1 = std::make_shared<Piece>(1, 7, "PN");
		std::shared_ptr<Piece> piece2 = std::make_shared<Piece>(2, 7, "PN");
		std::shared_ptr<Piece> piece3 = std::make_shared<Piece>(3, 7, "PN");
		pieces_[0] = piece1;
		pieces_[1] = piece2;
		pieces_[2] = piece3;
	}
}
