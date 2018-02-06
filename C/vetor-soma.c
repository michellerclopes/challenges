#include <stdio.h>
	
	int main (){
		int v1[]={1,8,5,7,10}, v2[]={8,9,1,7,3}, soma[5], i; //dois vetores preenchidos 
		
		for (i=0; i<=4; i++) {
			soma[i] = v1[i] + v2[i]; //somando os valores dos vetores de índice igual
			printf(" %d ",soma[i]); //imprimindo um terceiro vetor com a soma
		}
}
