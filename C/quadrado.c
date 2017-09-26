#include <stdio.h>
#include <locale.h> //Necessário para usar o setlocale, função que garante que palavras sejam acentuadas.
int main () 
{
	setlocale(LC_ALL, "Portuguese"); //Alterando para o português
	int N, quadrado;
	printf("Entre com um número: ");
	scanf("%d",&N);
	
	if (N<1000) 
	{
		quadrado = N*N;	
		printf("O quadrado do número é: %d",quadrado);
	}
		else
		{
			printf("Entre com um valor menor do que 1000!");
		}
}






