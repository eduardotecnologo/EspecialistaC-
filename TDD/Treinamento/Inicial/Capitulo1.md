...existing code...
# Capítulo 1 – Preparando o Ambiente e Criando o Primeiro Projeto

## 1.1 Objetivo

- Configurar um projeto console no C++ Builder.
- Rodar o primeiro teste simples em TDD: função `Soma(int a, int b)` testada no `main`.

## 1.2 Criar o projeto console

1. Abrir o C++ Builder.
2. File > New > Console Application (C++Builder).
3. Escolher C++ (32‑bit Windows), sem VCL.
4. Salvar o projeto em uma pasta, por exemplo:
   - `...\TDD\TESTTDDProject\`

Arquivos gerados principais:

- `TESTTDDProject.cbproj` – definição do projeto
- `File1.cpp` – ponto de entrada (`main`)

## 1.3 Primeiro teste direto no File1.cpp

Substituir o conteúdo de `File1.cpp` por:

```cpp
#include <iostream>

int Soma(int a, int b) {
    return a + b;
}

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
    AssertIgual(5, Soma(2, 3), "TestaSoma_Basico");
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

Compilar e rodar:

- Build > Build All
- Run (F9)

Saída esperada:

```
Rodando testes...
[OK]      TestaSoma_Basico
Fim dos testes.
Pressione ENTER para sair...
```

Nesse momento ainda não temos pastas `src/test`; o foco aqui é só validar que o ambiente está ok e que conseguimos rodar um teste simples.
...existing code...