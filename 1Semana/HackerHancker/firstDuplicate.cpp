#include <iostream>
#include <set>

using namespace std;

int firstDuplicateSolucao(vector<int> v) //V Vector da solução
{
    set<int> ja_apareceu; //N LogN ou (unordered_set == set) O(n) (ordena os valores)
    for(int i=0; i < v.size(); i++)
    {
        if(ja_apareceu.count(v[i]))
        {
            return v[i];
        }
        ja_apareceu.insert(v[i]);
    }
        return -1;
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

Primeira Solução: 1) 
N^2 0
Segunda solução:
N N

*/

