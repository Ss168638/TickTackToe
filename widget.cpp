#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    reset();

    //winner dialog object initialization
    winnerdialog = new Dialog();

    //create connections
    connect(winnerdialog, &Dialog::restart, this, &Widget::on_restartClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::currentplayer()
{
    if(b_currentplayer == 0)
    {
        b_currentplayer = 1;
    }
    else
    {
        b_currentplayer = 0;
    }
}

bool Widget::checkrowOne()
{
    if(box1_value == box2_value && box2_value == box3_value && box1_value == box3_value)
        return true;
    else
        return false;
}

bool Widget::checkrowTwo()
{
    if(box4_value == box5_value && box5_value == box6_value && box4_value == box6_value)
        return true;
    else
        return false;
}

bool Widget::checkrowThree()
{
    if(box7_value == box8_value && box8_value == box9_value && box7_value == box9_value)
        return true;
    else
        return false;
}

bool Widget::checkcolOne()
{
    if(box1_value == box4_value && box4_value == box7_value && box1_value == box7_value)
        return true;
    else
        return false;
}

bool Widget::checkcolTwo()
{
    if(box2_value == box5_value && box5_value == box8_value && box2_value == box8_value)
        return true;
    else
        return false;
}

bool Widget::checkcolThree()
{
    if(box3_value == box6_value && box6_value == box9_value && box3_value == box9_value)
        return true;
    else
        return false;
}

bool Widget::checkDiagonalOne()
{
    if(box1_value == box5_value && box5_value == box9_value && box1_value == box9_value)
        return true;
    else
        return false;
}

bool Widget::checkDiagonalTwo()
{
    if(box3_value == box5_value && box5_value == box7_value && box3_value == box7_value)
        return true;
    else
        return false;
}

bool Widget::checkWinner()
{
    if(checkrowOne() || checkrowTwo() || checkrowThree()
        || checkcolOne() || checkcolTwo() || checkcolThree()
        || checkDiagonalOne() || checkDiagonalTwo())
    {

        winnerdialog->winnerplayer = b_currentplayer ? "O" : "X";
        winnerdialog->on_DisplayWinner();
        winnerdialog->show();
        return true;
    }
    else
    {
        return false;
    }
}

void Widget::reset()
{

    is_box1_clicked = false;
    is_box2_clicked = false;
    is_box3_clicked = false;

    is_box4_clicked = false;
    is_box5_clicked = false;
    is_box6_clicked = false;

    is_box7_clicked = false;
    is_box8_clicked = false;
    is_box9_clicked = false;

    box1_value = 11;
    box2_value = 22;
    box3_value = 33;

    box4_value = 44;
    box5_value = 55;
    box6_value = 66;

    box7_value = 77;
    box8_value = 88;
    box9_value = 99;

    player1 = 'X';
    player2 = 'O';
    b_currentplayer = 0;    //player1 - 0 & player2 - 1

}

void Widget::on_box_1_clicked()
{
    if(is_box1_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_1->setText(player1);
        box1_value = 0;
    }
    else
    {
        ui->box_1->setText(player2);
        box1_value = 1;
    }
    is_box1_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_2_clicked()
{
    if(is_box2_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_2->setText(player1);
        box2_value = 0;
    }
    else
    {
        ui->box_2->setText(player2);
        box2_value = 1;
    }
    is_box2_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_3_clicked()
{
    if(is_box3_clicked == true)
        return;
    if(b_currentplayer == 0)
    {
        ui->box_3->setText(player1);
        box3_value = 0;
    }
    else
    {
        ui->box_3->setText(player2);
        box3_value = 1;
    }
    is_box3_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_4_clicked()
{
    if(is_box4_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_4->setText(player1);
        box4_value = 0;
    }
    else
    {
        ui->box_4->setText(player2);
        box4_value = 1;
    }
    is_box4_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_5_clicked()
{
    if(is_box5_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_5->setText(player1);
        box5_value = 0;
    }
    else
    {
        ui->box_5->setText(player2);
        box5_value = 1;
    }
    is_box5_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_6_clicked()
{
    if(is_box6_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_6->setText(player1);
        box6_value = 0;
    }
    else
    {
        ui->box_6->setText(player2);
        box6_value = 1;
    }
    is_box6_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_7_clicked()
{
    if(is_box7_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_7->setText(player1);
        box7_value = 0;
    }
    else
    {
        ui->box_7->setText(player2);
        box7_value = 1;
    }
    is_box7_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_8_clicked()
{
    if(is_box8_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_8->setText(player1);
        box8_value = 0;
    }
    else
    {
        ui->box_8->setText(player2);
        box8_value = 1;
    }
    is_box8_clicked = true;
    checkWinner();
    currentplayer();
}


void Widget::on_box_9_clicked()
{
    if(is_box9_clicked == true)
        return;

    if(b_currentplayer == 0)
    {
        ui->box_9->setText(player1);
        box9_value = 0;
    }
    else
    {
        ui->box_9->setText(player2);
        box9_value = 1;
    }
    is_box9_clicked = true;
    checkWinner();
    currentplayer();
}

void Widget::on_restartClicked()
{
    reset();

    ui->box_1->setText("");
    ui->box_2->setText("");
    ui->box_3->setText("");

    ui->box_4->setText("");
    ui->box_5->setText("");
    ui->box_6->setText("");

    ui->box_7->setText("");
    ui->box_8->setText("");
    ui->box_9->setText("");

    winnerdialog->winnerplayer = "None";
    winnerdialog->hide();
}

