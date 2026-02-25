#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double principal = 24.0; // Los $24.00 originales
    int anioInicial = 1626;
    int anioActual = 2026;   // Actualizado a la fecha
    int totalAnios = anioActual - anioInicial;

    cout << "Calculo de inversion de Peter Minuit (1626 - " << anioActual << ")" << endl;
    cout << "Anios transcurridos: " << totalAnios << "\n" << endl;

    cout << fixed << setprecision(2);

    // Bucle para variar la tasa de interés del 5% al 10%
    for (int tasaPorcentaje = 5; tasaPorcentaje <= 10; tasaPorcentaje++) {
        double tasa = tasaPorcentaje / 100.0;

        // Fórmula de interés compuesto: a = p * (1 + r)^n
        double monto = principal * pow(1.0 + tasa, totalAnios);

        cout << "Con una tasa del " << tasaPorcentaje << "% el monto seria: $"
             << monto << endl;
    }

    return 0;
}
