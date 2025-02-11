#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QRegularExpression>

double calcVal=0.0;
double MemoryVal=0.0;
bool divTrigger=false;
bool multTrigger=false;
bool addTrigger=false;
bool subTrigger=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for(int i=0;i<10;i++){
        QString butName="Button"+QString::number(i);
        numButtons[i]=MainWindow::findChild<QPushButton *>(butName);
        connect(numButtons[i],SIGNAL(released()),this,SLOT(NumPressed()));
    }
    connect(ui->Add,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Subtract,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Multiply,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Divide,SIGNAL(released()),this,SLOT(MathButtonPressed()));
    connect(ui->Equals,SIGNAL(released()),this,SLOT(EqualButton()));
    connect(ui->ChangeSign,SIGNAL(released()),this,SLOT(ChangeNumberSign()));
    connect(ui->MemAdd,SIGNAL(released()),this,SLOT(Memory()));
    connect(ui->MemGet,SIGNAL(released()),this,SLOT(MemoryCall()));
    connect(ui->MemClear,SIGNAL(released()),this,SLOT(MemoryClear()));
    connect(ui->Clear,SIGNAL(released()),this,SLOT(Clear()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::NumPressed(){
    QPushButton *button=(QPushButton *)sender();
    QString butVal=button->text();
    QString displayVal=ui->Display->text();
    if((displayVal.toDouble()==0)||(displayVal.toDouble()==0.0)){
        ui->Display->setText(butVal);
    }
    else{
        QString newVal=displayVal+butVal;
        double dblNewVal=newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal,'g',16));
    }
}

void MainWindow::MathButtonPressed(){
    divTrigger=false;
    multTrigger=false;
    addTrigger=false;
    subTrigger=false;
    QString displayVal=ui->Display->text();
    calcVal=displayVal.toDouble();
    QPushButton *button=(QPushButton *)sender();
    QString butVal=button->text();
    if(QString::compare(butVal,"/",Qt::CaseInsensitive)==0){
        divTrigger=true;
    }
    else if(QString::compare(butVal,"*",Qt::CaseInsensitive)==0){
        multTrigger=true;
    }
    else if(QString::compare(butVal,"+",Qt::CaseInsensitive)==0){
        addTrigger=true;
    }
    else if(QString::compare(butVal,"-",Qt::CaseInsensitive)==0){
        subTrigger=true;
    }
    ui->Display->setText("");
}

void MainWindow::EqualButton(){
    double solution=0.0;
    QString displayVal=ui->Display->text();
    double dblDisplayVal=displayVal.toDouble();
    if(addTrigger||subTrigger||multTrigger||divTrigger){
        if(addTrigger){
            solution=calcVal+dblDisplayVal;
        }
        else if(subTrigger){
            solution=calcVal-dblDisplayVal;
        }
        if(multTrigger){
            solution=calcVal*dblDisplayVal;
        }
        if(divTrigger){
            solution=calcVal/dblDisplayVal;
        }
    }
    ui->Display->setText(QString::number(solution));
}

void MainWindow::ChangeNumberSign() {
    QString displayVal = ui->Display->text();
    QRegularExpression reg(R"([-]?[0-9.]+)");

    QRegularExpressionMatch match = reg.match(displayVal);
    if (match.hasMatch()) {
        double dblDisplayVal = displayVal.toDouble();
        double dblDisplayValSign = -1 * dblDisplayVal;
        ui->Display->setText(QString::number(dblDisplayValSign));
    }
}

void MainWindow::Memory()
{
    QString displayVal = ui->Display->text();
    MemoryVal = displayVal.toDouble();
    ui->Display->setText("");

}

void MainWindow::MemoryCall()
{
    ui->Display->setText(QString::number(MemoryVal));

}

void MainWindow::MemoryClear()
{
    MemoryVal = 0.0;
}

void MainWindow::Clear()
{
    ui->Display->setText("");
}

