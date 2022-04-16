#include "MainWindow.h"
#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QDebug>
#include <QString>
MainWindow::MainWindow(QWidget* parent)
{

    setWindowTitle("Chess Game");
    
    //creation du board
    setFixedSize(1500, 1500);
    widget = new QWidget();
    layout = new QGridLayout();
    layout->setSpacing(0);

    chessBoard = new ChessBoard();

    chessBoard->placerPiece();

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0) {
                tile = new QLabel();
                tile->setStyleSheet("QLabel { background-color : gray }");
                layout->addWidget(tile, i, j);
                
            }
            else {
                tile = new QLabel();
                tile->setStyleSheet("QLabel { background-color : blue }");
                layout->addWidget(tile, i, j);
            } 
            if (chessBoard->chessBoard[i][j]) {
                QString qstr = QString::fromStdString(chessBoard->chessBoard[0][1]->type);
                tile->setText(qstr);
            }
        }
    }
   /* if ()
    QString qstr = QString::fromStdString(chessBoard->chessBoard[0][1]->type);
    tile->setText(qstr);*/

    widget->setLayout(layout);
    setCentralWidget(widget);
}

