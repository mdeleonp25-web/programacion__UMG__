// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int accion;
	float numerodos;
	float numerouno;
	float total;
	do {
		cout << "seleccione la opcion que desea realizar" << endl;
		cout << "1) Suma" << endl;
		cout << "2) Resta" << endl;
		cout << "3) multiplicacion" << endl;
		cout << "4) Division" << endl;
		cout << "5) Salir" << endl;
		cin >> accion;
		if (accion!=0) {
			cout << "ingrese el primer numero" << endl;
			cin >> numerouno;
			cout << "ingrese el segundo numero" << endl;
			cin >> numerodos;
			total = 0;
		}
		switch (accion) {
		case 1:
			total = numerouno+numerodos;
			break;
		case 2:
			total = numerouno-numerodos;
			break;
		case 3:
			total = numerouno*numerodos;
			break;
		case 4:
			if ((numerodos==0)) {
				cout << "INVALIDO no se puede operar" << endl;
				total = 0;
			} else {
				total = numerouno/numerodos;
			}
			break;
		default:
			accion = 5;
		}
		cout << "el resultado es: " << total << endl;
	} while (accion!=5);
	return 0;
}

