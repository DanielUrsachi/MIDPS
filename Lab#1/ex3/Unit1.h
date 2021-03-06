//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
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
	TBitBtn *Start;
	TBitBtn *Stop;
	TBitBtn *Exit;
	TTimer *Timer1;
	TTimer *Timer2;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TPaintBox *PaintBox1;
	TPanel *Panel1;
	TPanel *Panel2;
	TBitBtn *Continue;
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ExitClick(TObject *Sender);
	void __fastcall StartClick(TObject *Sender);
	void __fastcall StopClick(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall ContinueClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
