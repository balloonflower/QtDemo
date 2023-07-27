#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QPushButton * btns = new QPushButton("第一个按钮",this);//缺点：窗口变小。this:指向父类的指针
    resize(600,400);//重新定义窗口的大小，但鼠标拖动会改变大小
    setFixedSize(600,400);//设置窗口固定大小
    btns->move(100,100);//移动按钮位置
    //设置窗口标题:
    setWindowTitle("第一个窗口");
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

