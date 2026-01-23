//---------------------------------------------------------------------------

#ifndef UFrmCadastroVeiculoH
#define UFrmCadastroVeiculoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastro.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroVeiculo : public TFrmModeloCadastro
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroVeiculo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroVeiculo *FrmCadastroVeiculo;
//---------------------------------------------------------------------------
#endif
