/********************************************************************************
** Form generated from reading UI file 'calc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALC_H
#define UI_CALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calc
{
public:
    QWidget *centralWidget;
    QPushButton *b1;
    QPushButton *b2;
    QPushButton *b3;
    QPushButton *plus;
    QPushButton *b4;
    QPushButton *b5;
    QPushButton *b6;
    QPushButton *b7;
    QPushButton *b8;
    QPushButton *b9;
    QPushButton *b0;
    QPushButton *eq;
    QTextEdit *textEdit;
    QPushButton *C;
    QPushButton *minus;
    QPushButton *inm;
    QPushButton *imp;
    QPushButton *pow;
    QPushButton *sqrt;
    QPushButton *inv;
    QPushButton *punct;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Calc)
    {
        if (Calc->objectName().isEmpty())
            Calc->setObjectName(QStringLiteral("Calc"));
        Calc->resize(405, 315);
        centralWidget = new QWidget(Calc);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        b1 = new QPushButton(centralWidget);
        b1->setObjectName(QStringLiteral("b1"));
        b1->setGeometry(QRect(40, 70, 51, 41));
        b2 = new QPushButton(centralWidget);
        b2->setObjectName(QStringLiteral("b2"));
        b2->setGeometry(QRect(100, 70, 51, 41));
        b3 = new QPushButton(centralWidget);
        b3->setObjectName(QStringLiteral("b3"));
        b3->setGeometry(QRect(160, 70, 51, 41));
        plus = new QPushButton(centralWidget);
        plus->setObjectName(QStringLiteral("plus"));
        plus->setGeometry(QRect(220, 70, 75, 31));
        b4 = new QPushButton(centralWidget);
        b4->setObjectName(QStringLiteral("b4"));
        b4->setGeometry(QRect(40, 120, 51, 41));
        b5 = new QPushButton(centralWidget);
        b5->setObjectName(QStringLiteral("b5"));
        b5->setGeometry(QRect(100, 120, 51, 41));
        b6 = new QPushButton(centralWidget);
        b6->setObjectName(QStringLiteral("b6"));
        b6->setGeometry(QRect(160, 120, 51, 41));
        b7 = new QPushButton(centralWidget);
        b7->setObjectName(QStringLiteral("b7"));
        b7->setGeometry(QRect(40, 170, 51, 41));
        b8 = new QPushButton(centralWidget);
        b8->setObjectName(QStringLiteral("b8"));
        b8->setGeometry(QRect(100, 170, 51, 41));
        b9 = new QPushButton(centralWidget);
        b9->setObjectName(QStringLiteral("b9"));
        b9->setGeometry(QRect(160, 170, 51, 41));
        b0 = new QPushButton(centralWidget);
        b0->setObjectName(QStringLiteral("b0"));
        b0->setGeometry(QRect(40, 220, 111, 31));
        eq = new QPushButton(centralWidget);
        eq->setObjectName(QStringLiteral("eq"));
        eq->setGeometry(QRect(300, 110, 71, 71));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(110, 30, 181, 31));
        C = new QPushButton(centralWidget);
        C->setObjectName(QStringLiteral("C"));
        C->setGeometry(QRect(300, 70, 71, 31));
        minus = new QPushButton(centralWidget);
        minus->setObjectName(QStringLiteral("minus"));
        minus->setGeometry(QRect(220, 110, 75, 31));
        inm = new QPushButton(centralWidget);
        inm->setObjectName(QStringLiteral("inm"));
        inm->setGeometry(QRect(220, 150, 75, 31));
        imp = new QPushButton(centralWidget);
        imp->setObjectName(QStringLiteral("imp"));
        imp->setGeometry(QRect(220, 190, 75, 31));
        pow = new QPushButton(centralWidget);
        pow->setObjectName(QStringLiteral("pow"));
        pow->setGeometry(QRect(220, 230, 75, 21));
        sqrt = new QPushButton(centralWidget);
        sqrt->setObjectName(QStringLiteral("sqrt"));
        sqrt->setGeometry(QRect(300, 230, 71, 21));
        inv = new QPushButton(centralWidget);
        inv->setObjectName(QStringLiteral("inv"));
        inv->setGeometry(QRect(300, 190, 71, 31));
        punct = new QPushButton(centralWidget);
        punct->setObjectName(QStringLiteral("punct"));
        punct->setGeometry(QRect(160, 220, 51, 31));
        Calc->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Calc);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 405, 21));
        Calc->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Calc);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Calc->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Calc);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Calc->setStatusBar(statusBar);

        retranslateUi(Calc);

        QMetaObject::connectSlotsByName(Calc);
    } // setupUi

    void retranslateUi(QMainWindow *Calc)
    {
        Calc->setWindowTitle(QApplication::translate("Calc", "Calc", 0));
        b1->setText(QApplication::translate("Calc", "1", 0));
        b2->setText(QApplication::translate("Calc", "2", 0));
        b3->setText(QApplication::translate("Calc", "3", 0));
        plus->setText(QApplication::translate("Calc", "+", 0));
        b4->setText(QApplication::translate("Calc", "4", 0));
        b5->setText(QApplication::translate("Calc", "5", 0));
        b6->setText(QApplication::translate("Calc", "6", 0));
        b7->setText(QApplication::translate("Calc", "7", 0));
        b8->setText(QApplication::translate("Calc", "8", 0));
        b9->setText(QApplication::translate("Calc", "9", 0));
        b0->setText(QApplication::translate("Calc", "0", 0));
        eq->setText(QApplication::translate("Calc", "=", 0));
        C->setText(QApplication::translate("Calc", "C", 0));
        minus->setText(QApplication::translate("Calc", "-", 0));
        inm->setText(QApplication::translate("Calc", "*", 0));
        imp->setText(QApplication::translate("Calc", "/", 0));
        pow->setText(QApplication::translate("Calc", "pow", 0));
        sqrt->setText(QApplication::translate("Calc", "sqrt", 0));
        inv->setText(QApplication::translate("Calc", "-/+", 0));
        punct->setText(QApplication::translate("Calc", ".", 0));
    } // retranslateUi

};

namespace Ui {
    class Calc: public Ui_Calc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALC_H
