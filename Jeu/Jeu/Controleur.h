#include <QObject>
#include "MainWindow.h"

using Modele::ChessBoard;
using Vue::MainWindow;

class Controleur : QObject {
	Q_OBJECT

public:
	Controleur(ChessBoard* board, MainWindow* ui);
	~Controleur();
private:

	ChessBoard* board_;
	MainWindow* ui_;

};