//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroDeModelo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadastroDeModelo *FrmCadastroDeModelo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroDeModelo::TFrmCadastroDeModelo(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
