#include <iostream>

using namespace std;

int main() {
    int cantidadDeValores;
    int valorActual;
    int sumaTotal = 0;

    cout << "Escriba cuantos valores desea sumar: ";
    cin >> cantidadDeValores;

    for (int i = 1; i <= cantidadDeValores; i++) {
        cout << "Ingrese el entero " << i << ": ";
        cin >> valorActual;
        sumaTotal += valorActual;
    }

    cout << "La suma total es: " << sumaTotal << endl;

    return 0;
}
