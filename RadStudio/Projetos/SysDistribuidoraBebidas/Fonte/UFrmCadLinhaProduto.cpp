//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadLinhaProduto.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadLinhaProduto *FrmCadLinhaProduto;
//---------------------------------------------------------------------------
__fastcall TFrmCadLinhaProduto::TFrmCadLinhaProduto(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
