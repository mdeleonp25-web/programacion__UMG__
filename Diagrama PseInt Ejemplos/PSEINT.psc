Algoritmo Calculadora
	Definir numeroUno Como Real
	Definir numeroDos Como Real
	Definir total Como Real
	Definir accion Como Entero
	Repetir
		Escribir 'seleccione la opcion que desea realizar'
		Escribir '1) Suma'
		Escribir '2) Resta'
		Escribir '3) multiplicacion'
		Escribir '4) Division'
		Escribir '5) Salir'
		Leer accion
		Si accion<>0 Entonces
			Escribir 'ingrese el primer numero'
			Leer numeroUno
			Escribir 'ingrese el segundo numero'
			Leer numeroDos
			total <- 0
		FinSi
		Según accion Hacer
			1:
				total <- numeroUno+numeroDos
			2:
				total <- numeroUno-numeroDos
			3:
				total <- numeroUno*numeroDos
			4:
				Si (numeroDos==0) Entonces
					Escribir 'INVALIDO no se puede operar'
					total <- 0
				SiNo
					total <- numeroUno/numeroDos
				FinSi
			De Otro Modo:
				accion <- 5
		FinSegún
		Escribir 'el resultado es: ', total
	Hasta Que accion=5
FinAlgoritmo
