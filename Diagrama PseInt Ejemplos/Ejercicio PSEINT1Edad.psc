Algoritmo CalcularEdad
	Definir anoACT, mesAct, diaAct Como Entero // nombre Funcion
	Definir anoNAC, mesNac, diaNac Como Entero // variables de Fecha Actual
	Definir edad Como Entero // Variables de fecha de nacimiento
	Escribir 'Ingrese su año de nacimiento: ' // variable de Edad
	Leer anoNac
	Escribir 'Ingrese su mes de nacimiento: '
	Leer mesNac
	Escribir 'Ingrese su dia de nacimiento: '
	Leer diaNac
	Escribir 'Ingrese el año actual: '
	Leer anoAct
	Escribir 'Ingrese el mes actual: '
	Leer mesAct
	Escribir 'Ingrese el dia actual: '
	Leer diaAct
	Edad <- ANOACT-ANONAC
	Si MesAct<=MesNac Entonces
		Si DiaAct<DiaNac Entonces
			Edad <- Edad-1
		FinSi
	FinSi
	Escribir 'La edad del usuario es: ', Edad
FinAlgoritmo
