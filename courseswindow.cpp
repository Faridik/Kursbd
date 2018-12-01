#include "courseswindow.h"
#include "ui_courseswindow.h"

coursesWindow::coursesWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::coursesWindow)
{
    ui->setupUi(this);
    connect(ui->backButton,SIGNAL(pressed()),this,SLOT(backToMain()));
}

void coursesWindow::backToMain()
{
    emit back();
}

coursesWindow::~coursesWindow()
{
    delete ui;
}
