#include "loginwindow.h"
#include "ui_loginwindow.h"

loginWindow::loginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::loginWindow)
{
    ui->setupUi(this);
    connect(ui->backButton,SIGNAL(pressed()),this,SLOT(backToMain()));
}

void loginWindow::backToMain()
{
    emit back();
}

loginWindow::~loginWindow()
{
    delete ui;
}
