#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Set the background image
    //setStyleSheet("QMainWindow{background-image:url(background.jpg)}");

}
MainWindow::~MainWindow()
{
    delete ui;
}
