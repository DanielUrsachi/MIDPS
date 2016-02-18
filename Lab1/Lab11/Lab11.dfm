object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'MIDPS 1- A'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 216
    Top = 40
    Width = 281
    Height = 25
    Caption = 'Incrementare decrementare contor.'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -21
    Font.Name = 'Poor Richard'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 200
    Top = 79
    Width = 419
    Height = 18
    Caption = 'sensului de varia'#355'ie a variabilei i din caseta Edit1'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object up: TBitBtn
    Left = 88
    Top = 104
    Width = 75
    Height = 25
    Caption = 'up'
    TabOrder = 0
    OnClick = upClick
  end
  object down: TBitBtn
    Left = 88
    Top = 160
    Width = 75
    Height = 25
    Caption = 'down'
    TabOrder = 1
    OnClick = downClick
  end
  object exit: TBitBtn
    Left = 456
    Top = 208
    Width = 75
    Height = 25
    Caption = 'exit'
    TabOrder = 2
    OnClick = exitClick
  end
  object Edit1: TEdit
    Left = 216
    Top = 136
    Width = 121
    Height = 21
    TabOrder = 3
    OnChange = Edit1Change
  end
end
