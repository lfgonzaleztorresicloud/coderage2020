
//---------------------------------------------------------------------------
#include "WebModuleUnit1.h"
#include "ServerMethodsUnit1.h"
#include "ServerContainerUnit1.h"
#include <Web.WebReq.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

TComponentClass WebModuleClass = __classid(TWebModule1);
//---------------------------------------------------------------------------
__fastcall TWebModule1::TWebModule1(TComponent* Owner)
	: TWebModule(Owner)
{
}
//---------------------------------------------------------------------------
//----------------------------------------------------------------------------
void __fastcall TWebModule1::WebModule1DefaultHandlerAction(TObject *Sender, TWebRequest *Request,
		  TWebResponse *Response, bool &Handled)
{
  Response->Content =
    "<html>"
    "<head><title>DataSnap Server</title></head>"
    "<body>DataSnap Server</body>"
    "</html>";
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::WebFileDispatcher1BeforeDispatch(TObject *Sender, const UnicodeString AFileName,
          TWebRequest *Request, TWebResponse *Response, bool &Handled)

{
	Handled = False;
	if (SameFileName(ExtractFileName(AFileName), "serverfunctions.js"))
	{
		TDateTime D1, D2;
		if (FileAge(AFileName, D1) && FileAge(WebApplicationFileName(), D2) && (D1 < D2))
		{
			DSProxyGenerator1->TargetDirectory = ExtractFilePath(AFileName);
			DSProxyGenerator1->TargetUnitName = ExtractFileName(AFileName);
			DSProxyGenerator1->Write();
		}
	}
}
//---------------------------------------------------------------------------
void __fastcall TWebModule1::WebModuleCreate(TObject *Sender)
{
	DSServerMetaDataProvider1->Server = DSServer();
	DSHTTPWebDispatcher1->Server = DSServer();
	if (DSServer()->Started)
	{
		DSHTTPWebDispatcher1->DbxContext = DSServer()->DbxContext;
		DSHTTPWebDispatcher1->Start();
	}
}

//---------------------------------------------------------------------------
static void freeWebModules()
{
	FreeWebModules();
}
#pragma exit freeWebModules 33

void __fastcall TWebModule1::DSHTTPWebDispatcher1FormatResult(TObject *Sender, TJSONValue *&ResultVal,
          TDBXCommand * const Command, bool &Handled)
{
    // Eliminamos la respuesta {result[]} propia de EMB
	std::unique_ptr<TJSONValue> temp(ResultVal);
	ResultVal = static_cast<TJSONArray*>(temp.get())->Remove(0);
	Handled = true;
}
//---------------------------------------------------------------------------
