#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    long long poblacionActual = 8300000000;
    double tasaCrecimiento = 0.0084;
    long long poblacionDoble = poblacionActual * 2;
    int anioDuplicacion = 0;
    bool seDuplico = false;

    cout << "Calculadora de Crecimiento de Poblacion Mundial (75 años)" << endl;
    cout << "------------------------------------------------------------------" << endl;
    cout << setw(10) << "Año"
         << setw(25) << "Poblacion al final"
         << setw(25) << "Aumento numerico" << endl;
    cout << "------------------------------------------------------------------" << endl;

    for (int anio = 1; anio <= 75; anio++) {

        long long aumento = poblacionActual * tasaCrecimiento;
        poblacionActual += aumento;

        cout << setw(10) << anio
             << setw(25) << poblacionActual
             << setw(25) << aumento << endl;

        if (seDuplico == false && poblacionActual >= poblacionDoble) {
            anioDuplicacion = anio;
            seDuplico = true;
        }
    }

    cout << "------------------------------------------------------------------" << endl;

    if (seDuplico) {
        cout << "\nLa poblacion se duplicara en el año: " << anioDuplicacion << endl;
    } else {
        cout << "\nCon una tasa del 0.84%, la poblacion NO se duplicara dentro de los proximos 75 años." << endl;
    }

    return 0;
}
