//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "ServerMethodsUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall TServerMethods1::TServerMethods1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//----------------------------------------------------------------------------
TJSONObject * TServerMethods1::Countries(void){
	if(DmMain != NULL) { DmMain = new TDmMain(NULL); }
	std::unique_ptr<TJSONObject> _return(new TJSONObject());
	_return->AddPair("cod_error", new TJSONNumber(0));
	_return->AddPair("data", DmMain->GetCountries());
    return _return.release();
}
//----------------------------------------------------------------------------
System::UnicodeString TServerMethods1::EchoString(System::UnicodeString value)
{
    return value;
}
//----------------------------------------------------------------------------
System::UnicodeString TServerMethods1::ReverseString(System::UnicodeString value)
{
    return ::ReverseString(value);
}
//----------------------------------------------------------------------------

