#include <stdio.h>
#include <locale.h> //Necessário para usar o setlocale, função que garante que palavras sejam acentuadas.

int fatorial(int N) {	
	int FAT;
	if ((N==0) || (N==1)) {
		return N=1;
	} 
	else {
		return FAT = N * fatorial(N-1); //Função recursiva sendo chamada 
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese"); //Alterando para o português
	int N;
	printf("Insira um número: ");
	scanf("%d",&N);
	printf("%d!= %d", N,fatorial(N)); //Passagem de parâmetros logo dentro do printf
}
