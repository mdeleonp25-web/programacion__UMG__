#include <iostream>
using namespace std;

int main() {
    int lado;
    int fila = 1;
    int columna;

    cout << "Ingrese el lado del cuadrado (1-20): ";
    cin >> lado;

    if (lado >= 1 && lado <= 20) {
        while (fila <= lado) {
            columna = 1;
            while (columna <= lado) {
                if (fila == 1 || fila == lado || columna == 1 || columna == lado) {
                    cout << "*";
                } else {
                    cout << " ";
                }
                columna++;
            }
            cout << endl;
            fila++;
        }
    } else {
        cout << "El numero debe estar entre 1 y 20." << endl;
    }

    return 0;
}
