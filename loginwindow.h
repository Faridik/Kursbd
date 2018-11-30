#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>

namespace Ui {
class loginWindow;
}

class loginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit loginWindow(QWidget *parent = 0);
    ~loginWindow();

private:
    Ui::loginWindow *ui;

signals:
    back();
public slots:
    void backToMain();
};

#endif // LOGINWINDOW_H
