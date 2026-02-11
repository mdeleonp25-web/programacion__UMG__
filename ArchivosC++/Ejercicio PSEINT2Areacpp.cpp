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
	int ancho;
	int area;
	int largo;
	int perimetro;
	int precio;
	cout << "ingrese el ancho del terreno: " << endl;
	cin >> ancho;
	cout << "ingrese el largo del tereno: " << endl;
	cin >> largo;
	cout << "ingrese el Precio por metro cuadrado: " << endl;
	cin >> precio;
	area = ancho*largo;
	perimetro = (2*ancho)+(2*largo);
	cout << "El precio del terreno es: " << area*precio << endl;
	cout << "El alambre necesario para cercar 3 veces es: " << perimetro*3 << endl;
	return 0;
}

