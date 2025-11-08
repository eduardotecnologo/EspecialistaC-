//---------------------------------------------------------------------------

#ifndef UFrmModeloCadastroH
#define UFrmModeloCadastroH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmModeloCadastro : public TForm
{
__published:	// IDE-managed Components
	TToolBar *tlbCadastroModelo;
	TToolButton *btnNovo;
	TToolButton *btnPesquisar;
	TToolButton *btnGravar;
	TToolButton *ToolButton1;
	TToolButton *btnExcluir;
	TToolButton *ToolButton2;
	TToolButton *btnCancelar;
	TToolButton *ToolButton3;
	TToolButton *btnSair;
	void __fastcall EvFecharFomularioClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFrmModeloCadastro(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmModeloCadastro *FrmModeloCadastro;
//---------------------------------------------------------------------------
#endif
