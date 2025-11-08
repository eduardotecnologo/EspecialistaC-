object FrmModeloCadastro: TFrmModeloCadastro
  Left = 15
  Top = 16
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'FrmModeloCadastro'
  ClientHeight = 441
  ClientWidth = 826
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIChild
  Position = poMainFormCenter
  Visible = True
  OnClose = EvFecharFomularioClose
  TextHeight = 15
  object tlbCadastroModelo: TToolBar
    Left = 0
    Top = 412
    Width = 826
    Height = 29
    Align = alBottom
    ButtonHeight = 29
    ButtonWidth = 73
    Caption = 'tlbCadastroModelo'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -16
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowCaptions = True
    ShowHint = True
    TabOrder = 0
    Wrapable = False
    object btnNovo: TToolButton
      Left = 0
      Top = 0
      Caption = 'Novo'
      ImageIndex = 0
    end
    object btnPesquisar: TToolButton
      Left = 73
      Top = 0
      Caption = 'Pesquisar'
      ImageIndex = 1
    end
    object btnGravar: TToolButton
      Left = 146
      Top = 0
      Caption = 'Gravar'
      ImageIndex = 2
    end
    object ToolButton1: TToolButton
      Left = 219
      Top = 0
      Width = 38
      Caption = 'ToolButton1'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object btnExcluir: TToolButton
      Left = 257
      Top = 0
      Caption = 'Excluir'
      ImageIndex = 3
    end
    object ToolButton2: TToolButton
      Left = 330
      Top = 0
      Width = 39
      Caption = 'ToolButton2'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object btnCancelar: TToolButton
      Left = 369
      Top = 0
      Caption = 'Cancelar'
      ImageIndex = 4
    end
    object ToolButton3: TToolButton
      Left = 442
      Top = 0
      Width = 103
      Caption = 'ToolButton3'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object btnSair: TToolButton
      Left = 545
      Top = 0
      Caption = 'Sair'
      ImageIndex = 5
    end
  end
end
