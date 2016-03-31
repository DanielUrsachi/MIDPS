//---------------------------------------------------------------------------

#include <vcl.h>
#include <dos.h>
#include <stdio.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int x = 0;
int i = 0;
struct date d;
struct time t;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{

	TRect dreptunghi;
	 TRect sursa,destinatie;
	 PaintBox1->Canvas->Pen->Color=clRed;
	 dreptunghi=Rect(464,128,464+130,128+130);
	 PaintBox1->Repaint();

	 sursa=Rect(0,0,100,150);
	 destinatie=Rect(100,0,200,150);


	 sursa=Rect(464,128,464+130,128+130);
	 PaintBox1->Canvas->CopyRect(destinatie,PaintBox1->Canvas,sursa);
	 //Rect(0,0,50,50);
	 //PaintBox1->Canvas->FillRect(dreptunghi);
	 //PaintBox1->Canvas->Brush->Color = clAqua;
	// PaintBox1->Canvas->FloodFill(464,128,clBlack,fsBorder);








	Timer1->Enabled=true;
	Timer2->Enabled=false;
	getdate(&d);
	gettime(&t);
	char buf[40];

	snprintf ( buf, 40, "%d-%d-%d %d:%d:%d", d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
	Edit1->Text=(AnsiString)buf;

	Start->Enabled=true;
	Stop->Enabled=false;
	Continue->Enabled=false;




	PaintBox1->Canvas->MoveTo(0,60);

	 /*
	TRect dreptunghi;
	PaintBox1->Canvas->Brush->Style = bsHorizontal;
	dreptunghi=Rect(0,0,400,400);
	PaintBox1->Canvas->FillRect(dreptunghi);
	PaintBox1->Repaint();
	PaintBox1->Canvas->Pen->Color=clRed;
	 PaintBox1->Canvas->Pen->Width=1;
	 //PaintBox1->Canvas->Pen->Style=psDash;
	 PaintBox1->Canvas->Ellipse(0,0,400,400);
	 TRect sursa,destinatie;
	 sursa=Rect(0,0,100,150);
	 PaintBox1->Canvas->CopyRect(destinatie,PaintBox1->Canvas,sursa); */

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{

	getdate(&d);
	gettime(&t);
	char buff[40];

	snprintf ( buff, 40, "%d-%d-%d %d:%d:%d", d.da_day,d.da_mon,d.da_year,t.ti_hour,t.ti_min,t.ti_sec);
	Edit1->Text=(AnsiString)buff;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ExitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StartClick(TObject *Sender)
{

	Start->Enabled=false;
	Continue->Enabled=false;
	Stop->Enabled=true;

	Timer2->Enabled=true;





	PaintBox1->Canvas->FloodFill(50,50,clBtnFace,fsBorder);
		PaintBox1->Canvas->Pen->Color=clBlack;
	for (int i = 0; i <= 130; i += 10)
	{
		PaintBox1->Canvas->MoveTo(0, i);
		PaintBox1->Canvas->LineTo(PaintBox1->Width, i);
	}

	 for (int i =0;i<=130;i += 10)
	{
		PaintBox1->Canvas->MoveTo(i, 0);
		PaintBox1->Canvas->LineTo(i, PaintBox1->Height);
	}


	PaintBox1->Canvas->Pen->Color=clRed;
	i = 0;
	x = 0;

	PaintBox1->Canvas->MoveTo(0,60);
	Panel2->Height=60;

   //	PaintBox1->Repaint();

	//PaintBox1->Canvas->LineTo(10,70);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::StopClick(TObject *Sender)
{
	Start->Enabled=true;
	Stop->Enabled=false;
	Timer2->Enabled=false;
	Continue->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
   x = rand()%100;
   i = i+5;
   //Label1->Caption=x;

   PaintBox1->Canvas->LineTo(i,x);

   Panel2->Height=x;


   if(i==130){  //129

	Start->Enabled=true;
	Stop->Enabled=false;
	Continue->Enabled=false;
	Timer2->Enabled=false;
	Timer2->Tag = 0;

	i = 0;
	x = 0;
	//Timer2->Tag=0;




   }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContinueClick(TObject *Sender)
{
   Timer2->Enabled=true;

   Start->Enabled=false;
   Stop->Enabled=true;
   Continue->Enabled=false;

}
//---------------------------------------------------------------------------


