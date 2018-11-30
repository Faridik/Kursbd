#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "courseswindow.h"
#include "profilewindow.h"
#include "loginwindow.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    coursesWindow *courses;
    profileWindow *profile;
    loginWindow *login;
public slots:
    void openCoursesWindow();
    void openProfile();
    void openLoginWindow();
    void backFromLogin();
    void backFromCourses();
    void backFromProfile();
};

#endif // MAINWINDOW_H
