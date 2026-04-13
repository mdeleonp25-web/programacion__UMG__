#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int segundosDesdeLas12(int horas, int minutos, int segundos);

int main() {
    int h1, m1, s1;
    int h2, m2, s2;
    string respuesta = "";

    do {
        system("cls");
        cout << "Ingrese la PRIMERA hora (formato: horas minutos segundos separados por espacio): " << endl;
        cin >> h1 >> m1 >> s1;

        cout << "\nIngrese la SEGUNDA hora (formato: horas minutos segundos separados por espacio): " << endl;
        cin >> h2 >> m2 >> s2;
        int tiempo1_segundos = segundosDesdeLas12(h1, m1, s1);
        int tiempo2_segundos = segundosDesdeLas12(h2, m2, s2);

        int diferencia = abs(tiempo1_segundos - tiempo2_segundos);

        cout << "Segundos transcurridos para el Tiempo 1: " << tiempo1_segundos << " s" << endl;
        cout << "Segundos transcurridos para el Tiempo 2: " << tiempo2_segundos << " s" << endl;
        cout << "Diferencia de tiempo entre ambas horas : " << diferencia << " s" << endl;

        cout << "\nDesea calcular otros tiempos (s/n): ";
        cin >> respuesta;

    } while (respuesta == "s" || respuesta == "S");

    return 0;
}

int segundosDesdeLas12(int horas, int minutos, int segundos) {
    int totalSegundos = ((horas % 12) * 3600) + (minutos * 60) + segundos;

    return totalSegundos;
}
