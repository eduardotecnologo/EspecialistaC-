//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadVendedor.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadVendedor *FrmCadVendedor;
//---------------------------------------------------------------------------
__fastcall TFrmCadVendedor::TFrmCadVendedor(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{
}
//---------------------------------------------------------------------------
