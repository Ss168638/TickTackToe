#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <dialog.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    void currentplayer();

    bool checkrowOne();
    bool checkrowTwo();
    bool checkrowThree();

    bool checkcolOne();
    bool checkcolTwo();
    bool checkcolThree();

    bool checkDiagonalOne();
    bool checkDiagonalTwo();

    bool checkWinner();

    void reset();

private slots:
    void on_box_1_clicked();

    void on_box_2_clicked();

    void on_box_3_clicked();

    void on_box_4_clicked();

    void on_box_5_clicked();

    void on_box_6_clicked();

    void on_box_7_clicked();

    void on_box_8_clicked();

    void on_box_9_clicked();

    void on_restartClicked();

private:
    Ui::Widget *ui;

    //box state
    bool is_box1_clicked;
    bool is_box2_clicked;
    bool is_box3_clicked;

    bool is_box4_clicked;
    bool is_box5_clicked;
    bool is_box6_clicked;

    bool is_box7_clicked;
    bool is_box8_clicked;
    bool is_box9_clicked;

    //Box Value for winner calculation
    uint8_t box1_value;
    uint8_t box2_value;
    uint8_t box3_value;

    uint8_t box4_value;
    uint8_t box5_value;
    uint8_t box6_value;

    uint8_t box7_value;
    uint8_t box8_value;
    uint8_t box9_value;


    //players
    QString player1, player2;
    bool b_currentplayer;

    //create winner dialog object
    Dialog *winnerdialog;
};
#endif // WIDGET_H
