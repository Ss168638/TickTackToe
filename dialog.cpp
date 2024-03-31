#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
    winnerplayer = "None"; //Player1 - 0, Player2 - 1
}

void Dialog::on_DisplayWinner()
{
    ui->winnerlabel->setText("Winner is Player - " + winnerplayer);
}

void Dialog::on_restart_button_clicked()
{
    emit restart();
}

