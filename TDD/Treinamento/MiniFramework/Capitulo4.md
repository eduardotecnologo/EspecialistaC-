...existing code...
# Capítulo 4 – Primeiro Ciclo TDD Completo: EhPar(int n)

## 4.1 Objetivo

- Aplicar TDD criando a função `EhPar(int n)` guiado por testes.
- Vivenciar o ciclo RED → GREEN → REFACTOR em prática.
- Priorizar o processo TDD, não a complexidade da função.

## 4.2 Situação inicial (final do Capítulo 3)

Estrutura do projeto:

- TESTTDDProject/
  - TESTTDDProject.cbproj
  - src/
    - MathUtils.h
    - MathUtils.cpp
  - test/
    - File1.cpp

Conteúdo atual (exemplos):

// src/MathUtils.h
```cpp
#ifndef MATHUTILS_H
#define MATHUTILS_H

int Soma(int a, int b);
// (EhPar ainda não existe ou está vazia)

#endif
```

// src/MathUtils.cpp
```cpp
#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}
```

// test/File1.cpp (mini framework)
```cpp
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
```

## 4.3 RED — escrever o teste antes da função

1. Definir comportamento:
   - `EhPar(n)` retorna `1` se par, `0` se ímpar (inicialmente).
   - Testes mínimos: `EhPar(4) == 1`, `EhPar(5) == 0`.

2. Adicionar teste em `test/File1.cpp`:
```cpp
void TestaEhPar() {
    AssertIgual(1, EhPar(4), "EhPar_QuatroEhPar");
    AssertIgual(0, EhPar(5), "EhPar_CincoNaoEhPar");
}
```

3. Incluir chamada no `main()`:
```cpp
TestaSoma_Basico();
TestaEhPar(); // <<< novo teste
```

Resultado: ao compilar, o compilador deve reclamar que `EhPar` não foi declarada — isso é o RED.

## 4.4 GREEN — implementar o mínimo para passar

1. Declarar em `src/MathUtils.h`:
```cpp
int Soma(int a, int b);
int EhPar(int n); // nova declaração
```

2. Implementar em `src/MathUtils.cpp`:
```cpp
#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}

int EhPar(int n) {
    return (n % 2 == 0) ? 1 : 0; // implementação mínima
}
```

3. Compilar e executar — saída esperada:
```
Rodando testes...
[OK]      Soma_DoisMaisTresIgualCinco
[OK]      EhPar_QuatroEhPar
[OK]      EhPar_CincoNaoEhPar
Fim dos testes.
Pressione ENTER para sair...
```

## 4.5 Ampliando os testes de EhPar

Adicionar casos adicionais em `TestaEhPar()`:

```cpp
AssertIgual(1, EhPar(0),  "EhPar_ZeroEhPar");
AssertIgual(1, EhPar(-2), "EhPar_MenosDoisEhPar");
AssertIgual(0, EhPar(-3), "EhPar_MenosTresNaoEhPar");
```

Compilar e ajustar implementação até ficar GREEN.

## 4.6 REFACTOR — melhorar com segurança

Mudar retorno para `bool` para maior expressividade.

1. Atualizar `src/MathUtils.h`:
```cpp
int  Soma(int a, int b);
bool EhPar(int n);
```

2. Atualizar `src/MathUtils.cpp`:
```cpp
#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}

bool EhPar(int n) {
    return (n % 2) == 0;
}
```

3. Ajustar testes: criar `AssertIgualBool` e usar `true/false`:

```cpp
void AssertIgualBool(bool esperado, bool obtido, const char* nomeTeste) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nomeTeste
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
    } else {
        std::cout << "[OK]      " << nomeTeste << std::endl;
    }
}

void TestaEhPar() {
    AssertIgualBool(true,  EhPar(4),  "EhPar_QuatroEhPar");
    AssertIgualBool(false, EhPar(5),  "EhPar_CincoNaoEhPar");
    AssertIgualBool(true,  EhPar(0),  "EhPar_ZeroEhPar");
    AssertIgualBool(true,  EhPar(-2), "EhPar_MenosDoisEhPar");
    AssertIgualBool(false, EhPar(-3), "EhPar_MenosTresNaoEhPar");
}
```

Compilar e verificar que todos os testes continuam [OK].

## 4.7 Código consolidado (exemplo final)

// src/MathUtils.h
```cpp
#ifndef MATHUTILS_H
#define MATHUTILS_H

int  Soma(int a, int b);
bool EhPar(int n);

#endif
```

// src/MathUtils.cpp
```cpp
#include "MathUtils.h"

int Soma(int a, int b) {
    return a + b;
}

bool EhPar(int n) {
    return (n % 2) == 0;
}
```

// test/File1.cpp
```cpp
#include <iostream>
#include "MathUtils.h"

// Asserções
void AssertIgual(int esperado, int obtido, const char* nomeTeste) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nomeTeste
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
    } else {
        std::cout << "[OK]      " << nomeTeste << std::endl;
    }
}

void AssertIgualBool(bool esperado, bool obtido, const char* nomeTeste) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nomeTeste
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
    } else {
        std::cout << "[OK]      " << nomeTeste << std::endl;
    }
}

// Testes
void TestaSoma_Basico() {
    AssertIgual(5, Soma(2, 3), "Soma_DoisMaisTresIgualCinco");
}

void TestaEhPar() {
    AssertIgualBool(true,  EhPar(4),  "EhPar_QuatroEhPar");
    AssertIgualBool(false, EhPar(5),  "EhPar_CincoNaoEhPar");
    AssertIgualBool(true,  EhPar(0),  "EhPar_ZeroEhPar");
    AssertIgualBool(true,  EhPar(-2), "EhPar_MenosDoisEhPar");
    AssertIgualBool(false, EhPar(-3), "EhPar_MenosTresNaoEhPar");
}

// Runner
int main(int, char**) {
    std::cout << "Rodando testes..." << std::endl;

    TestaSoma_Basico();
    TestaEhPar();

    std::cout << "Fim dos testes." << std::endl;
    std::cout << "Pressione ENTER para sair..." << std::endl;
    std::cin.get();
    return 0;
}
```

## 4.8 Exercícios práticos sugeridos

- Fatorial(int n): escreva testes (0,1,5) e implemente.
- MaximoDeTres(int a, int b, int c): cubra vários casos.
- Mais casos para `EhPar`: números grandes, combinação com `Soma`.

## 4.9 O que você aprendeu

- Escrever testes antes da implementação (RED).
- Implementar o mínimo que faça os testes passarem (GREEN).
- Refatorar com segurança apoiado pelos testes.
- Como aplicar o ciclo TDD em funções simples e escalar a prática.

...existing code...