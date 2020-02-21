//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Comp.Client.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.DApt.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <REST.Backend.EMSFireDAC.hpp>
#include <REST.Backend.EMSProvider.hpp>
#include <REST.Backend.EMSServices.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.ListView.Adapters.Base.hpp>
#include <FMX.ListView.Appearances.hpp>
#include <FMX.ListView.hpp>
#include <FMX.ListView.Types.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.FMXUI.Wait.hpp>
#include <FireDAC.UI.Intf.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TToolBar *ToolBar1;
	TButton *Button1;
	TListView *ListView1;
	TEMSProvider *EMSProvider1;
	TEMSFireDACClient *EMSFireDACClient1;
	TFDSchemaAdapter *FDSchemaAdapter1;
	TFDTableAdapter *FDTableAdapter1;
	TFDMemTable *FDMemTable1;
	TDataSource *DataSource1;
	TFDGUIxWaitCursor *FDGUIxWaitCursor1;
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
