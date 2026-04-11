/**Este archivo inicializa el juego, sus configuraciones y se encarga de controlar todas sus funciones
**/
#include <iostream>
#include <unistd.h>
#include "juego.h"
#include "Config.h"

using namespace std;
//funcion principal, devuelve 0 al terminar
int main()
{
    //definicion de constantes para el inicio del juego
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    //instancia del objeto config con sus valores iniciales
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    //instancia del objeto juego con sus valores iniciales
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    //inicializacion para numeros aleatorios
    srand(getpid());
    int opciones;
    bool repetir = true;
    //ciclo do while que permite navegar entre el juego y su configuracion
    do
    {
        system("cls");//limpieza de la consola
        //muestra el menu principal del juego para que el usuario interactue
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;//solicita una opcion al usuario para iniciar

        //opciones del juego
        switch (opciones)
        {
        case 1:
            //llama al menu de configuracion del juego para modificar parametros
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            //crea una instancia del juego llmada juego temporal con los valores actuales
            {
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }

            //rompe el ciclo para acabar con el programa al cambiar repetir a false
        case 3: repetir = false;
                break;
        }
    } while (repetir);//fin del ciclo while
    system("cls");
    return 0;
}
