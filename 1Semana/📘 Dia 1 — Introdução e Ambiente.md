📘 Dia 1 — Introdução e Ambiente

Duração total: ~2 horas

🧠 Teoria (40 min)
O que é C++
Linguagem compilada, derivada do C.
Usada em sistemas, games, IA, finanças, etc.
Paradigmas: procedural, orientada a objetos e genérica.
Compilação
Código → Compilador (g++/clang++) → Executável.
Etapas: preprocessamento → compilação → linking → execução.
Seu primeiro programa

#include <iostream>
using namespace std;

int main() {
    cout << "Olá, mundo!" << endl;
    return 0;
}

🔹 #include <iostream> → biblioteca de entrada/saída
🔹 cout → envia texto para a tela
🔹 endl → quebra de linha
🔹 main() → ponto inicial do programa

💻 Prática (1h20)

Instale o ambiente
Se estiver no macOS:

xcode-select --install


(isso instala clang++)

Teste no terminal:

clang++ --version

Compile seu primeiro código
Salve como ola.cpp:

#include <iostream>
using namespace std;

int main() {
    cout << "Olá, C++!" << endl;
    return 0;
}


Compile:

clang++ ola.cpp -o ola
./ola


Exercício prático
Crie três programas:

ex1.cpp: imprime seu nome e idade.

ex2.cpp: soma dois números digitados pelo usuário.

ex3.cpp: multiplica dois números e mostra o resultado.

Exemplo:

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Digite dois números: ";
    cin >> a >> b;
    cout << "Soma: " << a + b << endl;
    return 0;
}

✅ Ao final do Dia 1, você terá aprendido:

Como funciona a compilação.

Estrutura básica de um programa em C++.

Entrada e saída com cin e cout.

Tipos básicos (int, double, char, string).