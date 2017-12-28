//Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estão na diagonal principal.
#include <stdio.h>
int main () {
	int M[3][3],i,j,soma=0;
	printf("");
	for (i=0; i<3; i++)
	for (j=0; j<3; j++) {
		scanf("%d",&M[i][j]);
		if (i==j) 
		soma+=M[i][j];
	}
	printf("Soma dos elementos da diagonal principal: %d",soma);
}
