/********************************************************************************
** Form generated from reading UI file 'Jeu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JEU_H
#define UI_JEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_JeuClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *JeuClass)
    {
        if (JeuClass->objectName().isEmpty())
            JeuClass->setObjectName(QString::fromUtf8("JeuClass"));
        JeuClass->resize(600, 400);
        menuBar = new QMenuBar(JeuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        JeuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(JeuClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        JeuClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(JeuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        JeuClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(JeuClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        JeuClass->setStatusBar(statusBar);

        retranslateUi(JeuClass);

        QMetaObject::connectSlotsByName(JeuClass);
    } // setupUi

    void retranslateUi(QMainWindow *JeuClass)
    {
        JeuClass->setWindowTitle(QCoreApplication::translate("JeuClass", "Jeu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JeuClass: public Ui_JeuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JEU_H
