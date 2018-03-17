#include <stdio.h>
main () {
	struct reg_aluno {
		char nome[30];
		int nota;
	};
	struct reg_aluno aluno;
	printf("Nome: ");
	gets(aluno.nome);
	printf("Entre com a nota: ");
	scanf("%d",&aluno.nota);
	printf("Nome: %s \n", aluno.nome);
	printf("Nota: %d \n", aluno.nota);
}
