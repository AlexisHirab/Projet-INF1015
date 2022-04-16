#include <QObject>
#include "MainWindow.h"
#include "Board.h"

class Controlleur : QObject {
	Q_OBJECT

public:

private:

	ChessBoard* board_;
	MainWindow* ui_;

};