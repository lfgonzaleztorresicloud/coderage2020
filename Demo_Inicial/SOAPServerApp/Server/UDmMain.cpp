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
// TEmployeeStructArray TDmMain::GetEmployees(void)
// {
//	TEmployeeStructArray employees;
//	std::unique_ptr<TFDQuery> qry(new TFDQuery(NULL));
//	qry->Connection = this->EmployeeConnection;
//	qry->SQL->Text = L"select count(1) as cant from Employee";
//	qry->Active = true;
//	employees.set_length(qry->FieldByName("cant")->AsInteger);
//	EmployeeTable->Active = true;
//	EmployeeTable->First();
//	int contador = 0;
//	while(!EmployeeTable->Eof) {
//		TEmployeeStruct * emp = new TEmployeeStruct();
//		emp->EmpNo = qry->FieldByName("emp_no")->AsInteger;
//		emp->FirstName = qry->FieldByName("first_name")->AsString;
//		emp->LastName = qry->FieldByName("last_name")->AsString;
//		employees[contador++] = emp;
//		EmployeeTable->Next();
//	}
//	return employees;
// }

