//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmModeloCadastro.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrmModeloCadastro *FrmModeloCadastro;
//---------------------------------------------------------------------------
__fastcall TFrmModeloCadastro::TFrmModeloCadastro(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFrmModeloCadastro::EvFecharFormularioClose(TObject *Sender, TCloseAction &Action)

{
     Action = caFree;
}
//---------------------------------------------------------------------------

void __fastcall TFrmModeloCadastro::EvSairFormulario(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------

