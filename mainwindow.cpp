#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->coursesButton, SIGNAL(pressed()),this, SLOT(openCoursesWindow()));
    connect(ui->loginButton, SIGNAL(pressed()),this, SLOT(openLoginWindow()));
    connect(ui->profileButton, SIGNAL(pressed()),this, SLOT(openProfile()));
}

void MainWindow::openCoursesWindow()
{
    courses = new coursesWindow();
    connect(courses,SIGNAL(back()),this,SLOT(backFromCourses()));
    this->hide();
    courses->show();
}

void MainWindow::openLoginWindow()
{
    login = new loginWindow();
    connect(login, SIGNAL(back()),this,SLOT(backFromLogin()));
    login->show();
    this->setEnabled(false);
}

void MainWindow::openProfile()
{
    profile = new profileWindow();
    connect(profile,SIGNAL(back()),this,SLOT(backFromProfile()));
    this->hide();
    profile->show();
}

void MainWindow::backFromLogin()
{
    this->setEnabled(true);
    login->hide();
    delete login;
}

void MainWindow::backFromCourses()
{
    this->show();
    courses->hide();
    delete courses;
}

void MainWindow::backFromProfile()
{
    this->show();
    profile->hide();
    delete profile;
}

MainWindow::~MainWindow()
{
    if (courses) delete courses;
    if (login) delete login;
    if (profile) delete profile;
    delete ui;
}
