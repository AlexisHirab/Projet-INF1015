#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Board.h"
#include <QGridLayout>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QMouseEvent>

namespace Vue {

    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:

        MainWindow(QWidget* parent = nullptr);

    signals:

        void buttonPressed();

    public slots:
        void changecolor();
        void mousePressEvent(QMouseEvent* ev);

    private:
        QWidget* widget;
        QGridLayout* layout;
        QPushButton* tile;
        Modele::ChessBoard* chessBoard;

    };
}
#endif // MAINWINDOW_H
