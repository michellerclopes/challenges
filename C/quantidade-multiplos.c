// Faça um programa que leia 10 números inteiros. Calcule a quantidade de múltiplos de 3. 
//Se a quantidade de múltiplos de 2 for igual a de 3, escreva a palavra “iguais”. 
//Se as quantidades forem diferentes, escreva os números relativos a maior quantidade de múltiplos.

#include <stdio.h>

	int main () {
	int V[10], i, qtd2=0, qtd3=0;
	
	for (i=0; i<10; i++) {
		printf("V[%d]= ", i);
		scanf("%d", &V[i]);
		if (V[i]%2==0) {
			qtd2++;
		}
		if (V[i]%3==0) {
			qtd3++;
		}
	}
	
	if (qtd2 > qtd3) {
		printf("\n%d Multiplos de 2\n", qtd2);
		for (i=0; i<10; i++)
		if (V[i]%2==0) {
			printf("%d ",V[i]);	
		}
}

	else if (qtd2 < qtd3) {
		printf("\n%d Multiplos de 3\n", qtd3);
		for (i=0; i<10; i++)
		if (V[i]%3==0) {
			printf("%d ",V[i]);	
		}
}
	else printf("\nIguais!");
	return 0;
}
