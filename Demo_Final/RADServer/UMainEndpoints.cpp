//---------------------------------------------------------------------------
#pragma hdrstop

#include "UMainEndpoints.h"
#include <memory>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "System.Classes.TPersistent"
#pragma resource "*.dfm"
//---------------------------------------------------------------------------
__fastcall TCoderageResource1::TCoderageResource1(TComponent* Owner)
	: TDataModule(Owner)
{
}

static void Register()
{
    std::unique_ptr<TEMSResourceAttributes> attributes(new TEMSResourceAttributes());
    attributes->ResourceName = "coderage2020";
    attributes->ResourceSuffix["dsrCOUNTRY"] = "COUNTRY";

    RegisterResource(__typeinfo(TCoderageResource1), attributes.release());
}

#pragma startup Register 32
