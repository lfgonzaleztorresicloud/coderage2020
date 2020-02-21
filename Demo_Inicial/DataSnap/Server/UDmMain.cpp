//---------------------------------------------------------------------------


#pragma hdrstop

#include "UDmMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDmMain *DmMain;
//---------------------------------------------------------------------------
__fastcall TDmMain::TDmMain(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
TJSONArray * __fastcall TDmMain::GetCountries(void) {
	std::unique_ptr<TJSONArray> _return(new TJSONArray());
	CountryTable->Active = true;
	while(!CountryTable->Eof) {
		TJSONObject * country = new TJSONObject();
		country->AddPair("country", CountryTable->FieldByName("country")->AsString);
		country->AddPair("currency", CountryTable->FieldByName("currency")->AsString);
		CountryTable->Next();
		_return->AddElement(country);
    }
	return _return.release();
}
//---------------------------------------------------------------------------
