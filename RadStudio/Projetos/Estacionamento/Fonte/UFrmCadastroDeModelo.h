//---------------------------------------------------------------------------

#ifndef UFrmCadastroDeModeloH
#define UFrmCadastroDeModeloH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastro.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmCadastroDeModelo : public TFrmModeloCadastro
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadastroDeModelo(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadastroDeModelo *FrmCadastroDeModelo;
//---------------------------------------------------------------------------
#endif
