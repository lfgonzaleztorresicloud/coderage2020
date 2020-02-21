//---------------------------------------------------------------------------

#ifndef UFrmOpcionesH
#define UFrmOpcionesH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TfrmOpciones : public TForm
{
__published:	// IDE-managed Components
	TRadioGroup *RadioGroup1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TfrmOpciones(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmOpciones *frmOpciones;
//---------------------------------------------------------------------------
#endif
