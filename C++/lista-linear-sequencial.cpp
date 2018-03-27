#include <iostream> 
#include <locale.h>
using namespace std;

int v[10], n;

void inserir (int v[], int valor, int &n, int tamanho) { // função para inserção
	if (tamanho == n) {
		cout << "Lista cheia";
	}
	else {
		v[n]= valor;
		n++;
	}
}

void exibir (int v[], int n) { // função para percorrer a lista
	if (n==0) {
		cout << "Lista vazia";
	}
	else {
		for (int i=0; i<n; i++) {
			cout << "Lista: ";
			cout << v[i] << endl;
		}
	}
}

int buscar (int v[], int valor, int n) { // função para buscar na lista
	if (n==0) {
		cout << "Lista vazia";
	}
	else {
		for (int i=0; i<n; i++) {
			if (v[i] == valor)
			return i; // retorna o índice do dado
		}
	}
	return -1;
}

void remover (int v[], int valor, int &n) {
	if (n==0) { 
		cout << "Lista vazia" << endl;  
	}
	int posicao = buscar (v,valor,n);
	if (posicao == -1) {
		cout << "Valor não encontrado" << endl;
	}
	v[posicao] = v[n-1];
	n--;
}

main () {
	setlocale(LC_ALL, "Portuguese");
	int valor, posicao;
	
	cout << "Valor para inserção: ";
	cin >> valor;
	inserir (v,valor,n,40);
	
	exibir (v,n);
	
	cout << "Valor para busca: ";
	cin >> valor;
	posicao = buscar (v,valor,n);
	if (posicao >= 0) {
		cout << "Posição = " << posicao << endl;
	}
	else {
		cout << "Elemento não encontrado" << endl;
	}
	
	cout << "Valor a ser removido: ";
	cin >> valor;
	remover (v,valor,n);
	
	exibir (v,n);
}
