#include <stdio.h>
#include <locale.h> //Necess�rio para usar o setlocale, fun��o que garante que palavras sejam acentuadas.
int main () 
{
	setlocale(LC_ALL, "Portuguese"); //Alterando para o portugu�s
	int N, quadrado;
	printf("Entre com um n�mero: ");
	scanf("%d",&N);
	
	if (N<1000) 
	{
		quadrado = N*N;	
		printf("O quadrado do n�mero �: %d",quadrado);
	}
		else
		{
			printf("Entre com um valor menor do que 1000!");
		}
}






