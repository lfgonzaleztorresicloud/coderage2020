//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "UFrmMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	EMSFireDACClient1->GetData();
    FDMemTable1->Active = true;
}
//---------------------------------------------------------------------------
