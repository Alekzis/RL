#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    double x[7];//X's column
    double y[7];//Y's column

private:
    Ui::MainWindow *ui;

   public slots:
    void ejecutar();//declarates execute slot
    void borrar();//declaraes clean slot
};

#endif // MAINWINDOW_H
