//---------------------------------------------------------------------------

#ifndef UFrmCadVendedorH
#define UFrmCadVendedorH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UFrmModeloCadastro.h"
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ToolWin.hpp>
//---------------------------------------------------------------------------
class TFrmCadVendedor : public TFrmModeloCadastro
{
__published:	// IDE-managed Components
private:	// User declarations
public:		// User declarations
	__fastcall TFrmCadVendedor(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrmCadVendedor *FrmCadVendedor;
//---------------------------------------------------------------------------
#endif
