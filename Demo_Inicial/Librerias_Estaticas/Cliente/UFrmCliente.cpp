//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCliente.h"
#include "UCalculadora.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int x = StrToInt(LabeledEdit1->Text);
	int y = StrToInt(LabeledEdit2->Text);
    LabeledEdit3->Text = IntToStr(sumar(x, y));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int x = StrToInt(LabeledEdit1->Text);
	int y = StrToInt(LabeledEdit2->Text);
	LabeledEdit3->Text = IntToStr(restar(x, y));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
	int x = StrToInt(LabeledEdit1->Text);
	int y = StrToInt(LabeledEdit2->Text);
	LabeledEdit3->Text = IntToStr(multiplicar(x, y));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	int x = StrToInt(LabeledEdit1->Text);
	int y = StrToInt(LabeledEdit2->Text);
	LabeledEdit3->Text = IntToStr(dividir(x, y));
}
//---------------------------------------------------------------------------
