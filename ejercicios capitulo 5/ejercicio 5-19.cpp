#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double pi = 0.0;

    cout << fixed << setprecision(8);
    cout << "Termino" << setw(20) << "Valor de Pi" << endl;

    for (int i = 0; i < 1000; i++) {
        double termino = 4.0 / (2 * i + 1);

        if (i % 2 == 0) {
            pi += termino;
        } else {
            pi -= termino;
        }

        cout << setw(4) << (i + 1) << setw(20) << pi << endl;
    }

    return 0;
}
