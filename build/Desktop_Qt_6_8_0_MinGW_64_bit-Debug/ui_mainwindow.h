/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionnovo;
    QAction *actionAbrir;
    QAction *actionSalvar;
    QAction *actionSalvar_Como;
    QAction *actionfechar;
    QAction *actionCopiar;
    QAction *actionRecortar;
    QAction *actionCoalr;
    QAction *actiondesfazer;
    QAction *actionrefazer;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuArquivo;
    QMenu *menuEditamento;
    QMenu *menuSobre;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        actionnovo = new QAction(MainWindow);
        actionnovo->setObjectName("actionnovo");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icones/icones/botao-adicionar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionnovo->setIcon(icon);
        actionAbrir = new QAction(MainWindow);
        actionAbrir->setObjectName("actionAbrir");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icones/icones/pasta.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionAbrir->setIcon(icon1);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName("actionSalvar");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icones/icones/salve-.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionSalvar->setIcon(icon2);
        actionSalvar_Como = new QAction(MainWindow);
        actionSalvar_Como->setObjectName("actionSalvar_Como");
        actionfechar = new QAction(MainWindow);
        actionfechar->setObjectName("actionfechar");
        actionCopiar = new QAction(MainWindow);
        actionCopiar->setObjectName("actionCopiar");
        actionRecortar = new QAction(MainWindow);
        actionRecortar->setObjectName("actionRecortar");
        actionCoalr = new QAction(MainWindow);
        actionCoalr->setObjectName("actionCoalr");
        actiondesfazer = new QAction(MainWindow);
        actiondesfazer->setObjectName("actiondesfazer");
        actionrefazer = new QAction(MainWindow);
        actionrefazer->setObjectName("actionrefazer");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 801, 481));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuArquivo = new QMenu(menubar);
        menuArquivo->setObjectName("menuArquivo");
        menuEditamento = new QMenu(menubar);
        menuEditamento->setObjectName("menuEditamento");
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName("menuSobre");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuArquivo->menuAction());
        menubar->addAction(menuEditamento->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArquivo->addAction(actionnovo);
        menuArquivo->addAction(actionAbrir);
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionSalvar_Como);
        menuArquivo->addAction(actionfechar);
        menuEditamento->addAction(actiondesfazer);
        menuEditamento->addAction(actionCopiar);
        menuEditamento->addAction(actionRecortar);
        menuEditamento->addAction(actionCoalr);
        menuEditamento->addAction(actionrefazer);
        toolBar->addSeparator();
        toolBar->addAction(actionnovo);
        toolBar->addAction(actionAbrir);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionnovo->setText(QCoreApplication::translate("MainWindow", "Novo", nullptr));
        actionAbrir->setText(QCoreApplication::translate("MainWindow", "Abrir", nullptr));
        actionSalvar->setText(QCoreApplication::translate("MainWindow", "Salvar", nullptr));
        actionSalvar_Como->setText(QCoreApplication::translate("MainWindow", "Salvar Como", nullptr));
        actionfechar->setText(QCoreApplication::translate("MainWindow", "fechar", nullptr));
        actionCopiar->setText(QCoreApplication::translate("MainWindow", "Copiar", nullptr));
        actionRecortar->setText(QCoreApplication::translate("MainWindow", "Recortar", nullptr));
        actionCoalr->setText(QCoreApplication::translate("MainWindow", "Colar", nullptr));
        actiondesfazer->setText(QCoreApplication::translate("MainWindow", "Desfazer", nullptr));
        actionrefazer->setText(QCoreApplication::translate("MainWindow", "Refazer", nullptr));
        menuArquivo->setTitle(QCoreApplication::translate("MainWindow", "Arquivo", nullptr));
        menuEditamento->setTitle(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        menuSobre->setTitle(QCoreApplication::translate("MainWindow", "Sobre", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
