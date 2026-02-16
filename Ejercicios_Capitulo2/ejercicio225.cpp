#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, residuo;

    cout << "Ingrese el numero que desea evaluar: " << endl;
    cin >> numero1;

    cout << "Ingrese el multiplo que desea evaluar: " << endl;
    cin >> numero2;

        residuo = numero1 % numero2;

        if (residuo == 0) {
        cout << "El numero si es multiplo" << endl;
    } 
    else {
        cout << "El numero no es multiplo" << endl;
    }
    return 0;
}