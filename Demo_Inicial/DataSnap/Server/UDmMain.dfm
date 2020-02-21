object DmMain: TDmMain
  OldCreateOrder = False
  Height = 368
  Width = 409
  object EmployeeConnection: TFDConnection
    Params.Strings = (
      'ConnectionDef=EMPLOYEE')
    Connected = True
    LoginPrompt = False
    Left = 57
    Top = 42
  end
  object CountryTable: TFDQuery
    Connection = EmployeeConnection
    SQL.Strings = (
      'SELECT * FROM COUNTRY')
    Left = 65
    Top = 122
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 200
    Top = 56
  end
  object FDStanStorageBinLink1: TFDStanStorageBinLink
    Left = 192
    Top = 144
  end
end
