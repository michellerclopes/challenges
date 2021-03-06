#include <iostream> 
#include <locale.h>
using namespace std;

int v[10], n;

void inserir (int v[], int valor, int &n, int tamanho) { // fun��o para inser��o
	if (tamanho == n) {
		cout << ".................." << endl;
		cout << "Lista cheia" << endl;
		cout << ".................." << endl;
	}
	else {
		v[n]= valor;
		n++;
	}
}

void exibir (int v[], int n) { // fun��o para percorrer a lista
	if (n==0) {
		cout << ".................." << endl;
		cout << "Lista vazia" << endl;
		cout << ".................." << endl;
	}
	else {
		cout << ".................." << endl;
		cout << "Lista: ";
		for (int i=0; i<n; i++) {
			cout  << " " << v[i] << " ";
		}
		cout << endl << ".................." << endl;
	}
}	

int buscar (int v[], int valor, int n) { // fun��o para buscar na lista
	if (n==0) {
		cout << ".................." << endl;
		cout << "Lista vazia" << endl;
		cout << ".................." << endl;
	}
	else {
		cout << ".................." << endl;
		for (int i=0; i<n; i++) {
			if (v[i] == valor)
			return i; // retorna o �ndice do dado
		}
		cout << ".................." << endl; 
	}
	return -1;
}

void remover (int v[], int valor, int &n) {
	if (n==0) { 
		cout << ".................." << endl;
		cout << "Lista vazia" << endl; 
		cout << ".................." << endl;
		return; 
	}
	int posicao = buscar (v,valor,n);
	if (posicao == -1) {
		cout << ".................." << endl;
		cout << "Valor n�o encontrado" << endl; 
		cout << ".................." << endl;
		return;
	}
	v[posicao] = v[n-1];
	n--;
}

main () {
	
	setlocale(LC_ALL, "Portuguese");
	int valor, posicao;
	char op;
	
	
	do {
	cout << "::::::::ESCOLHA UMA OP��O:::::::" << endl; 	
	cout << "::::::::::::::::::::::::::::::::" << endl;
	cout << ":________ 0- Sair              :" << endl;
	cout << ":________ 1- Inserir           :" << endl; 
	cout << ":________ 2- Exibir            :" << endl; 
	cout << ":________ 3- Buscar            :" << endl; 
	cout << ":________ 4- Remover           :" << endl;
	cout << ":________ 5- Limpar a tela     :" << endl;
	cout << "::::::::::::::::::::::::::::::::" << endl;
	cin >> op;
	
			
		switch(op){
		
		case '0':
			cout << "......." << endl;
			cout << ": BYE :" << endl;
			cout << "......." << endl;
			break;
		
		case '1':
			cout << "Valor para inser��o: ";
			cin >> valor;	
			inserir (v,valor,n,10);	
			break;
			
		case '2':
			exibir (v,n);
			break;			
		
		case '3':
			cout << "Valor para busca: ";
			cin >> valor;
			posicao = buscar (v,valor,n);
				if (posicao >= 0) {
					cout << "Posi��o = " << posicao << endl;
				}
				else {
					cout << "Elemento n�o encontrado" << endl;
				}
		break;
		
		case '4':
			cout << "Valor a ser removido: ";
			cin >> valor;
			remover (v,valor,n);
			exibir (v,n);
			break;
			
		case '5':
			system("cls");
			break;
		
		default:
			cout << "Op��o inv�lida!";
			system("pause");
	}	
	} while (op!= '0');	
}
