#include<iostream>
using namespace std;

int main()
{
	int pagosemanal;
	int ventasbrutas;
	ventasbrutas = 0;
	while ((ventasbrutas>=0)) {
		cout << "ingrese la venta bruta: " << endl;
		cin >> ventasbrutas;
		if ((ventasbrutas>0)) {
			cout << "las ventas brutas son: " << ventasbrutas << endl;
			cout << "el pago semanal es: " << (ventasbrutas*0.09)+200 << endl;
		}
	}
	return 0;
}
