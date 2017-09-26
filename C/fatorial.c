#include <stdio.h>
#include <locale.h> //Necess�rio para usar o setlocale, fun��o que garante que palavras sejam acentuadas.

int fatorial(int N) {	
	int FAT;
	if ((N==0) || (N==1)) {
		return N=1;
	} 
	else {
		return FAT = N * fatorial(N-1); //Fun��o recursiva sendo chamada 
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese"); //Alterando para o portugu�s
	int N;
	printf("Insira um n�mero: ");
	scanf("%d",&N);
	printf("%d!= %d", N,fatorial(N)); //Passagem de par�metros logo dentro do printf
}
