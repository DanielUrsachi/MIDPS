#include "calc.h"
#include "ui_calc.h"
#include <math.h>
#include "fun.h"

Calc::Calc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Calc)
{
   ff();

}

Calc::~Calc()
{
    delete ui;
}

void Calc::on_b1_clicked()
{
    f1(1);



}

void Calc::on_b2_clicked()
{
   f1(2);
}

void Calc::on_b3_clicked()
{
  f1(3);
}

void Calc::on_b4_clicked()
{
  f1(4);
}

void Calc::on_b5_clicked()
{
  f1(5);
}

void Calc::on_b6_clicked()
{
   f1(6);
}

void Calc::on_b7_clicked()
{
    f1(7);
}

void Calc::on_b8_clicked()
{
    f1(8);
}

void Calc::on_b9_clicked()
{
    f1(9);
}

void Calc::on_b0_clicked()
{
    f1(0);
}
void Calc::on_C_clicked()
{
   f2();
}
void Calc::on_eq_clicked()
{
    f3();
}
void Calc::on_plus_clicked()
{
   f4(1);

}




void Calc::on_minus_clicked()
{
   f4(2);
}

void Calc::on_inm_clicked()
{
   f4(3);
}

void Calc::on_imp_clicked()
{
    f4(4);
}

void Calc::on_pow_clicked()
{
    f4(5);
}

void Calc::on_sqrt_clicked()
{
  f5();
}

void Calc::on_inv_clicked()
{
    f6();
}

void Calc::on_punct_clicked()
{
  f7();
}
