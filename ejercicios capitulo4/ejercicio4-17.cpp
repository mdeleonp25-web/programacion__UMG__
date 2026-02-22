#include<iostream>
using namespace std;

int main() {
	int contador;
	int digito;
	int mayor;
	contador = 1;
	mayor = 0;
	while (contador<=10) {
		cout << "Ingrese el numero " << contador << ":" << endl;
		cin >> digito;
		if (contador==1) {
			mayor = digito;
		} else {
			if (digito>mayor) {
				mayor = digito;
			}
		}
		contador = contador+1;
	}
	cout << "El numero mas grande es: " << mayor << endl;
	return 0;
}
