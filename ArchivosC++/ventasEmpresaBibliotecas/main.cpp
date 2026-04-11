#include <iostream>
#include <unistd.h>
#include "Empresasventa.h"

using namespace std;

int main() {
    srand(getpid());
    char opcion;

    do {
        system("cls || clear");

        Empresasventa e1("Empresa 1"), e2("Empresa 2"), e3("Empresa 3");

        e1.inicializarMatriz(); e1.llenarVentas(); e1.mostrarReporte();
        e2.inicializarMatriz(); e2.llenarVentas(); e2.mostrarReporte();
        e3.inicializarMatriz(); e3.llenarVentas(); e3.mostrarReporte();

        float p1 = e1.getPromedioGeneral();
        float p2 = e2.getPromedioGeneral();
        float p3 = e3.getPromedioGeneral();

        cout << "\n--- COMPARATIVA FINAL ---" << endl;
        if (p1 > p2 && p1 > p3) cout << "Empresa 1 es la mejor." << endl;
        else if (p2 > p1 && p2 > p3) cout << "Empresa 2 es la mejor." << endl;
        else if (p3 > p1 && p3 > p2) cout << "Empresa 3 es la mejor." << endl;
        else cout << "Empates detectados." << endl;

        cout << "\n¿Desea otro calculo? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    return 0;
}
