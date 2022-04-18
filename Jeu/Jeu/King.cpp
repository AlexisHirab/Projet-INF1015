#include "King.h"

int King::compteur_ = 0;

King::King(int x, int y) {
	this->setType("K");
	this->setPos(x, y);
	compteur_++;
}

King::~King() {
	compteur_--;
}

int King::getCompteur() { return compteur_; }