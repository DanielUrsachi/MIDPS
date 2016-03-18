#ifndef FUN_H
#define FUN_H


//#include <QMainWindow>

#endif // FUN_H
char a[20]={70,50,100,640,87,99};
double Calc :: ff(){
    ui->setupUi(this);
    ui->textEdit->setText(QString::number(x));
}
double Calc :: f1(int num){
    if(s == 0){
    x = x * semn + num;
    ui->textEdit->setText(QString::number(x));}
    else{ x = x  + num*pow(0.1,s);
        ui->textEdit->setText(QString::number(x));
        s++;
    }
}


double Calc :: f2(){
    x = 0;
    y = 0;
    z = 0;
    semn = 10;
    it = 0;
    s = 0;
    ui->textEdit->setText(QString::number(x));
}
double Calc :: f3(){
    switch(o){
    case 1: x = x + y; break;
    case 2: x = y - x; break;
    case 3: x = x * y; break;
    case 4: x = y / x; break;
    case 5: x = pow(y,x); break;
    // case 6: x = sqrt(y,x); break;

    }
    ui->textEdit->setText(QString::number(x));
    it=0;
    s = 0;
}


double Calc :: f4(int num){
    if (it != 0){Calc::on_eq_clicked();}
    y = x;
    x = 0;
    o = num;
     s = 0;
    //if (it != 0){x = x * y; ui->textEdit->setText(QString::number(x));}
    it++;
}
double Calc :: f5(){
    // if (it != 0){Calc::on_eq_clicked();}
     //Calc::on_eq_clicked();
     x = sqrt(x);
      s = 0;
    // y = x;
     //x = 0;
    // y = x;
    ui->textEdit->setText(QString::number(x));

    // o = 6;
     //if (it != 0){x = x * y; ui->textEdit->setText(QString::number(x));}
    // it++;
}
double Calc :: f6(){
    x = x * (-1);
     s = 0;
    ui->textEdit->setText(QString::number(x));
}
double Calc :: f7(){
    s = 1;
}
