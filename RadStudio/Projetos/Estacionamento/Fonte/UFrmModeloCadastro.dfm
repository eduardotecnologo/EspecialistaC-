object FrmModeloCadastro: TFrmModeloCadastro
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Formul'#225'rio Modelo de Cadastro'
  ClientHeight = 584
  ClientWidth = 1257
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Segoe UI'
  Font.Style = []
  FormStyle = fsMDIChild
  Position = poMainFormCenter
  Visible = True
  OnClose = EvFecharFormularioClose
  TextHeight = 21
  object tlbToolbarCadastroModelo: TToolBar
    Left = 0
    Top = 555
    Width = 1257
    Height = 29
    Align = alBottom
    ButtonHeight = 29
    ButtonWidth = 73
    Caption = 'tlbToolbarCadastroModelo'
    ShowCaptions = True
    TabOrder = 0
    Wrapable = False
    ExplicitTop = 606
    ExplicitWidth = 1245
    object btnCriar: TToolButton
      Left = 0
      Top = 0
      Caption = 'Novo'
      ImageIndex = 0
    end
    object ToolButton1: TToolButton
      Left = 73
      Top = 0
      Width = 8
      Caption = 'ToolButton1'
      ImageIndex = 1
      Style = tbsSeparator
    end
    object btnPesquisar: TToolButton
      Left = 81
      Top = 0
      Caption = 'Pesquisar'
      ImageIndex = 1
    end
    object ToolButton2: TToolButton
      Left = 154
      Top = 0
      Width = 8
      Caption = 'ToolButton2'
      ImageIndex = 2
      Style = tbsSeparator
    end
    object btnGravar: TToolButton
      Left = 162
      Top = 0
      Caption = 'Gravar'
      ImageIndex = 2
    end
    object ToolButton3: TToolButton
      Left = 235
      Top = 0
      Width = 8
      Caption = 'ToolButton3'
      ImageIndex = 3
      Style = tbsSeparator
    end
    object btnExcluir: TToolButton
      Left = 243
      Top = 0
      Caption = 'Excluir'
      ImageIndex = 3
    end
    object ToolButton4: TToolButton
      Left = 316
      Top = 0
      Width = 8
      Caption = 'ToolButton4'
      ImageIndex = 4
      Style = tbsSeparator
    end
    object btnCancelar: TToolButton
      Left = 324
      Top = 0
      Caption = 'Cancelar'
      ImageIndex = 4
    end
    object ToolButton5: TToolButton
      Left = 397
      Top = 0
      Width = 780
      Caption = 'ToolButton5'
      ImageIndex = 5
      Style = tbsSeparator
    end
    object btnSair: TToolButton
      Left = 1177
      Top = 0
      Caption = 'Sair'
      ImageIndex = 5
      OnClick = EvSairFormulario
    end
  end
end
