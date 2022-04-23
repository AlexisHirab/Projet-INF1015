#include <QWidget>
#include <QApplication>
#include <QLabel>
#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLayoutItem>
#include <QWidgetItem>
#include <memory>
#include <iostream>
#include "MainWindow.h"


int main(int argc, char *argv[])
{
    using Vue::MainWindow;

    QApplication a(argc, argv);

    MainWindow* w = new MainWindow();
    w->show();
    return a.exec();
}
