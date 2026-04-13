#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero);

int main() {
    int totalPrimos = 0;

    for (int i = 2; i <= 10000; i++) {
        if (esPrimo(i)) {
            cout << i << "\t";
            totalPrimos++;
        }
    }

    cout << "Total de numeros primos encontrados: " << totalPrimos << endl;

    return 0;
}

bool esPrimo(int numero) {
    if (numero <= 1) return false;

    int limite = sqrt(numero);

    for (int i = 2; i <= limite; i++) {
        if (numero % i == 0) {
            return false;
        }
    }
    return true;
}
