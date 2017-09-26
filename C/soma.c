#include <stdio.h>
#include <locale.h> //Necessário para usar o setlocale, função que garante que palavras sejam acentuadas.
int main () 
{
	setlocale(LC_ALL, "Portuguese"); //Alterando para o português
	int i, quant, N, soma=0;
	
	printf("Entre com a quantidade de números que deseja somar: ");
	scanf("%d",&quant);
	
	if ((quant<=0) || (quant>50))
	{
		printf("Por favor entre com um número maior que 0 e menor do que 50!");	
	}
	
		else 
		{
			printf("Agora, os números a somar: ");
			for (i=0; i<quant; i++) 
			{
				scanf("%d",&N);
				soma=soma+N;
			}
			printf("A soma dos números é: %d",soma);		
		}
}
	


