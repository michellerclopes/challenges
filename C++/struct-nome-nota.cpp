#include <iostream>

using namespace std;

main () {
	struct reg_aluno {
		char nome[30];
		int nota;
	};
	struct reg_aluno aluno;
	cout << "Nome: ";
	cin >> aluno.nome;
	cout << "Entre com a nota: ";
	cin >> aluno.nota;
	
	cout << "Nome: " << aluno.nome << endl << "Nota: " << aluno.nota;
}
