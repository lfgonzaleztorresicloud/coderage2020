object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 227
  ClientWidth = 294
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabeledEdit1: TLabeledEdit
    Left = 24
    Top = 40
    Width = 121
    Height = 21
    EditLabel.Width = 57
    EditLabel.Height = 13
    EditLabel.Caption = 'Operando 1'
    TabOrder = 0
  end
  object LabeledEdit2: TLabeledEdit
    Left = 24
    Top = 100
    Width = 121
    Height = 21
    EditLabel.Width = 57
    EditLabel.Height = 13
    EditLabel.Caption = 'Operando 2'
    TabOrder = 1
  end
  object Button1: TButton
    Left = 184
    Top = 38
    Width = 75
    Height = 25
    Caption = 'Sumar'
    TabOrder = 2
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 184
    Top = 77
    Width = 75
    Height = 25
    Caption = 'Restar'
    TabOrder = 3
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 184
    Top = 116
    Width = 75
    Height = 25
    Caption = 'Multiplicar'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 184
    Top = 158
    Width = 75
    Height = 25
    Caption = 'Dividir'
    TabOrder = 5
    OnClick = Button4Click
  end
  object LabeledEdit3: TLabeledEdit
    Left = 24
    Top = 152
    Width = 121
    Height = 21
    EditLabel.Width = 48
    EditLabel.Height = 13
    EditLabel.Caption = 'Resultado'
    TabOrder = 6
  end
end
