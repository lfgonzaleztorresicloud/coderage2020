
//---------------------------------------------------------------------------
#ifndef WebModuleUnit1H
#define WebModuleUnit1H
//---------------------------------------------------------------------------
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Web.HTTPApp.hpp>
#include <Data.DBXCommon.hpp>
#include <DataSnap.DSCommonServer.hpp>
#include <DataSnap.DSHTTPCommon.hpp>
#include <DataSnap.DSHTTPWebBroker.hpp>
#include <DataSnap.DSServer.hpp>
#include <Web.HTTPProd.hpp>
#include <DataSnap.DSAuth.hpp>
#include <Datasnap.DSClientMetadata.hpp>
#include <Datasnap.DSHTTP.hpp>
#include <Datasnap.DSMetadata.hpp>
#include <Datasnap.DSProxyJavaScript.hpp>
#include <Datasnap.DSServerMetadata.hpp>
#include <IPPeerServer.hpp>
//---------------------------------------------------------------------------
class TWebModule1 : public TWebModule
{
__published:	// IDE-managed Components
	TDSHTTPWebDispatcher *DSHTTPWebDispatcher1;
	TWebFileDispatcher *WebFileDispatcher1;
	TDSProxyGenerator *DSProxyGenerator1;
	TDSServerMetaDataProvider *DSServerMetaDataProvider1;
	void __fastcall WebModule1DefaultHandlerAction(TObject *Sender, TWebRequest *Request,
          TWebResponse *Response, bool &Handled);
	void __fastcall WebFileDispatcher1BeforeDispatch(TObject *Sender, const UnicodeString AFileName,
		  TWebRequest *Request, TWebResponse *Response, bool &Handled);
	void __fastcall WebModuleCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TWebModule1(TComponent* Owner);
};
//---------------------------------------------------------------------------
#endif

