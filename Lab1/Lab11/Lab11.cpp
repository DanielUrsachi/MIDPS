//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Lab11.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int i = 0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Edit1Change(TObject *Sender)
{
//Edit1->Clear();
   //	Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::upClick(TObject *Sender)
{
i++;
Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::downClick(TObject *Sender)
{
i--;
Edit1->Text=i;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::exitClick(TObject *Sender)
{
	Close();
}
//---------------------------------------------------------------------------
