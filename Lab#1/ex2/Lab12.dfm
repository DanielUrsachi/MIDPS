object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'MIDPS'
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
    Left = 306
    Top = 24
    Width = 274
    Height = 18
    Hint = 'Hnt la titlul'
    Caption = 'Realizarea unui cronometru in C++ Builder'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clRed
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 431
    Top = 125
    Width = 149
    Height = 19
    Hint = 'iarasi hint!!!!!'
    Caption = 'C++ Builder cronometru'
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clBlack
    Font.Height = -16
    Font.Name = 'Times New Roman'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object b1: TBitBtn
    Left = 88
    Top = 96
    Width = 75
    Height = 25
    Hint = 'StartTimer'
    Caption = 'Start'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = b1Click
  end
  object b2: TBitBtn
    Left = 88
    Top = 136
    Width = 75
    Height = 25
    Hint = 'StopTimer'
    Caption = 'Stop'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = b2Click
  end
  object b3: TBitBtn
    Left = 88
    Top = 184
    Width = 75
    Height = 25
    Hint = 'TimerNull'
    Caption = 'Zero'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = b3Click
  end
  object Exit: TBitBtn
    Left = 480
    Top = 224
    Width = 75
    Height = 25
    Hint = 'CloseProgram'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = ExitClick
  end
  object Edit1: TEdit
    Left = 450
    Top = 64
    Width = 121
    Height = 21
    Hint = 'TraiesteAcestMoment'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
    Text = 'Edit1'
  end
  object Edit2: TEdit
    Left = 450
    Top = 162
    Width = 121
    Height = 21
    Hint = 'SuntFunctieIterativa'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 5
    Text = 'Edit2'
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 248
    Top = 64
  end
  object Timer2: TTimer
    Interval = 100
    OnTimer = Timer2Timer
    Left = 248
    Top = 168
  end
end
