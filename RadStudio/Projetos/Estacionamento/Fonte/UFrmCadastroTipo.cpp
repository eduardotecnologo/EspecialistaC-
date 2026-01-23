//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadastroTipo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadastroTipo *FrmCadastroTipo;
//---------------------------------------------------------------------------
__fastcall TFrmCadastroTipo::TFrmCadastroTipo(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
