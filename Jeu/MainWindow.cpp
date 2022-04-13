#include "MainWindow.h"
#include <QWidget>
#include <QMainWindow>
#include <QLabel>
#include <QGridLayout>
#include <QDebug>

MainWindow::MainWindow(QWidget* parent)
{

    setWindowTitle("Chess Game");
    
    //creation du board
    setFixedSize(1500, 1500);
    widget = new QWidget();
    layout = new QGridLayout();
    layout->setSpacing(0);


    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if ((i + j) % 2 == 0) {
                QLabel* labelgris = new QLabel();
                labelgris->setStyleSheet("QLabel { background-color : gray }");
                layout->addWidget(labelgris, i, j);
                /*if (chessBoard->chessBoard[i][j] = nullptr) {
                    labelgris->setText("pion");
                }*/

            }
            else {
                QLabel* labelblue = new QLabel();
                labelblue->setStyleSheet("QLabel { background-color : blue }");
                layout->addWidget(labelblue, i, j);
            }
        }
    }
    
    widget->setLayout(layout);
    setCentralWidget(widget);
     

}

