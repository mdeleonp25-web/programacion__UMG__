#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double principal = 1000.0;

    cout << fixed << setprecision(2);

    for (int tasaPorcentaje = 5; tasaPorcentaje <= 10; tasaPorcentaje++) {
        double tasa = tasaPorcentaje / 100.0;

        cout << "\nCalculos con tasa de interes del " << tasaPorcentaje << "%:" << endl;
        cout << "Anio" << setw(21) << "Monto en deposito" << endl;

        for (int anio = 1; anio <= 10; anio++) {
            double monto = principal * pow(1.0 + tasa, anio);
            cout << setw(4) << anio << setw(21) << monto << endl;
        }
    }

    return 0;
}
