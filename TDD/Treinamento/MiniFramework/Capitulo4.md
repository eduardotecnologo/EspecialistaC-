Capítulo 4 – Primeiro Ciclo TDD Completo: EhPar(int n)
4.1 Objetivo
Aplicar TDD na veia em uma função simples:

Criar a função EhPar(int n) guiado por testes.
Vivenciar claramente o ciclo:
RED – escrever o teste antes da função existir (erro de compilação ou falha).
GREEN – implementar o mínimo necessário para o teste passar.
REFACTOR – melhorar o código com segurança, protegido pelos testes.
A ideia é treinar o processo mental do TDD, não a complexidade da função.

4.2 Situação inicial (final do Capítulo 3)
Nesse ponto do curso, temos:

Estrutura de pastas:

TESTTDDProject\
  TESTTDDProject.cbproj
  src\
    MathUtils.h
    MathUtils.cpp
  test\
    File1.cpp

Conteúdo do MathUtils:
// src/MathUtils.h
#ifndef MATHUTILS_H
#define MATHUTILS_H

int Soma(int a, int b);
// (EhPar ainda não existe ou está vazio)

#endif

// src/MathUtils.cpp
#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}

Mini framework de teste e teste da função Soma em test/File1.cpp:

// test/File1.cpp
#include <iostream>
#include "MathUtils.h"

void AssertIgual(int esperado, int obtido, const char* nomeTeste) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nomeTeste
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
    } else {
        std::cout << "[OK]      " << nomeTeste << std::endl;
    }
}

void TestaSoma_Basico() {
    AssertIgual(5, Soma(2, 3), "Soma_DoisMaisTresIgualCinco");
}

int main(int, char**) {
    std::cout << "Rodando testes..." << std::endl;

    TestaSoma_Basico();

    std::cout << "Fim dos testes." << std::endl;
    std::cout << "Pressione ENTER para sair..." << std::endl;
    std::cin.get();
    return 0;
}

Todos os testes atuais passam.

4.3 RED – Escrever o teste de EhPar antes da função existir
4.3.1 Definindo o comportamento desejado
Queremos que EhPar(int n):

Retorne 1 se o número for par.
Retorne 0 se o número for ímpar.
Testes mínimos:

EhPar(4) == 1 (número par).
EhPar(5) == 0 (número ímpar).
4.3.2 Escrevendo o teste em File1.cpp
No test/File1.cpp, logo abaixo de TestaSoma_Basico(), adicionamos:

void TestaEhPar() {
    // 4 é par
    AssertIgual(1, EhPar(4), "EhPar_QuatroEhPar");

    // 5 não é par
    AssertIgual(0, EhPar(5), "EhPar_CincoNaoEhPar");
}

E no main, passamos a rodar também esse teste:

int main(int, char**) {
    std::cout << "Rodando testes..." << std::endl;

    TestaSoma_Basico();
    TestaEhPar();   // <<< novo teste

    std::cout << "Fim dos testes." << std::endl;
    std::cout << "Pressione ENTER para sair..." << std::endl;
    std::cin.get();
    return 0;
}

4.3.3 Resultado ao compilar – estado RED
Ao compilar neste momento, esperam‑se erros, por exemplo:

'EhPar' was not declared in this scope
Ou similar, dependendo da versão.
Isso é proposital.
Você acabou de descrever o comportamento desejado antes de escrever a implementação.

Esse é o RED: o teste “reclama” que a funcionalidade ainda não existe.

Prática:
– Sempre que for criar uma função nova, tente primeiro escrever um teste simples que use essa função como você gostaria que ela existisse.
– Deixe o compilador te lembrar o que está faltando.

4.4 GREEN – Declarar e implementar o mínimo para passar os testes
4.4.1 Declarar a função em MathUtils.h
Agora vamos “ensinar” ao compilador que a função EhPar existe.

No arquivo src/MathUtils.h, acrescentar:

#ifndef MATHUTILS_H
#define MATHUTILS_H

int Soma(int a, int b);
int EhPar(int n);   // <<< nova declaração

#endif

4.4.2 Implementar a função em MathUtils.cpp
No arquivo src/MathUtils.cpp, implementar a função:

#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}

int EhPar(int n) {
    // Implementação mínima para passar os testes atuais
    return (n % 2 == 0) ? 1 : 0;
}

4.4.3 Compilar e executar novamente
Agora compile e rode:

Saída esperada:

Rodando testes...
[OK]      Soma_DoisMaisTresIgualCinco
[OK]      EhPar_QuatroEhPar
[OK]      EhPar_CincoNaoEhPar
Fim dos testes.
Pressione ENTER para sair...

Todos os testes passaram → entramos no estado GREEN.

Observação importante:
A implementação é simples, mas já é correta para nossos testes.
Se, amanhã, quisermos suportar outro comportamento (ex.: números negativos, limites, etc.), vamos primeiro escrever novos testes para esses casos.

4.5 Ampliando os testes de EhPar
Para treinar melhor, vamos adicionar mais cenários:

EhPar(0) → 1 (zero é considerado par).
EhPar(-2) → 1 (par negativo).
EhPar(-3) → 0 (ímpar negativo).
Atualize TestaEhPar():

void TestaEhPar() {
    // Casos básicos
    AssertIgual(1, EhPar(4),  "EhPar_QuatroEhPar");
    AssertIgual(0, EhPar(5),  "EhPar_CincoNaoEhPar");

    // Casos adicionais
    AssertIgual(1, EhPar(0),  "EhPar_ZeroEhPar");
    AssertIgual(1, EhPar(-2), "EhPar_MenosDoisEhPar");
    AssertIgual(0, EhPar(-3), "EhPar_MenosTresNaoEhPar");
}

Compile e execute:

Se todos passarem, sua implementação de EhPar já cobre bem os cenários.
Se algum falhar, ajuste a implementação até ficar GREEN novamente.
No nosso caso, a implementação com % 2 == 0 já cobre esses cenários.

4.6 REFACTOR – Melhorando o design com segurança
Agora que os testes validam o comportamento, podemos melhorar o código sem medo.

4.6.1 Mudando o tipo de retorno para bool
Em vez de retornar int (1/0), vamos usar um tipo mais expressivo: bool.

Atualizar a declaração em MathUtils.h: