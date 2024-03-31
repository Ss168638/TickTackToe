#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    QString winnerplayer;

    void on_DisplayWinner();

signals:
    void restart();

private slots:
    void on_restart_button_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
