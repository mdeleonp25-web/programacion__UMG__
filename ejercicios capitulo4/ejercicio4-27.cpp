#include <iostream>
using namespace std;

int main() {
    int binario;
    int decimal = 0;
    int valorPosicional = 1;
    int digito;

    cout << "Ingrese un entero binario (solo 0s y 1s): ";
    cin >> binario;

    while (binario > 0) {
        digito = binario % 10;

        decimal = decimal + (digito * valorPosicional);

        valorPosicional = valorPosicional * 2;

        binario = binario / 10;
    }

    cout << "El equivalente decimal es: " << decimal << endl;

    return 0;
}
