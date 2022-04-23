#include "MainWindow.h"
#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QDebug>
#include <QString>
#include <QFont>

using Vue::MainWindow;
using Modele::ChessBoard;

MainWindow::MainWindow(QWidget* parent)
{
    

    setWindowTitle("Chess Game");
    
    //creation du board
    setFixedSize(1500, 1500);
    widget = new QWidget();
    layout = new QGridLayout();
    layout->setSpacing(0);
    
    try {
        chessBoard = new ChessBoard();
    }
    catch (TooManyKingsException& e) {
        QMessageBox msgBox;
        msgBox.setText(e.message());
        msgBox.exec();
    }

    chessBoard->placerPiece();

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0) {
                //QLabel* label = new QLabel();
                tile = new QPushButton();
                tile->setStyleSheet("QPushButton { background-color : grey }");
                tile->setFont(QFont("Times", 30));
                layout->addWidget(tile, i, j);
                //layout->addWidget(label, i, j);
            }
            else {
                //QLabel* label = new QLabel();
                tile = new QPushButton();
                tile->setStyleSheet("QPushButton { background-color : blue }");
                tile->setFont(QFont("Times", 30));
                layout->addWidget(tile, i, j);
                //layout->addWidget(label, i, j);
            } 
            if (chessBoard->chessBoard[i][j]) {
                QString qstr = QString::fromStdString(chessBoard->chessBoard[i][j]->getType());
                tile->setText(qstr);
                connect(tile, &QPushButton::clicked, this, &MainWindow::changecolor);
            }
        }
    }
 

    widget->setLayout(layout);

    setCentralWidget(widget);
}

void MainWindow::mousePressEvent(QMouseEvent* ev) {
    emit buttonPressed();
}

void MainWindow::changecolor() {
    tile->setStyleSheet("QPushButton { background-color : red }");
}