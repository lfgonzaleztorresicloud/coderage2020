object CoderageResource1: TCoderageResource1
  OldCreateOrder = False
  Height = 300
  Width = 600
  object FDConnection1: TFDConnection
    Params.Strings = (
      'ConnectionDef=EMPLOYEE')
    LoginPrompt = False
    Left = 30
    Top = 16
  end
  object qryCOUNTRY: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from COUNTRY')
    Left = 130
    Top = 16
  end
  object dsrCOUNTRY: TEMSDataSetResource
    AllowedActions = [List, Get, Post, Put, Delete]
    DataSet = qryCOUNTRY
    Left = 130
    Top = 96
  end
  object qryCUSTOMER: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from CUSTOMER')
    Left = 230
    Top = 16
  end
  object dsrCUSTOMER: TEMSDataSetResource
    AllowedActions = [List, Get, Post, Put, Delete]
    DataSet = qryCUSTOMER
    Left = 230
    Top = 96
  end
  object qryEMPLOYEE: TFDQuery
    Connection = FDConnection1
    SQL.Strings = (
      'select * from EMPLOYEE')
    Left = 330
    Top = 16
  end
  object dsrEMPLOYEE: TEMSDataSetResource
    AllowedActions = [List, Get, Post, Put, Delete]
    DataSet = qryEMPLOYEE
    Left = 330
    Top = 96
  end
end
