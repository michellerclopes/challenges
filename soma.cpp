#include <stdio.h>
#include <locale.h> //Necess�rio para usar o setlocale, fun��o que garante que palavras sejam acentuadas.
int main () 
{
	setlocale(LC_ALL, "Portuguese"); //Alterando para o portugu�s
	int i, quant, N, soma=0;
	
	printf("Entre com a quantidade de n�meros que deseja somar: ");
	scanf("%d",&quant);
	
	if ((quant<=0) || (quant>50))
	{
		printf("Por favor entre com um n�mero maior que 0 e menor do que 50!");	
	}
	
		else 
		{
			printf("Agora, os n�meros a somar: ");
			for (i=0; i<quant; i++) 
			{
				scanf("%d",&N);
				soma=soma+N;
			}
			printf("A soma dos n�meros �: %d",soma);		
		}
}
	


