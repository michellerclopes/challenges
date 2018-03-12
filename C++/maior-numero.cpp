#include <iostream>

using namespace std;

main (){
	float n1, n2, n3;
	cout << "Entre com 3 numeros: " << endl;
	cin >> n1 >> n2 >> n3;
	
	if ((n1>=n2) && (n1>=n3)){
		cout << "O maior numero: "<< n1;
	}
	else if ((n2>=n1) && (n2>=n3)){
		cout << "O maior numero: "<< n2;
	}
	else {
		cout << "O maior numero: " << n3;
	}
}
