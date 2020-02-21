//---------------------------------------------------------------------------


#pragma hdrstop

#include "UDmMain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma classgroup "Vcl.Controls.TControl"
#pragma resource "*.dfm"
TDataModule1 *DataModule1;
//---------------------------------------------------------------------------
__fastcall TDataModule1::TDataModule1(TComponent* Owner)
	: TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
String __fastcall TDataModule1::getEmployees(void)
{
	std::unique_ptr<TFDQuery> qry(new TFDQuery(NULL));
	std::unique_ptr<TJSONArray> jsona_employees(new TJSONArray());
	qry->Connection = EmployeeConnection;
	qry->SQL->Text = L"select emp_no, first_name, last_name from employee";
	qry->Active = true;
	if(!qry->Eof) {
		while(!qry->Eof) {
			TJSONObject * employee = new TJSONObject();
			employee->AddPair("emp_no", new TJSONNumber(qry->FieldByName("emp_no")->AsInteger));
			employee->AddPair("first_name", qry->FieldByName("first_name")->AsString);
			employee->AddPair("last_name", qry->FieldByName("last_name")->AsString);
			jsona_employees->AddElement(employee);
			qry->Next();
        }
	}
    if(qry->Active) { qry->Active = false; };
	return jsona_employees->ToString();
}
