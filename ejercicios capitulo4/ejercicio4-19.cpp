#include<iostream>
using namespace std;

int main() {
	int contador;
	int mayor1;
	int mayor2;
	int numero;
	contador = 1;
	mayor1 = 0;
	mayor2 = 0;
	while (contador<=10) {
		cout << "Ingrese el numero " << contador << ":" << endl;
		cin >> numero;
		if (numero>mayor1) {
			mayor2 = mayor1;
			mayor1 = numero;
		} else {
			if (numero>mayor2) {
				mayor2 = numero;
			}
		}
		contador = contador+1;
	}
	cout << "El numero mas grande es: " << mayor1 << endl;
	cout << "El segundo mas grande es: " << mayor2 << endl;
	return 0;
}
