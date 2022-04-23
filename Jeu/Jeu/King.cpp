#include "King.h"
#include <iostream>

int King::compteur_ = 0;

King::King(int x, int y) {
	this->setType("K");
	this->setPos(x, y);
	compteur_++;

	if (compteur_ == 3) {
		throw(TooManyKingsException());
	}
}

King::~King() {
	compteur_--;
}

int King::getCompteur() { return compteur_; }