object frmOpciones: TfrmOpciones
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Selecciones una opci'#243'n'
  ClientHeight = 187
  ClientWidth = 510
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  PixelsPerInch = 96
  TextHeight = 13
  object RadioGroup1: TRadioGroup
    Left = 8
    Top = 16
    Width = 361
    Height = 145
    Caption = 'Seleccione una opci'#243'n'
    ItemIndex = 0
    Items.Strings = (
      #191'Es C++Builder una excelente herramienta?'
      #191'Le permite C++Builder desarrollar rapidamente aplicaciones?'
      #191'Le gustar'#237'a soporte a todas plataforma que soporta Delphi?'
      #191'Alguna otra mas genial?')
    TabOrder = 0
  end
  object Button1: TButton
    Left = 384
    Top = 24
    Width = 110
    Height = 25
    Caption = 'Cerrar'
    ModalResult = 1
    TabOrder = 1
  end
end
