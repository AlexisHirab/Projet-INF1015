#include "ChessBoard.h"
#include <QPainter>

ChessBoard::ChessBoard(QWidget* parent)
    : QWidget{ parent }
{

}

void ChessBoard::createBoard(QPaintEvent* event) {
    QGraphicsRectItem* chessboard = scene.addRect(QRectF(0, 0, 640, 640));
    int x = 0, y = -80;
    for (int i = 0; i < 8; i++) {
        y += 80;
        for (int j = 0; j < 8; j++) {
            if (x - y != 0) {
                QGraphicsRectItem* square = scene.addRect(QRectF(x, y, 80, 80), QPen(Qt::black), QBrush(Qt::gray));
                x += 80;
                if (x == 640) {
                    x = 0;
                }
            }
            if (y - x == 160) {
                QGraphicsRectItem* square = scene.addRect(QRectF(x, y, 80, 80), QPen(Qt::black), QBrush(Qt::white));
                x += 80;
                if (x == 640) {
                    x = 0;
                }
            }

            else {
                QGraphicsRectItem* square = scene.addRect(QRectF(x, y, 80, 80), QPen(Qt::black), QBrush(Qt::white));
                x += 80;
                if (x == 640) {
                    x = 0;
                }
            }
        }
}