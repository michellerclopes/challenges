//Escreva um programa que leia 20 n�meros e escreva todos os n�meros que s�o maiores que a m�dia dos 20 n�meros

#include <stdio.h>
	
	int main () {
	int V[20],i,media=0,soma=0;
	
	printf("Digite 20 numeros: \n");
	for(i=0; i<20; i++) {
		scanf("%d",&V[i]);
		soma+=V[i];
		media=(soma/20);
	}
	
	printf("Numeros maiores do que a media dos 20 numeros: ");
	for (i=0; i<20; i++) {
	if (V[i]>media) {
		printf(" %d ",V[i]);	
	}	
	}
}
