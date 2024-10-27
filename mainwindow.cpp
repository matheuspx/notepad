#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QFontDialog>
#include <QFont>
#include <QColorDialog>
#include <QColor>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionnovo_triggered()
{
    local_arquivo = "";
    ui->textEdit->clear();
    ui->textEdit->setFocus();
}

void MainWindow::on_actionAbrir_triggered()
{
    QString filtro = "Todos os Arquivos (*.*) ;; Arquivos de texto (*.txt)";
    QString nome_arquivo = QFileDialog::getOpenFileName(this, "Abrir", QDir::homePath(), filtro);
    QFile arquivo(nome_arquivo);
    local_arquivo = nome_arquivo;
    if (nome_arquivo.isEmpty()) {
        return;
    }
    if (!arquivo.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, "", "Tipo de arquivo não suportado");
        return;
    }
    QTextStream entrada(&arquivo);
    QString texto = entrada.readAll();
    ui->textEdit->setText(texto);
    arquivo.close();
}

void MainWindow::on_actionSalvar_triggered()
{
    QString filtro = "Todos Arquivos (*.*) ;; Arquivos de texto (*.txt)";
    QString nome_arquivo = QFileDialog::getSaveFileName(this, "Salvar como", QDir::homePath(), filtro);

    // Verifique se o nome do arquivo não está vazio
    if (nome_arquivo.isEmpty()) {
        return;
    }

    // Aqui, usamos QFile para abrir e salvar o arquivo
    QFile arquivo(nome_arquivo);
    if (!arquivo.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this, "", "Arquivo não pode ser salvo");
        return;
    }

    QTextStream saida(&arquivo);
    QString texto = ui->textEdit->toPlainText();
    saida << texto;

    arquivo.flush();
    arquivo.close();
}

void MainWindow::on_actionfechar_triggered()
{
    close();
}

void MainWindow::on_actionRecortar_triggered()
{
    ui->textEdit->cut();
}


void MainWindow::on_actionColar_triggered()
{
    ui->textEdit->paste();
}

void MainWindow::on_actiondesfazer_triggered()
{
    ui->textEdit->undo();
}


void MainWindow::on_actionrefazer_triggered()
{
    ui->textEdit->redo();
}


void MainWindow::on_actionFonte_triggered()
{
    bool fonte_ok;
        QFont fonte=QFontDialog::getFont(&fonte_ok,this);
    if(fonte_ok){
            ui->textEdit->setFont(fonte);
    }else
        return;
    }

void MainWindow::on_actionConhe_a_o_autor_triggered()
{
    QUrl url("https://github.com/matheuspx/notepad");

    QDesktopServices::openUrl(url);
}

