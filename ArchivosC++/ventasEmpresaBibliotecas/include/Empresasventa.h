#ifndef EMPRESASVENTA_H
#define EMPRESASVENTA_H

#include <string>
#include <iostream>

using namespace std;

class Empresasventa
{
private:
    static const int CANTIDAD_EMPLEADOS = 5;
    static const int NUMERO_TRIMESTRES = 4;

    string empresaNombre;
    string empleados[CANTIDAD_EMPLEADOS];
    float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES+1];
    float promedioGeneral;
    int generarAleatorio(int minimo, int maximo);
    void imprimirLinea();

public:
    Empresasventa(string nombreEmpresa);
    void inicializarMatriz();
    void llenarVentas();
    void mostrarReporte();
    float getPromedioGeneral() const;
    ~Empresasventa();
};

#endif
