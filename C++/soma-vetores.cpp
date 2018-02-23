#include <iostream>

using namespace std;

main () {
	int v1[10], v2[10], v3[20], i=0;
	
	cout << "Vetor 1" << endl;
	for (i=0; i<10; i++) {
		cout << "[" << i << "]: "; //Recebe dados de entrada no primeiro vetor
		cin >> v1[i];
	}
	
	cout << "Vetor 2" << endl;
	for (i=0; i<10; i++) {
		cout << "[" << i << "]: "; //Recebe dados de entrada no segundo vetor
		cin >> v2[i];
	}
	
	system("cls");
	cout << "Vetor 3" << endl;
	for (i=0; i<10; i++) {
		v3[i] = v1[i] + v2[i]; //Soma os valores de vetores de indice iguais
		cout << "[" << i << "]: " << v3[i] << endl; //Imprime o terceiro vetor com as somas
	}
}
