#include "Empresasventa.h"
#include <iostream>
#include <iomanip>

using namespace std;

Empresasventa::Empresasventa(string nombreEmpresa)
{
    empresaNombre=nombreEmpresa;
    string nombresEmpleados[]={"Mario", "Luisa", "Ana", "Saul", "Rodrigo"};
    for (int i=0; i<CANTIDAD_EMPLEADOS; i++){
        empleados[i]=nombresEmpleados[i];
    }
    promedioGeneral=0;
}

void Empresasventa::inicializarMatriz()
{
    for(int y=0; y < CANTIDAD_EMPLEADOS; y++){
        for(int x=0; x < NUMERO_TRIMESTRES; x++){
            matriz[y][x]=0;
        }
    }
}

int Empresasventa::generarAleatorio(int minimo, int maximo) {
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void Empresasventa::llenarVentas() {
    for (int i = 0; i < CANTIDAD_EMPLEADOS; i++) {
        float sumaFila = 0;
        for (int j = 0; j < NUMERO_TRIMESTRES; j++) {
            int ventas = generarAleatorio(0, 100000);
            matriz[i][j] = (float)ventas;
            sumaFila += matriz[i][j];
        }
        matriz[i][NUMERO_TRIMESTRES] = sumaFila;
    }
}
void Empresasventa::imprimirLinea() {
    cout << "+----------";
    for (int i = 0; i <= NUMERO_TRIMESTRES; i++) cout << "+-----------";
    cout << "+\n";
}

void Empresasventa::mostrarReporte() {
    float maxVenta = matriz[0][NUMERO_TRIMESTRES];
    float minVenta = matriz[0][NUMERO_TRIMESTRES];
    string empMax = empleados[0], empMin = empleados[0];
    float acumuladoEmpresa = 0;

    cout << "\n>>> " << empresaNombre << " <<<" << endl;
    imprimirLinea();
    cout << "!" << setw(10) << "Empleado" << "!";
    for (int i = 1; i <= NUMERO_TRIMESTRES; i++) cout << "Trimestre " << i << "!";
    cout << setw(7) << "Total" << "    !" << endl;
    imprimirLinea();

    for (int i = 0; i < CANTIDAD_EMPLEADOS; i++) {
        cout << "!" << setw(10) << empleados[i] << "!";
        for (int j = 0; j < NUMERO_TRIMESTRES; j++) {
            cout << setw(11) << (int)matriz[i][j] << "!";
        }
        float totalEmpleado = matriz[i][NUMERO_TRIMESTRES];
        cout << setw(10) << fixed << setprecision(2) << totalEmpleado << " !" << endl;
        imprimirLinea();

        acumuladoEmpresa += totalEmpleado;
        if (totalEmpleado > maxVenta) { maxVenta = totalEmpleado; empMax = empleados[i]; }
        if (totalEmpleado < minVenta) { minVenta = totalEmpleado; empMin = empleados[i]; }
    }
    promedioGeneral = acumuladoEmpresa / CANTIDAD_EMPLEADOS;
    cout << "Venta mayor: " << empMax << " (" << maxVenta << ")" << endl;
    cout << "Venta menor: " << empMin << " (" << minVenta << ")" << endl;
    cout << "Promedio de la empresa: " << promedioGeneral << endl;
}

float Empresasventa::getPromedioGeneral() const {
    return promedioGeneral;
}

Empresasventa::~Empresasventa()
{
    //dtor
}
