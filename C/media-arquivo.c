//Programa que calcula a m�dia de 3 notas inseridas pelo usu�rio e ent�o salva os dados e informa a m�dia dentro de um arquivo.

#include <stdio.h>
#include <locale.h>

int main (void)
{
	char url[]="notas.txt";
	float nota,
	      media=0.0;
	FILE *arq;
	
	arq = fopen(url, "w");
	if(arq == NULL)
			printf("Erro, nao foi possivel abrir o arquivo\n");
	else{
		printf("Nota de Matematica: ");
		scanf("%f", &nota);
		fprintf(arq, "Matematica: %.2f\n", nota);
		media+=nota;
		
		printf("Nota de Fisica: ");
		scanf("%f", &nota);
		fprintf(arq, "Fisica: %.2f\n", nota);
		media+=nota;
		
		printf("Nota de Quimica: ");
		scanf("%f", &nota);
		fprintf(arq, "Quimica: %.2f\n", nota);
		media+=nota;
		
		media /= 3;
		fprintf(arq, "Media final: %.2f\n", media);
		
		printf("Veja media no arquivo de texto!");
	}
	fclose(arq);
	
	return 0;
}

