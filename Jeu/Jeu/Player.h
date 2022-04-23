#pragma once
#include "King.h"
#include <QMessageBox>
#include <string.h>
#include <memory>

class Player {
public:
	Player(bool white);
	std::shared_ptr<Piece> pieces_[1];
};