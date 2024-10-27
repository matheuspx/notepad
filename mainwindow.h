#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDesktopServices>
#include <QUrl>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_actionnovo_triggered();

    void on_actionAbrir_triggered();

    void on_actionSalvar_triggered();

    //void on_actionConhe_a_o_projeto_triggered();

    void on_actionfechar_triggered();

    void on_actionRecortar_triggered();

    void on_actionColar_triggered();

    void on_actiondesfazer_triggered();

    void on_actionrefazer_triggered();

    void on_actionFonte_triggered();


    void on_actionConhe_a_o_autor_triggered();

private:
    Ui::MainWindow *ui;
    QString local_arquivo;
};
#endif // MAINWINDOW_H
