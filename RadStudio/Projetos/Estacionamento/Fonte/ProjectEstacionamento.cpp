//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
USEFORM("UFrmPrincipal.cpp", frmPrincipal);
USEFORM("UFrmModeloCadastro.cpp", FrmModeloCadastro);
USEFORM("UFrmCadastroCondutor.cpp", FrmCadastroCondutor);
USEFORM("UFrmCadastroMontadora.cpp", FrmCadastroMontadora);
USEFORM("UFrmCadastroDeModelo.cpp", FrmCadastroDeModelo);
USEFORM("UFrmCadastroVeiculo.cpp", FrmCadastroVeiculo);
USEFORM("UFrmCadastroTipo.cpp", FrmCadastroTipo);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		Application->CreateForm(__classid(TfrmPrincipal), &frmPrincipal);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
