#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLayoutItem>
#include <QWidgetItem>
#include "MainWindow.h"
//#include "Piece.h" 

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        
    MainWindow* w = new MainWindow();
 /*   Piece
    w->addPiece()*/

    w->show();
    return a.exec();
}
