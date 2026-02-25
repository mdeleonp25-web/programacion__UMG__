#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigo;
    double salario, tarifaPorHora, horasTrabajadas, ventasBrutas, tarifaPorPieza;
    int piezasProducidas;

    cout << fixed << setprecision(2);

    while (true) {
        cout << "Introduzca el codigo de pago (1=Gerente, 2=Por horas, 3=Comision, 4=Por piezas, -1 para salir): ";
        cin >> codigo;

        if (codigo == -1) {
            break;
        }

        switch (codigo) {
            case 1: // Gerente
                cout << "Introduzca el salario semanal fijo: ";
                cin >> salario;
                cout << "El salario semanal es: $" << salario << endl;
                break;

            case 2: // Trabajador por horas
                cout << "Introduzca el sueldo por hora: ";
                cin >> tarifaPorHora;
                cout << "Introduzca las horas trabajadas: ";
                cin >> horasTrabajadas;

                if (horasTrabajadas <= 40) {
                    salario = horasTrabajadas * tarifaPorHora;
                } else {
                    // Pago normal por las primeras 40 horas + 1.5x por las horas extra
                    salario = (40 * tarifaPorHora) + ((horasTrabajadas - 40) * tarifaPorHora * 1.5);
                }
                cout << "El salario semanal es: $" << salario << endl;
                break;

            case 3: // Trabajador por comisión
                cout << "Introduzca las ventas brutas semanales: ";
                cin >> ventasBrutas;
                // $250 base + 5.7% de las ventas
                salario = 250.0 + (ventasBrutas * 0.057);
                cout << "El salario semanal es: $" << salario << endl;
                break;

            case 4: // Trabajador por piezas
                cout << "Introduzca el pago por pieza: ";
                cin >> tarifaPorPieza;
                cout << "Introduzca la cantidad de piezas producidas: ";
                cin >> piezasProducidas;
                salario = piezasProducidas * tarifaPorPieza;
                cout << "El salario semanal es: $" << salario << endl;
                break;

            default:
                cout << "Codigo de pago invalido." << endl;
                break;
        }
        cout << endl;
    }

    return 0;
}
