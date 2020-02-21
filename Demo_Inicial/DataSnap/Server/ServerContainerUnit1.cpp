//----------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#if ! defined(__linux__)
#include <tchar.h>
#endif
#include <stdio.h>
#include <memory>
#include <string>
#include "ServerMethodsUnit1.h"

#include "ServerContainerUnit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"

//---------------------------------------------------------------------------

TServerContainer1 *ServerContainer1;
TComponent *FModule;
TDSServer *FDSServer;

//---------------------------------------------------------------------------
__fastcall TServerContainer1::TServerContainer1(TComponent* Owner)
	: TDataModule(Owner)
{
	FDSServer = DSServer1;
}
//---------------------------------------------------------------------------
__fastcall TServerContainer1::~TServerContainer1(void)
{
	FDSServer = NULL;
}
//----------------------------------------------------------------------------
void __fastcall TServerContainer1::DSServerClass1GetClass(TDSServerClass *DSServerClass,
          TPersistentClass &PersistentClass)
{
	PersistentClass =  __classid(TServerMethods1);
}
//----------------------------------------------------------------------------

TDSServer *DSServer(void)
{
	return FDSServer;
}

//---------------------------------------------------------------------------
static void createContainer()
{
	FModule = new TServerContainer1(NULL);
}
static void freeContainer()
{
	free(FModule);
}
#pragma startup createContainer 33
#pragma exit freeContainer 33

