#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Escriba un caracter: ";
    cin >> caracter;

    cout << "El equivalente entero de " << caracter << " es "
         << static_cast<int>(caracter) << endl;

    return 0;
}
