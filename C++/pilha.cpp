#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int topo=-1, v[10], tamanho =5;

bool PilhaVazia(){
    return (topo <= -1) ? true : false;
}

bool PilhaCheia(){
    return(topo >= tamanho-1) ? true : false;
}

void Empilhar(int elemento){ //passando por parametro um elemento pra adicionar
    if (PilhaCheia()){
   	 cout << "Pilha Cheia" << endl;
    }
    else {
   	 topo++;
   	 v[topo] = elemento;
    }
}

int Desempilhar(){
    int remover = -1;
    if (PilhaVazia()){
   	 cout << "Pilha Vazia" << endl;
    }
    else {
   	 remover = v[topo];
   	 topo --;
    }
    return remover;
}

void ElementoTopo(){
    if (PilhaVazia()){
   	 cout << "Pilha Vazia" << endl;
    }
    else {
   	 cout << "Elemento Topo: " << v[topo] << endl;
    }
}

void MostrarPilha(){
    for (int i=topo; i >=0; i--){
   	 cout << "Vetor[" << i << "]: " << v[i] << endl;
    }
}

main(){
    
    int op;
    
    do {
   	 
    cout << "0- Sair" << endl;
    cout << "1- Empilhar" << endl;
    cout << "2- Desempilhar" << endl;
    cout << "3- Elemento Topo" << endl;
    cout << "4- Mostrar Pilha" << endl;
    cout << "Opção: "; cin >> op;
    
    system("cls");
    
    switch(op){
   	 case 1 : int x; cout << "Elemento: "; cin >> x; Empilhar(x); break;
   	 break;
   	 case 2 : cout << "Elemento Removido: " << Desempilhar() << endl;
   	 break;
   	 case 3 : ElementoTopo();
   	 break;
   	 case 4 : MostrarPilha();
   	 break;
    }
    system("pause");
    } while (op != 0);
    
}



