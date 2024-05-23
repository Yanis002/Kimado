#include "MainWindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    this->setupConnections();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::setupConnections() { CONNECT(ui->openActorFileBtn, clicked(), onOpenActorFileClicked()); }

void MainWindow::onOpenActorFileClicked() { cout << "hello world" << endl; }
