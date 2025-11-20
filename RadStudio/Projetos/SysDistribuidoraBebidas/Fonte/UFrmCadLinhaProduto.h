//---------------------------------------------------------------------------

#ifndef UFrmCadLinhaProdutoH
#define UFrmCadLinhaProdutoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastro.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmCadLinhaProduto : public TFrmModeloCadastro
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadLinhaProduto(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadLinhaProduto *FrmCadLinhaProduto;
//---------------------------------------------------------------------------
#endif
