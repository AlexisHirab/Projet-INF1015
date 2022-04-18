#include "King.h"
//#include "Piece.h"
#include <string.h>
#include <memory>
class Player {
public:
	Player(bool white);
	std::shared_ptr<Piece> pieces_[1];
};