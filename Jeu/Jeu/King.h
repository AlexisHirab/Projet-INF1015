#pragma once
#include "Piece.h"

class King : public Piece {

public:
	King(int x, int y);
	~King();
	static int getCompteur();
	virtual void move(Position position);
private:
	static int compteur_;
};