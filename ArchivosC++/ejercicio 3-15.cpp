#include <iostream>

using namespace std;

class Fecha {
public:
    Fecha(int m, int d, int a) {
        establecerMes(m);
        dia = d;
        anio = a;
    }

    void establecerMes(int m) {
        if (m >= 1 && m <= 12) {
            mes = m;
        } else {
            mes = 1;
        }
    }

    void establecerDia(int d) { dia = d; }
    void establecerAnio(int a) { anio = a; }
    int obtenerMes() const { return mes; }
    int obtenerDia() const { return dia; }
    int obtenerAnio() const { return anio; }
    void mostrarFecha() const {
        cout << mes << "/" << dia << "/" << anio << endl;
    }

private:
    int mes;
    int dia;
    int anio;
};

int main() {
    Fecha fecha1(3, 21, 2026);
    cout << "Fecha 1: ";
    fecha1.mostrarFecha();
    Fecha fecha2(13, 1, 2026);
    cout << "Fecha 2 (con mes invalido 13): ";
    fecha2.mostrarFecha();
    fecha2.establecerMes(12);
    fecha2.establecerDia(25);
    fecha2.establecerAnio(2025);

    cout << "Fecha 2 modificada: ";
    fecha2.mostrarFecha();

    return 0;
}
