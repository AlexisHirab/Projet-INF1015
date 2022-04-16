#include "Position.h"
#include <string>
class Piece
{	
public:
	Piece(int x, int y, std::string type);
	Position getPos() const { return tilePos; };
	Position tilePos;
	std::string type;
};