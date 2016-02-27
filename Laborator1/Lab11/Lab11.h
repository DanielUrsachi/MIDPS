//---------------------------------------------------------------------------

#ifndef Lab11H
#define Lab11H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TBitBtn *up;
	TBitBtn *down;
	TBitBtn *exit;
	TEdit *Edit1;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall Edit1Change(TObject *Sender);
	void __fastcall upClick(TObject *Sender);
	void __fastcall downClick(TObject *Sender);
	void __fastcall exitClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
