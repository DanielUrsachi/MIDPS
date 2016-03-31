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
    Left = 416
    Top = 24
    Width = 92
    Height = 13
    Hint = 'text'
    Caption = 'Data si ora curenta'
    ParentShowHint = False
    ShowHint = True
  end
  object Label2: TLabel
    Left = 416
    Top = 83
    Width = 143
    Height = 23
    Hint = 'text mai mare'
    Caption = 'Resursele grafice'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object PaintBox1: TPaintBox
    Left = 464
    Top = 130
    Width = 131
    Height = 131
    Hint = 'diagrama)'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
  end
  object Start: TBitBtn
    Left = 64
    Top = 128
    Width = 75
    Height = 25
    Hint = 'Porneste Timerul resetat'
    Caption = 'Start'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    OnClick = StartClick
  end
  object Stop: TBitBtn
    Left = 64
    Top = 159
    Width = 75
    Height = 25
    Hint = 'Oprire'
    Caption = 'Stop'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    OnClick = StopClick
  end
  object Exit: TBitBtn
    Left = 64
    Top = 216
    Width = 75
    Height = 25
    Hint = 'ajunge! iesi'
    Caption = 'Exit'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnClick = ExitClick
  end
  object Edit1: TEdit
    Left = 416
    Top = 43
    Width = 121
    Height = 21
    Hint = 'Ceas'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    Text = 'Edit1'
  end
  object Panel1: TPanel
    Left = 360
    Top = 128
    Width = 60
    Height = 129
    Hint = 'Baragraf'
    Color = clBackground
    ParentBackground = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
    object Panel2: TPanel
      Left = 0
      Top = 0
      Width = 65
      Height = 60
      Hint = 
        'Sectiune a baragrafului ce arata valoarea x intr-o unitate de ti' +
        'mp'
      Color = clSilver
      ParentBackground = False
      TabOrder = 0
    end
  end
  object Continue: TBitBtn
    Left = 145
    Top = 128
    Width = 75
    Height = 25
    Hint = 'Continuare fara a reseta Timer-ul'
    Caption = 'Continue'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 5
    OnClick = ContinueClick
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 256
    Top = 64
  end
  object Timer2: TTimer
    Interval = 500
    OnTimer = Timer2Timer
    Left = 256
    Top = 128
  end
end
