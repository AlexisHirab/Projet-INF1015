#include "Controleur.h"

Controleur::Controleur(ChessBoard* board, MainWindow* ui) {
	board_ = board;
	ui_ = ui;
}

Controleur::~Controleur() {
	delete board_;
	delete ui_;
}


