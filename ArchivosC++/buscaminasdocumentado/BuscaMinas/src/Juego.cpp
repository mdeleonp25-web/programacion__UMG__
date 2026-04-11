/**El siguiente archivo contiene la logica del juego buscaminas, encargado de desarrollar el juego en todas sus
caracteristicas, desde el tablero hasta el ingreso de datos por medio del usuario
**/
#include "Juego.h"
#include <fstream>
#include <unistd.h>
//genera un valor aleatorio dentro de un rango especifico
int Juego::aleatorio_en_rango(int minimo, int maximo)
	{
		return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
	}
//obtiene un numero de fila aleatorio y consulta al tablero que este dento del parametro
	int Juego::filaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
	}
//obtiene un numero de columna aleatorio y consulta al tablero que este dento del parametro
	int Juego::columnaAleatoria()
	{
		return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
	}
//inicia el juego y coloca las minas aleatoriamente de manera automatica
	Juego::Juego(Tablero tablero, int cantidadMinas)
	{
		this->tablero = tablero;
		this->cantidadMinas = cantidadMinas;
		this->colocarMinasAleatoriamente();
	}
//coloca las minas de mnaera aleatoria y solamente incrementa el contador cuando la posicion esta vacia y la mina puede colocarse
	void Juego::colocarMinasAleatoriamente()
	{
		int x, y, minasColocadas = 0;

		while (minasColocadas < this->cantidadMinas)
		{
			x = this->columnaAleatoria();
			y = this->filaAleatoria();
			if (this->tablero.colocarMina(x, y))
			{
				minasColocadas++;
			}
		}
	}
//solicita un valor de fila al usuario y resta un valor para coincidir con la logica de c++
	int Juego::solicitarFilaUsuario()
	{
		int fila = 0;
		cout << "Ingresa la FILA en la que desea jugar: ";
		cin >> fila;
		return fila - 1;
	}
//solicita un valor de columna al usuario
	int Juego::solicitarColumnaUsuario()
	{
		int columna = 0;
		cout << "Ingresa la COLUMNA en la que desea jugar: ";
		cin >> columna;
		return columna - 1;
	}
//verifica si no quedan celdas vacias por descubrir y devulve un true si el contador de celdas seguras es 0
	bool Juego::jugadorGana()
	{
		int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();
		if (conteo == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
//es el ciclo principal del juego
//controla el flujo del juego y si el jugador gana o pierde se encarga de activar el modo desarrollador para visualizar las minas en el tablero
	void Juego::iniciar()
	{
		int fila, columna;
		while (true)
		{
			this->tablero.imprimir();
			fila = this->solicitarFilaUsuario();
			columna = this->solicitarColumnaUsuario();
			bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);
			if (!respuestaAUsuario)
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}

			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
		}
	}
