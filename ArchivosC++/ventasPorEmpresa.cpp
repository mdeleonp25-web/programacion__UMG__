#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;
#define CANTIDAD_EMPLEADOS 5
#define NUMERO_TRIMESTRES 4
#define MAX_VENTAS 100000
#define MIN_VENTAS 0
#define MAXIMA_LONGITUD_CADENA 50
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1]);
void inicializarMatriz(float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1], char alumnos[CANTIDAD_EMPLEADOS][MAXIMA_LONGITUD_CADENA], string nombreEmpresa);
int main()
{
    srand(getpid());
    llamaCiclo();
    return 0;
}
void llamaCiclo()
{
    float matriz_empresa_1[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1];
    float matriz_empresa_2[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1];
    float matriz_empresa_3[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1];
    char opcion;
    bool repetir = true;
    float promedio_empresa_1;
    float promedio_empresa_2;
    float promedio_empresa_3;
    char empleados[CANTIDAD_EMPLEADOS][MAXIMA_LONGITUD_CADENA] = {"Mario","Luisa","Ana","Saul","Rodrigo"};
    do
    {
        system("cls");
        promedio_empresa_1=0;
        promedio_empresa_2=0;
        promedio_empresa_3=0;
        cout << "*** Comparativo de Empresas ***" << endl << endl;

        inicializarMatriz(matriz_empresa_1);
        inicializarMatriz(matriz_empresa_2);
        inicializarMatriz(matriz_empresa_3);
        llenarMatriz(matriz_empresa_1);
        promedio_empresa_1 = imprimirMatriz(matriz_empresa_1, empleados, "Empresa1");
        llenarMatriz(matriz_empresa_2);
        promedio_empresa_2 = imprimirMatriz(matriz_empresa_2, empleados, "Empresa2");
        llenarMatriz(matriz_empresa_3);
        promedio_empresa_3 = imprimirMatriz(matriz_empresa_3, empleados, "Empresa3");
        if (promedio_empresa_1 > promedio_empresa_2 && promedio_empresa_1 > promedio_empresa_3)
        {
            cout << " La empresa con el mejor promedio es : " << "empresa1" << " Promedio: " << promedio_empresa_1 << endl;
        } else
        if (promedio_empresa_2 > promedio_empresa_1 && promedio_empresa_2 > promedio_empresa_3)
        {
            cout << " La empresa con el mejor promedio es : " << "empresa 2" << " Promedio: " << promedio_empresa_2 << endl;
        } else
        if (promedio_empresa_3 > promedio_empresa_2 && promedio_empresa_3 > promedio_empresa_1)
        {
            cout << " La empresa con el mejor promedio es : " << "empresa 3" << " Promedio: " << promedio_empresa_3 << endl;
        } else
        {
            cout << " Algunas empresas tienen el mismo promedio " << endl << endl;
        }
        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n')
        {
            repetir=false;
        }
    } while (repetir);
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void inicializarMatriz(float matriz[CANTIDAD_EMPLEADOS] [NUMERO_TRIMESTRES + 1])
{
    int x, y;
    for (y = 0; y < CANTIDAD_EMPLEADOS; y++)
    {
        for (x = 0; x < NUMERO_TRIMESTRES; x ++)
        {
            matriz[y][x]=0;
        }
    }
}

void llenarMatriz(float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES+1])
{
    int y, x;
    for (y = 0; y < CANTIDAD_EMPLEADOS; y++)
    {
        float suma = 0;
        int ventas = 0;
        for (x = 0; x < NUMERO_TRIMESTRES; x++)
        {
            ventas = busquedaAleatorios(MIN_VENTAS, MAX_VENTAS);
            suma += (float)ventas;
            matriz[y][x] = ventas;
            ventas=0;
        }

        matriz[y][NUMERO_TRIMESTRES] = suma;
    }
}

void imprimirMatrizLinea()
{
    int x;

    cout << "+----------";
    for (x = 0; x < NUMERO_TRIMESTRES + 1; x++)
    {
        cout << "+-----------";
    }
    cout << "+\n";
}
float imprimirMatriz(float matriz[CANTIDAD_EMPLEADOS][NUMERO_TRIMESTRES + 1], char empleados[CANTIDAD_EMPLEADOS][MAXIMA_LONGITUD_CADENA], string nombreEmpresa)
{
    int y, x;

    float promedioMayor = matriz[0][NUMERO_TRIMESTRES];
    float promedioMenor = matriz[0][NUMERO_TRIMESTRES];
    float totalGeneral = 0;
    float promedioGeneral = 0;
    char empleadoPromedioMayor[MAXIMA_LONGITUD_CADENA];
    char empleadoPromedioMenor[MAXIMA_LONGITUD_CADENA];
    memcpy(empleadoPromedioMayor, empleados[0], MAXIMA_LONGITUD_CADENA);
    memcpy(empleadoPromedioMenor, empleados[0], MAXIMA_LONGITUD_CADENA);
    cout << nombreEmpresa << endl;
    imprimirMatrizLinea();
    cout << setw(10) << "empleado";
    for (x = 0; x < NUMERO_TRIMESTRES; x++)
    {
        cout << setw(11) << "trimestre" << x + 1;
    }
    cout << setw(9) << "Total" << endl;
    imprimirMatrizLinea();
    for (y = 0; y < CANTIDAD_EMPLEADOS; y++)
    {
        cout << "!" << setw(10) << empleados[y] << "!";
        float suma = 0;
        for (x = 0; x < NUMERO_TRIMESTRES; x++)
        {
            int ventas = matriz[y][x];
            cout << setw(11) << ventas << "!";
        }
        float promedio = matriz[y][NUMERO_TRIMESTRES];
        totalGeneral += matriz[y][NUMERO_TRIMESTRES];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(empleadoPromedioMayor, empleados[y], MAXIMA_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(empleadoPromedioMenor, empleados[y], MAXIMA_LONGITUD_CADENA);
        }
        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }
    promedioGeneral = totalGeneral / CANTIDAD_EMPLEADOS;
    cout << "Venta mayor: " << setw(10) << empleadoPromedioMayor <<  setw(10) << promedioMayor << endl;
    cout << "Venta menor: " << setw(10) << empleadoPromedioMenor <<  setw(10) << promedioMenor << endl;
    cout << "Venta promedio: " << setw(10) <<  promedioGeneral << endl << endl;
    return promedioGeneral;
}
