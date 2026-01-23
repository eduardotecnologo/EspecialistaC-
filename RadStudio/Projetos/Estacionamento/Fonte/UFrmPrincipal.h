//---------------------------------------------------------------------------

#ifndef UFrmPrincipalH
#define UFrmPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TfrmPrincipal : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *mnmPrincipal;
	TMenuItem *Arquivo1;
	TMenuItem *Processo1;
	TMenuItem *Processo2;
	TMenuItem *Condutor1;
	TMenuItem *Montadora1;
	TMenuItem *Montadora2;
	TMenuItem *N1;
	TMenuItem *Veculo1;
	TMenuItem *Veculo2;
	TMenuItem *N2;
	TMenuItem *N3;
	TMenuItem *icket1;
	TMenuItem *Sair1;
	TMenuItem *Veculo3;
	TMenuItem *Permanncia1;
	void __fastcall EvEncerrarSistemaClick(TObject *Sender);
	void __fastcall EvAtivarCadastroCondutorClick(TObject *Sender);
	void __fastcall EvAtivarCadastroMontadorClick(TObject *Sender);
	void __fastcall EvCadastroVeiculoClick(TObject *Sender);
	void __fastcall EvAtivarCadastroTipoClick(TObject *Sender);
	void __fastcall EvAtivarCadastroModeloClick(TObject *Sender);
	void __fastcall EvSair(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TfrmPrincipal(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmPrincipal *frmPrincipal;
//---------------------------------------------------------------------------
#endif
