...existing code...
# Capítulo 3 – Mini Framework de Teste (Assert e Runner)

## 3.1 Objetivo

- Transformar o File1.cpp em um mini framework de testes:
  - Função de asserção reutilizável.
  - Vários testes independentes.
  - Um "runner" que executa todos os testes e mostra o resultado.
- Criar base para, no futuro, trocar esse mini framework por um real (GoogleTest/CppUnit) sem mudar a organização do código.

## 3.2 O que é um "mini framework" de teste?

Um framework de teste simples precisa de:

- Uma forma de verificar resultados (ex.: AssertIgual).
- Um local central que execute todos os testes (o main).
- Um relatório mínimo indicando pass/fail.

Neste capítulo vamos implementar isso manualmente em test/File1.cpp.

## 3.3 Design adotado

Convenições:

- Cada teste é uma função `void` sem parâmetros:
  - Ex.: `void TestaSoma_Basico();`
  - Ex.: `void TestaEhPar();`
- Asserção principal:
  - `void AssertIgual(int esperado, int obtido, const char* nomeTeste);`
- O `main` é o test runner:
  - Chama todas as funções de teste.
  - Mostra mensagens no console.

Futuras extensões possíveis: `AssertIgualBool`, `AssertVerdadeiro`, contagem de testes, sumarização.

## 3.4 Implementação da asserção

Exemplo de função de asserção em `test/File1.cpp`:

```cpp
#include <iostream>
#include "MathUtils.h"

// Função de asserção genérica para int
void AssertIgual(int esperado, int obtido, const char* nomeTeste) {
    if (esperado != obtido) {
        std::cout << "[FALHOU] " << nomeTeste
                  << " | esperado: " << esperado
                  << " obtido: "   << obtido << std::endl;
    } else {
        std::cout << "[OK]      " << nomeTeste << std::endl;
    }
}
```

- `nomeTeste` descreve o comportamento testado (ex.: `"Soma_DoisMaisTresIgualCinco"`).
- Em caso de falha, mostramos esperado vs obtido.

## 3.5 Definição dos testes

### 3.5.1 Testes para `Soma(int a, int b)`

```cpp
void TestaSoma_Basico() {
    AssertIgual(5, Soma(2, 3), "Soma_DoisMaisTresIgualCinco");
}

void TestaSoma_ComNegativos() {
    AssertIgual(-1, Soma(2, -3), "Soma_DoisComMenosTresIgualMenosUm");
}
```

### 3.5.2 Testes para `EhPar(int n)` (prévia)

Será desenvolvido no Capítulo 4, exemplo de formato:

```cpp
void TestaEhPar() {
    AssertIgual(1, EhPar(4), "EhPar_QuatroEhPar");
    AssertIgual(0, EhPar(5), "EhPar_CincoNaoEhPar");
}
```

## 3.6 Implementação do Test Runner (main)

Estrutura mínima do runner:

```cpp
int main(int, char**) {
    std::cout << "Rodando testes..." << std::endl;

    // Lista de testes
    TestaSoma_Basico();
    // TestaSoma_ComNegativos();  // opcional
    // TestaEhPar();              // será usado no Capítulo 4

    std::cout << "Fim dos testes." << std::endl;
    std::cout << "Pressione ENTER para sair..." << std::endl;
    std::cin.get();
    return 0;
}
```

- Cada novo teste é apenas adicionado ao `main`.
- Saída clara com `[OK]` e `[FALHOU]`.

## 3.7 Exemplo completo consolidado (test/File1.cpp)

```cpp
#include <iostream>
#include "MathUtils.h"

// Mini framework de asserção
void AssertIgual(int esperado, int obtido, const char* nomeTeste) {
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

// Runner
int main(int, char**) {
    std::cout << "Rodando testes..." << std::endl;

    TestaSoma_Basico();
    // TestaEhPar();  // será ativado no Capítulo 4

    std::cout << "Fim dos testes." << std::endl;
    std::cout << "Pressione ENTER para sair..." << std::endl;
    std::cin.get();
    return 0;
}
```

Saída esperada:

```
Rodando testes...
[OK]      Soma_DoisMaisTresIgualCinco
Fim dos testes.
Pressione ENTER para sair...
```

## 3.8 Boas práticas introduzidas

- Nomes descritivos para testes.
- Separação clara: `src` para produção, `test` para testes.
- Um único ponto de entrada (`main`) para execução.
- Saída legível com distinção entre sucesso e falha.

## 3.9 Próximo passo

Capítulo 4: realizar ciclo TDD completo com `EhPar(int n)`:
- RED: escrever teste primeiro.
- GREEN: implementar mínimo para passar.
- REFACTOR: melhorar código mantendo testes verdes.

...existing code...