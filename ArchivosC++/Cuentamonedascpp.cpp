// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float cantidad;
	int cincuentacentavos;
	int monedacien;
	int monedacinco;
	int monedacincuenta;
	int monedadiez;
	int monedauno;
	int monedaveinte;
	int monto;
	float uncentavo;
	int veinticincocentavos;
	cout << "ingrese el monto: " << endl;
	cin >> cantidad;
	monto = int(cantidad);
	cantidad = cantidad-(int(cantidad));
	monedacien = 0;
	monedacien = (monto-(monto%100))/100;
	monto = monto%100;
	monedacincuenta = (monto-(monto%50))/50;
	monto = monto%50;
	monedaveinte = (monto-(monto%20))/20;
	monto = monto%20;
	monedadiez = (monto-(monto%10))/10;
	monto = monto%10;
	monedacinco = (monto-(monto%5))/5;
	monto = monto%5;
	monedauno = monto/1;
	if (cantidad>=0.5) {
		cincuentacentavos = 1;
		cantidad = cantidad-0.5;
	}
	if (cantidad>=0.25) {
		veinticincocentavos = 1;
		cantidad = cantidad-0.25;
	}
	if (cantidad>0) {
		uncentavo = cantidad*100;
	}
	cout << "billetes de 100: " << monedacien << endl;
	cout << "billetes de 50: " << monedacincuenta << endl;
	cout << "billetes de 20: " << monedaveinte << endl;
	cout << "billetes de 10: " << monedadiez << endl;
	cout << "billetes de 5: " << monedacinco << endl;
	cout << "billetes de 1: " << monedauno << endl;
	cout << "monedas de 0.50: " << cincuentacentavos << endl;
	cout << "monedas de 0.25: " << veinticincocentavos << endl;
	cout << "monedas de un centavo: " << uncentavo << endl;
	return 0;
}

