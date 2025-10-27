#include <iostream>

using namespace std;

int main()
{
    int idade;
    string nome;

    cout << "Qual a sua idade? "<< endl;
    cin >> idade;
    cout << "Qual o seu nome? " << endl;
    cin >> nome;
    cout << "Olá, " << nome << "! Você tem " << idade << " anos." << endl;
    return 0;
}