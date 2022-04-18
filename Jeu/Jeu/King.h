#include "Piece.h"

class King : public Piece {

public:
	King(int x, int y);
	~King();
	static int getCompteur();
	//void move() override;
private:
	static int compteur_;
};