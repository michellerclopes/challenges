/*Leia quatro valores inteiros A, B, C e D. 
A seguir, calcule e mostre a diferen�a do produto de A e B pelo produto de C e D segundo a 
f�rmula: DIFERENCA = (A * B - C * D).

Entrada
O arquivo de entrada cont�m 4 valores inteiros.

Sa�da
Imprima a mensagem DIFERENCA com todas as letras mai�sculas, conforme exemplo abaixo, 
com um espa�o em branco antes e depois da igualdade.*/


#include <iostream>
 
using namespace std;
 
int main() {
    int A,B,C,D;
    cout << ""; cin >> A;
    cout << ""; cin >> B;
    cout << ""; cin >> C;
    cout << ""; cin >> D;
    cout << "DIFERENCA = " << (A*B)-(C*D) << endl; 
    return 0;
}
