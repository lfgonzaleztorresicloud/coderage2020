object DmMain: TDmMain
  OldCreateOrder = False
  Height = 290
  Width = 380
  object EmployeeConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=EMPLOYEE')
    LoginPrompt = False
    Left = 104
    Top = 48
  end
  object EmployeeTable: TFDQuery
    Connection = EmployeeConnection
    SQL.Strings = (
      'SELECT * FROM EMPLOYEE')
    Left = 104
    Top = 112
  end
end
