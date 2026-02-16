#include <iostream>
using namespace std;

int main() {
    int x, y, z, suma, producto, promedio, mayor, menor;

    cout << "Introduzca tres enteros distintos: ";
    cin >> x >> y >> z;

    suma = x + y + z;
    promedio = (x + y + z) / 3;
    producto = x * y * z;

    // Lógica para el menor
    menor = x;
    if (y < menor) menor = y;
    if (z < menor) menor = z;

    // Lógica para el mayor
    mayor = x;
    if (y > mayor) mayor = y;
    if (z > mayor) mayor = z;

    // Salida de resultados
    cout << "La suma es " << suma << endl;
    cout << "El promedio es " << promedio << endl;
    cout << "El producto es " << producto << endl;
    cout << "El menor es " << menor << endl;
    cout << "El mayor es " << mayor << endl;

    return 0;
}