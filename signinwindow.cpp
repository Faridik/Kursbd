#include "signinwindow.h"
#include "ui_signinwindow.h"

signinWindow::signinWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::signinWindow)
{
    ui->setupUi(this);
    connect(ui->MainButton,SIGNAL(pressed()),this,SLOT(backToMain()));
    connect(ui->signinButton,SIGNAL(pressed()),this,SLOT(toSave()));
}

void signinWindow::backToMain()
{
    emit back();
}

void signinWindow::toSave()
{
    emit save();
}

signinWindow::~signinWindow()
{
    delete ui;
}
