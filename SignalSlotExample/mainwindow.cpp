#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_click);
}

void MainWindow::on_pushButton_click() {
    ui->label->setText("Button was clicked");
}

MainWindow::~MainWindow()
{
    delete ui;
}
