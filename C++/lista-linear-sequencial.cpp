#include <iostream> 
#include <locale.h>
using namespace std;

int v[10], n;

void inserir (int v[], int valor, int &n, int tamanho) { // fun��o para inser��o
	if (tamanho == n) {
		cout << "Lista cheia";
	}
	else {
		v[n]= valor;
		n++;
	}
}

void exibir (int v[], int n) { // fun��o para percorrer a lista
	if (n==0) {
		cout << "Lista vazia";
	}
	else {
		for (int i=0; i<n; i++) {
			cout << v[i] << endl;
		}
	}
}

int buscar (int v[], int valor, int n) { // fun��o para buscar na lista
	if (n==0) {
		cout << "Lista vazia";
	}
	else {
		for (int i=0; i<n; i++) {
			if (v[i] == valor)
			return i; // retorna o �ndice do dado
		}
	}
	return -1;
}

void remover (int v[], int valor, int &n) {
	if (n==0) { 
		cout << "Lista vazia" << endl; return; 
	}
	int posicao = buscar (v,valor,n);
	if (posicao == -1) {
		cout << "Valor n�o encontrado" << endl; return;
	}
	v[posicao] = v[n-1];
	n--;
}

main () {
	setlocale(LC_ALL, "Portuguese");
	int valor, posicao;
	
	cout << "Valor para inser��o: ";
	cin >> valor;
	inserir (v,valor,n,40);
	
	exibir (v,n);
	
	cout << "Valor para busca: ";
	cin >> valor;
	posicao = buscar (v,valor,n);
	if (posicao >= 0) {
		cout << "Posi��o = " << posicao << endl;
	}
	else {
		cout << "Elemento n�o encontrado" << endl;
	}
	
	cout << "Valor a ser removido: ";
	cin >> valor;
	remover (v,valor,n);
	
	exibir (v,n);
}



