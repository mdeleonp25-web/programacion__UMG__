#include<iostream>
using namespace std;

int main() {
	float ingresokilometros;
	float litrosconsumidos;
	ingresokilometros = 0;
	litrosconsumidos = 0;
	do {
		cout << "ingrese los kilometros conducidos: " << endl;
		cin >> ingresokilometros;
		if ((ingresokilometros>0)) {
			cout << "ingrese los litros consumidos:" << endl;
			cin >> litrosconsumidos;
			cout << "kilometros conducidos: " << ingresokilometros << endl;
			cout << "litros consumidos: " << litrosconsumidos << endl;
			cout << "Total KPL: " << ingresokilometros/litrosconsumidos << endl;
		}
	} while ((ingresokilometros>=0));
	return 0;
}

