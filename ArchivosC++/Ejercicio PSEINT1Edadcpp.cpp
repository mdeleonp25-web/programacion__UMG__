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
	int anoact;
	int anonac;
	int diaact;
	int dianac;
	int edad;
	int mesact;
	int mesnac;
	// nombre Funcion
	// variables de Fecha Actual
	// Variables de fecha de nacimiento
	cout << "Ingrese su año de nacimiento: " << endl;
	// variable de Edad
	cin >> anonac;
	cout << "Ingrese su mes de nacimiento: " << endl;
	cin >> mesnac;
	cout << "Ingrese su dia de nacimiento: " << endl;
	cin >> dianac;
	cout << "Ingrese el año actual: " << endl;
	cin >> anoact;
	cout << "Ingrese el mes actual: " << endl;
	cin >> mesact;
	cout << "Ingrese el dia actual: " << endl;
	cin >> diaact;
	edad = anoact-anonac;
	if (mesact<=mesnac) {
		if (diaact<dianac) {
			edad = edad-1;
		}
	}
	cout << "La edad del usuario es: " << edad << endl;
	return 0;
}

