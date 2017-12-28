#include <stdio.h>
int main () {
	char palavra[50];
	FILE *arq;
	arq = fopen ("arquivotexto.txt","a");
	printf("Digite seu nome: ");
	scanf("%s",palavra);
	if (arq == NULL)
	{
		printf("\nNao foi possivel abrir o arquivo!");	
	} 
	else 
	{
		fprintf(arq,"%s",palavra);
		printf("\nDados salvos com sucesso!!");
	}
}
