#ifndef CALC_H
#define CALC_H

#include <QMainWindow>


namespace Ui {
class Calc;
}

class Calc : public QMainWindow
{
    Q_OBJECT
    double x = 0,y = 0,z = 0;
    double semn = 10, semn0 = 1;
    int o = 0, it = 0,s = 0;



public:
    double f1(int),f2(),f3(),f4(int),f5(),f6(),f7(),ff();
    explicit Calc(QWidget *parent = 0);
    ~Calc();



private slots:

    void on_b1_clicked();

    void on_b2_clicked();

    void on_b3_clicked();

    void on_b4_clicked();

    void on_b5_clicked();

    void on_b6_clicked();

    void on_b7_clicked();

    void on_b8_clicked();

    void on_b9_clicked();

    void on_b0_clicked();

    void on_plus_clicked();

    void on_eq_clicked();

    void on_C_clicked();

    void on_minus_clicked();

    void on_inm_clicked();

    void on_imp_clicked();

    void on_pow_clicked();

    void on_sqrt_clicked();

    void on_inv_clicked();

    void on_punct_clicked();


private:
    Ui::Calc *ui;
};

#endif // CALC_H
