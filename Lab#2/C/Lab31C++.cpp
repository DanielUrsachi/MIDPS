#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
public:
    Date()  //constr.implicit
    {
        day=0;
        month=0;
        year=0;
    };
    Date(Date &d)   //constr.copie
    {
        this->day=d.day;
        this->month=d.month;
        this->year=d.year;
    };
    Date(int d,int m,int y) //constr. general
    {
        day=d;
        month=m;
        year=y;
    };
    ~Date() //destructor
    {day = month = year = 0;};
    Date operator+(Date &s)
    {
        Date res;
        res.day=this->day+s.day;
        res.month=this->month+s.month;
        res.year=this->year+s.year;
        return res;
    }
    Date operator+=(Date &s)
    {
        Date res;
        res.day=5+s.day;
        res.month=5+s.month;
        res.year=5+s.year;
        return res;
    }

    Date operator-(Date &d)
    {
        Date dif;
        dif.day=this->day-d.day;
        dif.month=this->month-d.month;
        dif.year=this->year-d.year;
        return dif;
    };
    friend Date& operator++(Date& pr);
    friend Date operator++(Date& post,int);
    friend Date& operator--(Date& dec);
    friend Date operator--(Date& post,int);

    void print()
    {
        cout<<endl<<"Ziua   "<<day;
        cout<<endl<<"Luna   "<<month;
        cout<<endl<<"Anul   "<<year<<endl;
    }
  };

Date& operator++(Date& pr)
{
    Date pre;
	pr.day++;
	pr.month++;
	pr.year++;
	pre.day=pr.day;
	pre.month=pr.month;
	pre.year=pr.year;
	return pre;
}
Date operator++(Date& post,int)
{
    Date st;
    st.day=post.day;
    st.month=post.month;
    st.year=post.year;
    post.day++;
    post.month++;
    post.year++;
    return st;
}
Date& operator--(Date& dec)
{
    Date decr;
	dec.day--;
	dec.month--;
	dec.year--;
	decr.day=dec.day;
	decr.month=dec.month;
	decr.year=dec.year;
	return decr;
}
Date operator--(Date& post,int)
{
    Date st;
    st.day=post.day;
    st.month=post.month;
    st.year=post.year;
    post.day--;
    post.month--;
    post.year--;
    return st;
}

int main()
{
    system("CLS");
    int d,l,a,an,o;
    cout << "\t Introducera datelor initiale pentru obiectu data1:" << endl;
    cout << "Introducera Anului" << endl;
    cin >> a;
    cout << "Introducera Lunei" << endl;
    do{cin >> l;}while(l>12);
    if(l%2!=0){an = 31;};
    if (l%2==0){an = 30;};
    if((l==2)&&(a%4==0)){an = 29;};
    if((l==2)&&(a%4!=0)){an = 28;};
    cout << "Introducera Datii" << endl;
    do{cin >> d;}while(d>an);
    Date data1(d,l,a);
    cout << "Afisarea data1" << endl;
    data1.print();
    _getch();

    system("CLS");
    cout << "\t Introducera datelor initiale pentru obiectu data2:" << endl;
    cout << "Introducera Anului" << endl;
    cin >> a;
    cout << "Introducera Lunei" << endl;
    do{cin >> l;}while(l>12);
    if(l%2!=0){an = 31;};
    if (l%2==0){an = 30;};
    if((l==2)&&(a%4==0)){an = 29;};
    if((l==2)&&(a%4!=0)){an = 28;};
    cout << "Introducera Datii" << endl;
    do{cin >> d;}while(d>an);
    Date data2(d,l,a);
    cout << "Afisarea data2" << endl;
    data2.print();
    _getch();

    system("CLS");
    cout << "\tDatele din data3 sunt o copie a data1" << endl;
    Date data3(data1);
    cout << "Afisarea data1" << endl;
    data1.print();
    cout << "Afisarea data3" << endl;
    data3.print();
    _getch();

    system("CLS");
    cout << "\tSuma obiectelor data1 si data2 de tip Data este:" << endl;
    data3=data1+data2;
    data1.print();
    cout << "+" << endl;
    data2.print();
    cout << "=" << endl;
    data3.print();
    _getch();

    system("CLS");
    cout << "\tDefinirea elementelor data3 prin valoarea data2 + 5" << endl;
    data2.print();
    cout << "+" << endl;
    cout << "5" << endl;
    cout << "=" << endl;
    data3=data3+=data2;
    data3.print();

    _getch();

    system("CLS");
    cout << "\tDifirenta obiectelor data1 si data2 de tip Data este:" << endl;
    data3=data1-data2;
    data1.print();
    cout << "-" << endl;
    data2.print();
    cout << "=" << endl;
    data3.print();
    _getch();

    system("CLS");
    cout << "\tOperatorul ++(prefix) date1:" << endl;
    cout << "Afisarea data1 initial" << endl;
    data1.print();
    cout << "Afisarea data1 la incrementare" << endl;
    ++data1;
    data1.print();
    cout << "Afisarea data1 final" << endl;
    data1.print();
    _getch();

    system("CLS");
    cout << "\tOperatorul ++(postfix) data2:" << endl;
    cout << "Afisarea data2 initial" << endl;
    data2.print();
    cout << "Afisarea data2 initial la incrementare" << endl;
    data2++.print();
    cout << "Afisarea data2 final" << endl;
    data2.print();
    _getch();

    system("CLS");
    cout << "\tOperatorul --(prefix) date1:" << endl;
    cout << "Afisarea data1 initial" << endl;
    data1.print();
    cout << "Afisarea data1 la incrementare" << endl;
    --data1;
    data1.print();
    cout << "Afisarea data1 final" << endl;
    data1.print();
    _getch();

    system("CLS");
    cout << "\tOperatorul --(postfix) data2:" << endl;
    cout << "Afisarea data2 initial" << endl;
    data2.print();
    cout << "Afisarea data2 initial la incrementare" << endl;
    data2--.print();
    cout << "Afisarea data2 final" << endl;
    data2.print();
    _getch();


    return 0;
}
