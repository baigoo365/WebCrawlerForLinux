#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "user.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_Quit_clicked();

    void on_lineEdit_returnPressed();

    void on_Search_clicked();

    void on_lineEdit_textEdited(const QString &arg1);

private:
    Ui::MainWindow *ui;
    std::string s;
};

#endif // MAINWINDOW_H
