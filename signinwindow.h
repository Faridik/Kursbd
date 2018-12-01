#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QMainWindow>

namespace Ui {
class signinWindow;
}

class signinWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit signinWindow(QWidget *parent = 0);
    ~signinWindow();

private:
    Ui::signinWindow *ui;

signals:
    back();
    save();
public slots:
    void backToMain();
    void toSave();
};

#endif // SIGNINWINDOW_H
