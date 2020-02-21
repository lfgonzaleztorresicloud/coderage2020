//---------------------------------------------------------------------------

#ifndef UDmMainH
#define UDmMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.hpp>
#include <FireDAC.Phys.IB.hpp>
#include <FireDAC.Phys.IBDef.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Async.hpp>
#include <FireDAC.Stan.Def.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Pool.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.VCLUI.Wait.hpp>
#include "UDemo.h"
#include <memory>
//---------------------------------------------------------------------------
class TDmMain : public TDataModule
{
__published:	// IDE-managed Components
	TFDConnection *EmployeeConnection;
	TFDQuery *EmployeeTable;
private:	// User declarations
public:		// User declarations
	__fastcall TDmMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDmMain *DmMain;
//---------------------------------------------------------------------------
#endif
