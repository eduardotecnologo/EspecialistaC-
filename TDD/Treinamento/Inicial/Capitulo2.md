...existing code...
# Capítulo 2 – Estrutura do Projeto e Primeiros Testes TDD

## 2.1 Objetivo

- Organizar o código em `src` e os testes em `tests`.
- Escrever o primeiro teste automatizado para a função `Soma` usando um test runner mínimo.
- Mostrar como compilar e executar os testes (g++ e observações para C++ Builder).

## 2.2 Estrutura recomendada

- `src/`
  - `soma.h`
  - `soma.cpp`
- `tests/`
  - `test_soma.cpp`
- (opcional) `Makefile` ou projeto do C++ Builder

## 2.3 Código de exemplo

Arquivo: src/soma.h

```cpp
#pragma once

int Soma(int a, int b);
```

Arquivo: src/soma.cpp

```cpp
#include "soma.h"

int Soma(int a, int b) {
    return a + b;
}
```

Arquivo: tests/test_soma.cpp (test runner mínimo)

```cpp
#include <iostream>
#include "soma.h"

static int g_fail_count = 0;

void AssertEqual(int esperado, int obtido, const char* nome) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nome
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
        ++g_fail_count;
    } else {
        std::cout << "[OK]      " << nome << std::endl;
    }
}

void Test_Soma_Basico() {
    AssertEqual(5, Soma(2, 3), "Test_Soma_Basico");
}

int main() {
    std::cout << "Rodando testes..." << std::endl;

    Test_Soma_Basico();

    std::cout << "Fim dos testes." << std::endl;
    return g_fail_count == 0 ? 0 : 1;
}
```

## 2.4 Compilar e executar

Com g++ (no terminal do VS Code):

```
g++ -Isrc src/soma.cpp tests/test_soma.cpp -o run_tests
.\run_tests
```

Com C++ Builder:
- Criar projeto Console Application.
- Adicionar `soma.h`, `soma.cpp` e `test_soma.cpp` ao projeto.
- Definir `test_soma.cpp` como unidade com `main` (substitui o File1.cpp).
- Build e Run.

## 2.5 Ciclo TDD (resumo rápido)

1. Escrever um teste que falhe.
2. Implementar o mínimo de código em `src` para passar.
3. Refatorar mantendo os testes verdes.
4. Repetir.

...existing code...