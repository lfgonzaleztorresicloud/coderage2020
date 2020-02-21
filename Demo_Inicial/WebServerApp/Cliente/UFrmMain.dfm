object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 289
  ClientWidth = 554
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 16
    Top = 24
    Width = 369
    Height = 225
    DataSource = DataSource1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object Button1: TButton
    Left = 400
    Top = 24
    Width = 129
    Height = 25
    Caption = 'Obtener Datos'
    TabOrder = 1
    OnClick = Button1Click
  end
  object RESTClient1: TRESTClient
    Accept = 'application/json, text/plain; q=0.9, text/html;q=0.8,'
    AcceptCharset = 'utf-8, *;q=0.8'
    BaseURL = 'http://localhost:8080/employees'
    Params = <>
    RaiseExceptionOn500 = False
    Left = 40
    Top = 32
  end
  object RESTRequest1: TRESTRequest
    Client = RESTClient1
    Params = <>
    Response = RESTResponse1
    SynchronizedEvents = False
    Left = 40
    Top = 96
  end
  object RESTResponse1: TRESTResponse
    ContentType = 'text/html'
    Left = 40
    Top = 168
  end
  object DataSource1: TDataSource
    DataSet = FDMemTable1
    Left = 208
    Top = 104
  end
  object FDMemTable1: TFDMemTable
    Active = True
    FieldDefs = <
      item
        Name = 'emp_no'
        DataType = ftInteger
      end
      item
        Name = 'first_name'
        DataType = ftString
        Size = 20
      end
      item
        Name = 'last_name'
        DataType = ftString
        Size = 20
      end>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode]
    FetchOptions.Mode = fmAll
    ResourceOptions.AssignedValues = [rvSilentMode]
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvCheckRequired, uvAutoCommitUpdates]
    UpdateOptions.CheckRequired = False
    UpdateOptions.AutoCommitUpdates = True
    StoreDefs = True
    Left = 448
    Top = 224
    object FDMemTable1emp_no: TIntegerField
      FieldName = 'emp_no'
    end
    object FDMemTable1first_name: TStringField
      FieldName = 'first_name'
    end
    object FDMemTable1last_name: TStringField
      FieldName = 'last_name'
    end
  end
  object RESTResponseDataSetAdapter1: TRESTResponseDataSetAdapter
    Active = True
    Dataset = FDMemTable1
    FieldDefs = <>
    Response = RESTResponse1
    Left = 240
    Top = 176
  end
end
