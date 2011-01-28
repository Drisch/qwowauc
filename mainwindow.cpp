#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QPushButton>
#include <QtGui/QApplication>
#include <QObject>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::on_exitButton_clicked()
{
    ui->exitButton->connect(ui->exitButton, SIGNAL(clicked()), qApp, SLOT(quit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
