//---------------------------------------------------------------------------

#pragma hdrstop

#include "File1.h"
#include "MathUtils.h"
#include <iostream>
//---------------------------------------------------------------------------
#pragma package(smart_init)

using namespace std;

void AssertIgual(int esperado, int obtido, const char* nomeTeste)
{
   if(esperado != obtido)
   {
     cout << "[FALHOU] " << nomeTeste
               << " | esperado: " << esperado
               << " obtido: " << obtido << endl;
   }
   else
   {
     cout << " [OK]    " << nomeTeste << endl;
   }
}

void TestaSoma_Basico()
{
    //AssertIgual(5, Soma(3,2), "TestaSoma_Basico");
    AssertIgual(5,Soma(2,4), "Soma_DoisMaisTresIgualCinco");
}

void TestaSoma_ComNegativos()
{
    AssertIgual(5,Soma(2,3), "Soma_DoisComMenosTresIgualMenosUm");
}

void AssertIgualBool(bool esperado, bool obtido, const char* nomeTeste)
{
    if(esperado != obtido)
    {
      cout << "[FALHOU] "     << nomeTeste
           << " | esperado: " << esperado
           << " obtido "      << obtido << endl;
    }
    else
    {
      cout << "[OK] "         << nomeTeste << endl;
    }
}


void TestaEhPar() {
    AssertIgualBool(true,  EhPar(4),  "EhPar_QuatroEhPar");
    AssertIgualBool(false, EhPar(5),  "EhPar_CincoNaoEhPar");
    AssertIgualBool(true,  EhPar(0),  "EhPar_ZeroEhPar");
    AssertIgualBool(true,  EhPar(-2), "EhPar_MenosDoisEhPar");
    AssertIgualBool(false, EhPar(-3), "EhPar_MenosTresNaoEhPar");
}

int main(int, char**)
{
  cout << "Rodando testes...\n";
  TestaSoma_Basico();
  TestaSoma_ComNegativos();
  TestaEhPar();

  std::cout << "Fim dos testes.\n";

  std::cout << "Pressione ENTER para sair..." << std::endl;
  std::cin.get();
  return 0;
}