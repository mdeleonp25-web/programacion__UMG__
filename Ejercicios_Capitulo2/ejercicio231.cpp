#include <iostream>
using namespace std;

int main() {
    float kilometrosPorDia, costoGasolina, kilometrosPorLitro, estacionamiento, peaje, costoTotalDiario;

    cout << "Ingrese los siguientes datos:\n";
    cout << "1. Total de kilometros conducidos por dia: ";
    cin >> kilometrosPorDia;
    cout << "2. Costo por litro de gasolina: ";
    cin >> costoGasolina;
    cout << "3. Promedio de kilometros por litro: ";
    cin >> kilometrosPorLitro;
    cout << "4. Cuotas de estacionamiento por dia: ";
    cin >> estacionamiento;
    cout << "5. Peaje por dia: ";
    cin >> peaje;

    costoTotalDiario = (kilometrosPorDia / kilometrosPorLitro) * costoGasolina + estacionamiento + peaje;

    cout << "\nSu costo diario por conducir al trabajo es: " << costoTotalDiario << endl;

    return 0;
}