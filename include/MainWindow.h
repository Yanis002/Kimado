#ifndef _MAINWINDOW_H
#define _MAINWINDOW_H

#include "UiMainWindow.h"
#include <QMainWindow>

#define CONNECT(sender, action, callback) QObject::connect(sender, SIGNAL(action), SLOT(callback))

using namespace std;

class MainWindow : public QMainWindow {
    Q_OBJECT

  public:
    explicit MainWindow(QWidget* parent = nullptr);
    ~MainWindow();

  private slots:
    void onOpenActorFileClicked();

  private:
    Ui::MainWindow* ui;
    void setupConnections();
};

#endif
