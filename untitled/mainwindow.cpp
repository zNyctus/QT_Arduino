#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fase1exploracao.h"
#include <QScreen>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowState(Qt::WindowState::WindowFullScreen);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ajustarParaTamanhoDoMonitor()
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    ui->fase1Exploracao->setGeometry(screenGeometry);
}

void MainWindow::on_iniciarJogo_pushButton_clicked()
{
    ajustarParaTamanhoDoMonitor();
    Fase1Exploracao *fase1Exploracao = new Fase1Exploracao(this);
    fase1Exploracao->iniciarFase(ui->fase1Exploracao_graphicsView);

    ui->stackedWidget->setCurrentWidget(ui->fase1Exploracao);

    ui->fase1Exploracao->showFullScreen();

}

void MainWindow::on_configuracoes_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menuSom);
}

void MainWindow::on_voltar_pushButton_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->menu);
}


void MainWindow::on_sair_pushButton_clicked()
{
    close();
}

