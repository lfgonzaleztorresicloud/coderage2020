//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmMain.h"
#include "UOpciones.h"
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
	int opcion = invocar_formulario();
    ShowMessage(String().sprintf(L"Se seleccion� la opci�n %d", opcion).c_str());
}
//---------------------------------------------------------------------------