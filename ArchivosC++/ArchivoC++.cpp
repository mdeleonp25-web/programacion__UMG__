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
	string accion;
	int accion_2;
	int deposito_cheque;
	int deposito_efectivo;
	float maximo;
	float minimo;
	float monto;
	string nombre;
	float promedio_de_retiro;
	int retiro;
	float saldo_final;
	float saldo_inicial;
	float total_retiros;
	total_retiros = 0;
	monto = 0;
	saldo_inicial = 0;
	deposito_cheque = 0;
	deposito_efectivo = 0;
	retiro = 0;
	minimo = 0;
	maximo = 0;
	cout << "Ingrese el Nombre de Usuario de la Cuenta" << endl;
	cin >> nombre;
	cout << "Ingrese su saldo inicial" << endl;
	cin >> saldo_inicial;
	saldo_final = saldo_inicial;
	do {
		cout << "-----------Opciones Bancarias---------------" << endl;
		cout << "  D) deposito" << endl;
		cout << "  R) Retiro" << endl;
		cout << "  F) fin" << endl;
		cin >> accion;
		if ((accion=="D")) {
			cout << "Elija que opcion de deposito desea Cheque/Efectivo" << endl;
			cout << " 1) Cheque" << endl;
			cout << " 2) Efectivo" << endl;
			cin >> accion_2;
			if (accion_2==1) {
				cout << "Ingrese la Canntidad de Deposito" << endl;
				cin >> monto;
				saldo_final = saldo_final+(monto-(monto*0.01));
				deposito_cheque = deposito_cheque+1;
			} else {
				if (accion_2==2) {
					cout << "Ingrese la Canntidad de Deposito" << endl;
					cin >> monto;
					saldo_final = saldo_final+monto;
					deposito_efectivo = deposito_efectivo+1;
				}
			}
		}
		if (minimo==0) {
			minimo = monto;
		} else {
			if (monto<minimo) {
				minimo = monto;
			}
		}
		if (accion=="R") {
			cout << "ingrese el monto que desea retirar: " << endl;
			cin >> monto;
			if (monto<saldo_final) {
				saldo_final = saldo_final-monto;
				retiro = retiro+1;
				total_retiros = total_retiros+monto;
				if (maximo<monto) {
					maximo = monto;
				}
			} else {
				cout << "el monto que desea retirar es mayor a su saldo disponible" << endl;
			}
		}
		cout << "saldo inicial: " << saldo_inicial << endl;
		cout << "saldo final: " << saldo_final << endl;
    } while (accion!="F");
	cout << "El nombres es: " << nombre << endl;
	cout << "Saldo inicial es: " << saldo_inicial << endl;
	cout << "Saldo Final es: " << saldo_final << endl;
	cout << "Numero de depositos en efectivo:" << deposito_efectivo << endl;
	cout << "Numero de depositos en cheque:" << deposito_cheque << endl;
	cout << "Monto promedio de Retiro:" << total_retiros/retiro << endl;
	cout << "Monto minimo Despositado:" << minimo << endl;
	cout << "Monto maximo Retirado: " << maximo << endl;
	return 0;
}
