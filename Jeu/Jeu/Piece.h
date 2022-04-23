#include "Position.h"
#include <string>
#include "TooManyKingsException.h"

class Piece
{	
public:

	Position getPos() const { return tilePos; };
	void setPos(int x, int y) { tilePos.posX = x; tilePos.posY = y; };
	std::string getType() const { return type_; };
	void setType(std::string type) { type_ = type; };
	//virtual void move();


private:
	Position tilePos;
	std::string type_;
};