//---------------------------------------------------------------------------

#ifndef Lab12H
#define Lab12H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *b1;
	TBitBtn *b2;
	TBitBtn *b3;
	TBitBtn *Exit;
	TTimer *Timer1;
	TTimer *Timer2;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	void __fastcall b1Click(TObject *Sender);
	void __fastcall b2Click(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall b3Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
