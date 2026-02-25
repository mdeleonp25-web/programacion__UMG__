#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variables para las categorías de gastos
    double alojamiento, comida, ropa, transporte, educacion, medicos, vacaciones;
    double totalGastos;
    double impuestoFairTax;

    cout << "Calculadora de Impuesto FairTax (Estimado al 23%)" << endl;
    cout << "Por favor, introduzca sus gastos mensuales o anuales en las siguientes categorias:\n" << endl;

    // Entrada de datos
    cout << "Gasto en Alojamiento: $";
    cin >> alojamiento;

    cout << "Gasto en Comida:      $";
    cin >> comida;

    cout << "Gasto en Ropa:        $";
    cin >> ropa;

    cout << "Gasto en Transporte:  $";
    cin >> transporte;

    cout << "Gasto en Educacion:   $";
    cin >> educacion;

    cout << "Servicios Medicos:    $";
    cin >> medicos;

    cout << "Vacaciones:           $";
    cin >> vacaciones;

    // Calculamos el total
    totalGastos = alojamiento + comida + ropa + transporte + educacion + medicos + vacaciones;

    // Calculamos el impuesto (23% del total gastado)
    impuestoFairTax = totalGastos * 0.23;

    // Mostramos resultados
    cout << fixed << setprecision(2);
    cout << "\n----------------------------------------" << endl;
    cout << "Total de gastos ingresados: $" << totalGastos << endl;
    cout << "Impuesto FairTax estimado:  $" << impuestoFairTax << endl;
    cout << "----------------------------------------" << endl;

    return 0;
}
