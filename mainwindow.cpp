#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->coursesButton->setIconSize(QSize(200,130));
    ui->coursesButton->setIcon(QIcon("C:\\For Farid\\123.png"));
    connect(ui->coursesButton, SIGNAL(pressed()),this, SLOT(openCoursesWindow()));
    connect(ui->loginButton, SIGNAL(pressed()),this, SLOT(openLoginWindow()));
    connect(ui->profileButton, SIGNAL(pressed()),this, SLOT(openProfile()));
    connect(ui->signinButton, SIGNAL(pressed()),this, SLOT(openSigninWindow()));  
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

void MainWindow::openSigninWindow()
{
    signin = new signinWindow();
    connect(signin, SIGNAL(back()),this,SLOT(backFromSignin()));
    signin->show();
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

void MainWindow::backFromSignin()
{
    this->setEnabled(true);
    signin->hide();
    delete signin;
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
    if (signin) delete signin;
    delete ui;
}
