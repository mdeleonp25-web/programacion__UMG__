/**Este archivo contiene todos los encabezados del archivo de juego, controla la logica y el flujo del juego.
Permite la interaccion entre el usuario y el juego, verificando las condiciones de victoria, el ingreso de datos y gestionando la colocacion de las minas
**/
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"

class Juego
{
private:
	Tablero tablero;//intancia del tablero
	int cantidadMinas;//cantidad de minas a colocar

	int aleatorio_en_rango(int minimo, int maximo);//genera un numero aleatorio en un rango determinado
	int filaAleatoria();//valor aleatorio de fila en un rango
	int columnaAleatoria();//valor de columna aleatoria dentro de un rango
public:
    //constructor de la clase juego
    Juego(Tablero tablero, int cantidadMinas);

	void colocarMinasAleatoriamente();//distribuye las minas de manera aleatoria
	int solicitarFilaUsuario();//ingreso de datos del usuario(fila)
	int solicitarColumnaUsuario();//ingreso de datos del usuario(columna)
	bool jugadorGana();//verifica que se cumplan las condiciones de victoria
	void iniciar();//inicio del juego
	//void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
