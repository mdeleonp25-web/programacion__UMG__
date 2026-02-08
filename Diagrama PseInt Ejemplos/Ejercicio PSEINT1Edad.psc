Algoritmo CalcularEdad
	Definir ANOACT, MesAct, DiaAct Como Entero // nombre Funcion
	Definir ANONAC, MesNac, DiaNac Como Entero // variables de Fecha Actual
	Definir Edad Como Entero // Variables de fecha de nacimiento
	Escribir 'Ingrese su año de nacimiento: ' // variable de Edad
	Leer ANONAC
	Escribir 'Ingrese su mes de nacimiento: '
	Leer MesNac
	Escribir 'Ingrese su dia de nacimiento: '
	Leer DiaNac
	Escribir 'Ingrese el año actual: '
	Leer ANOACT
	Escribir 'Ingrese el mes actual: '
	Leer MesAct
	Escribir 'Ingrese el dia actual: '
	Leer DiaAct
	Edad <- ANOACT-ANONAC
	Si MesAct<=MesNac Entonces
		Si DiaAct<DiaNac Entonces
			Edad <- Edad-1
		FinSi
	FinSi
	Escribir 'La edad del usuario es: ', Edad
FinAlgoritmo
