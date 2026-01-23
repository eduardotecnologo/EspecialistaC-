//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroVeiculo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadastroVeiculo *FrmCadastroVeiculo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroVeiculo::TFrmCadastroVeiculo(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
