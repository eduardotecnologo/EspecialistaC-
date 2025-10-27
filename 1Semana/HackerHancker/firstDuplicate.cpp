#include <iostream>

using namespace std;

int firstDuplicateSolucao(vector<int> v) //V Vector da solução
{
    int menor_segundo_indice = -1; // Exemplo da variável X
    for(int i = 0; i < v.size(); i++)
    {
        for(int j = i + 1; j < v.size(); j++)// Até o tamanho do vetor v.size()
        {
            if(v[i] == v[j])// verifica se os valores são iguais
            {
                if(menor_segundo_indice == -1 || j < menor_segundo_indice)
                {
                    menor_segundo_indice = j; // j é o segundo index
                }
            }
        }
    }
    if(menor_segundo_indice == 000-1)
    return -1;
    else
    return v[menor_segundo_indice];
}

int main()
{
    vector<int> v = {2, 1, 3, 5, 3, 2};
    cout << firstDuplicateSolucao(v) << endl;
    return 0;
}

/*

Array de entrada:
0 1 2 3 4 5 index
2|1|3|5|3|2 valores
-   -   - -
- A resposta é 3, porque a segunda ocorrência de 3 tem o menor índice dentre as duplicadas.

- Guardando o Index da 2* aparição: 
X = 5 (2) 
- Agora X = 4 pois (3) < 5
X = 4 (3)

Given an array a that contains only numbers in the range from 1 to a.length, 
find the first duplicate number for which the second occurrence has the minimal index. In other words, 
if there are more than 1 duplicated numbers, return the number for which the second occurrence has a 
smaller index than the 
second occurrence of the other number does. If there are no such elements, return -1.

🇧🇷 Tradução para o português

Dado um array a que contém apenas números no intervalo de 1 até a.length, encontre o primeiro número 
duplicado cuja segunda ocorrência tem o menor índice.
Em outras palavras, se houver mais de um número duplicado, retorne aquele cuja segunda ocorrência aparece 
antes (isto é, com o índice menor) que a segunda ocorrência dos outros números.
Se não houver nenhum elemento duplicado, retorne -1.
*/

