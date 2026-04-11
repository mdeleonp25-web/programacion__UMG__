/** El siguiente archivo Config.cpp contiene la logica del menu de configuraciones del juego
permite la manipulacion de la interfaz de juego y sus parametros
**/
#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;
//constructor parametrizado de la clase config
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    //Se hace uso de this para poder diferenciar por atributos de la clase de los parametros que se reciben
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}
/** Logica del menu de configuracion donde se hace uso de un do while para limpiar la consola y permitir
una configuracion dinamica mediante un switch case
**/
void Config::menuConfiguracion()
{
    int opciones;
    int valorIngresado;
    bool repetir = true;
    do
    {
        system("cls");//limpiar la consola y se muestran las configuraciones actuales del menu
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        if (opciones!=6)
            //solicita la seleccion de una opcion a configurar
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        //casos de configuracion de los atributos del juego
        switch (opciones)
        {
        case 1:
            {
                this->setfilasTablero(valorIngresado);
                cout << "Filas del Tablero actualizadas" << endl;
                break;
            }
        case 2:
            {
                this->setcolumnasTablero(valorIngresado);
                cout << "Columnas del Tablero actualizadas" << endl;
                break;
            }
        case 3:
            {
                this->setminasTablero(valorIngresado);
                cout << "Minas del Tablero actualizadas" << endl;
                break;
            }
        case 4:
            {
                this->setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Juego actualizado" << endl;
                break;
            }
        case 5:
            {
                this->setvidasTablero(valorIngresado);
                cout << "Vidas del Juego actualizadas" << endl;
                break;
            }
        case 6: repetir = false;
                break;
        }
        system("pause");
    } while (repetir);
}
// obtiene la nueva altura del tablero, devuelve el valor actual
int Config::getfilasTablero()
{
    return this->filasTablero;
}
// configura el valor de las filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    return this->filasTablero=filasTablero;
}
//obtiene el nuevo valor de columnas y devulve el actual
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}
//configura la cantidad de columnas
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero=columnasTablero;
}
//obtiene el valor de minas que se deseaconfigurar
int Config::getminasTablero()
{
    return this->minasTablero;
}
//configura el valor de las minas
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero=minasTablero;
}
//verifica si el modo desarrollador esta activado
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}
// activa/desactiva el modo desarrollador
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero=modoDesarrolladorTablero;
}
//obtiene el valor de configuracion de las vidas
int Config::getvidasTablero()
{
    return this->vidasTablero;
}
//modifica el sistema de vidas del Juego
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero=vidasTablero;
}


