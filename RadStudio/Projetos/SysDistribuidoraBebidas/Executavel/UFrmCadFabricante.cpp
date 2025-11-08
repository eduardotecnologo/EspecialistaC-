//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UFrmCadFabricante.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "UFrmModeloCadastro"
#pragma resource "*.dfm"
TFrmCadFabricante *FrmCadFabricante;
//---------------------------------------------------------------------------
__fastcall TFrmCadFabricante::TFrmCadFabricante(TComponent* Owner)
	: TFrmModeloCadastro(Owner)
{

}
//---------------------------------------------------------------------------
