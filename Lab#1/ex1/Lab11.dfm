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
    Width = 275
    Height = 24
    Hint = 'Hint la textul rosu!'
    Caption = 'Incrementare decrementare contor.'
    Font.Charset = ANSI_CHARSET
    Font.Color = clRed
    Font.Height = -21
    Font.Name = 'Poor Richard'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 200
    Top = 79
    Width = 100
    Height = 18
    Hint = 'Hint la text!'
    Caption = 'MIDPS 1- A'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Verdana'
    Font.Style = [fsBold]
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object up: TBitBtn
    Left = 88
    Top = 104
    Width = 75
    Height = 25
    Hint = '++'
    Caption = 'up'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = upClick
  end
  object down: TBitBtn
    Left = 88
    Top = 160
    Width = 75
    Height = 25
    Hint = '--'
    Caption = 'down'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = downClick
  end
  object exit: TBitBtn
    Left = 456
    Top = 208
    Width = 75
    Height = 25
    Hint = 'Iesire din program'
    Caption = 'exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = exitClick
  end
  object Edit1: TEdit
    Left = 216
    Top = 136
    Width = 121
    Height = 21
    Hint = 'valoarea curenta'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnChange = Edit1Change
  end
end
