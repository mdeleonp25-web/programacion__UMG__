#include <iostream>
using namespace std;

int main() {
    int lado1, lado2, lado3;

    cout << "Ingrese tres enteros distintos de cero: ";
    cin >> lado1 >> lado2 >> lado3;

    bool caso1 = (lado1 * lado1 + lado2 * lado2 == lado3 * lado3);
    bool caso2 = (lado1 * lado1 + lado3 * lado3 == lado2 * lado2);
    bool caso3 = (lado2 * lado2 + lado3 * lado3 == lado1 * lado1);

    if (caso1 || caso2 || caso3) {
        cout << "Estos numeros PODRIAN ser los lados de un triangulo recto." << endl;
    } else {
        cout << "Estos numeros NO pueden ser los lados de un triangulo recto." << endl;
    }

    return 0;
}
