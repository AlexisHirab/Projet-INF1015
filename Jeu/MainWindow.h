#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Board.h"
#include <QGridLayout>
#include <QWidget>
#include <QLabel>

//Vue

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

    MainWindow(QWidget* parent = nullptr);

private:
    QWidget* widget;
    QGridLayout* layout;
    QLabel* tile;
    ChessBoard* chessBoard;

    /*ChessBoard* chessBoard;
    Player* playerBlack;
    Player* playerWhite;*/
    
};
#endif // MAINWINDOW_H