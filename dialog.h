#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QDebug>
#include <QTextDocument>
#include <QTextEdit>
#include <QMessageBox>
#include <QLabel>
#include <string>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void calculate();
private:
    Ui::Dialog *ui;
    int atomic_number;
    QString element_name;
    int hold_24;
    int hold_29;
    int holdInitialatomicnumber;
     QTextDocument downarrow;
     QTextDocument uparrow;
     void clearSpinBox();
    void oneSpin(QTextEdit*,QLabel*);
    void twoSpins( QTextEdit *,QLabel*);
    void p_degenerateOrbitals(QTextEdit*);
    void d_degenerateOrbitals(QTextEdit*);
    void f_degenerateOrbitals(QTextEdit*);
    void setDefaultLabelText();
    void setElentSymbol();
    void saveName();
    void searchName();
};

#endif // DIALOG_H
