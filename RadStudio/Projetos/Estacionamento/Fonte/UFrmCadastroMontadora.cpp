//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroMontadora.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadastroMontadora *FrmCadastroMontadora;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroMontadora::TFrmCadastroMontadora(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
