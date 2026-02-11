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
	int hora;
	cout << "ingrese una hora (0-23): " << endl;
	cin >> hora;
	if ((hora<0) || (hora>23)) {
		cout << "la hora ingresada debe estar entre 0hrs y 23 hrs" << endl;
	} else {
		if ((hora>=0) && (hora<=5)) {
			cout << "Madrugada" << endl;
		} else {
			if ((hora>=6) && (hora<=11)) {
				cout << "Mañana" << endl;
			} else {
				if ((hora>=12) && (hora<=13)) {
					cout << "Mediodia" << endl;
				} else {
					if ((hora>=14) && (hora<=19)) {
						cout << "Tarde" << endl;
					} else {
						cout << "noche" << endl;
					}
				}
			}
		}
	}
	return 0;
}

