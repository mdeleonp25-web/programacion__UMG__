#include <iostream>

using namespace std;

int main() {
    int numero;

    cout << "Introduzca 5 numeros entre 1 y 30: " << endl;

    for (int i = 1; i <= 5; i++) {
        cin >> numero;

        for (int j = 1; j <= numero; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
