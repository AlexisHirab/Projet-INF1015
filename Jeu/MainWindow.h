#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Board.h"
#include <QGridLayout>
#include <QWidget>



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);

    //void addPiece(std::shared_ptr<Piece> piece);

private:
    QWidget* widget;
    QGridLayout* layout; 
    ChessBoard* chessBoard;
    
};
#endif // MAINWINDOW_H