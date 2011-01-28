#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->exit->connect(exit, SIGNAL(triggered()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_exitButton_clicked()
{
    ui->exitButton->connect(exit, SIGNAL(clicked()), qApp, SLOT(quit()));
}
