#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int vetor[5], total=0, fim=0, inicio=0, tamanho=5;

bool FilaVazia() {
	return (total<=0) ? true : false;
}

bool FilaCheia() {
	return (total>=tamanho) ? true : false;
}

void Enfileirar(int elemento) {
	if (!FilaCheia()) {
		vetor[fim] = elemento;
		fim++;
		total++;
		if (fim >= tamanho) {
			fim = 0;
		}
	}
	else {
		cout << "Fila Cheia" << endl;
	}
}

int Desenfileirar() {
	int desenfileirado = -1;
	if (FilaVazia()) {
		cout << "Fila Vazia" << endl;
	}
	else {
		desenfileirado = vetor[inicio];
		inicio++;
		total++;
		if (inicio >= tamanho) {
			inicio = 0; //volta para o inicio da fila
		}
	}	
	return desenfileirado;
}

void ElementoInicio() {
	if (!FilaVazia()) {
		cout << "O elemento do inicio é: " << vetor[inicio] << endl;
	}
	else {
		cout << "Fila Vazia" << endl;
	}
}

void MostraFila() {
	int i, pos=inicio;
	for (i=0; i<total; i++) {
		cout << "Elemento " << vetor[i] << " posicao " << i << endl;
		pos = pos +1;
		if (pos>=tamanho){
			pos=0;
		}
	}
}


main(){
    
    int op, elemento;
    
    do {
   	 
    cout << "0- Sair" << endl;
    cout << "1- Enfileirar" << endl;
    cout << "2- Desenfileirar" << endl;
    cout << "3- Elemento Inicio" << endl;
    cout << "4- Mostrar Fila" << endl;
    cout << "Opção: "; cin >> op;
    
    system("cls");
    
    switch(op){
   	 case 1 : elemento; cout << "Elemento: "; cin >> elemento; Enfileirar(elemento); break;
   	 break;
   	 case 2 : cout << "Elemento Removido: " << Desenfileirar() << endl;
   	 break;
   	 case 3 : ElementoInicio();
   	 break;
   	 case 4 : MostraFila();
   	 break;
    }
    system("pause");
    } while (op != 0);
    
}
