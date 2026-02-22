Algoritmo encontrarElMasGrande
	Definir contador, digito, mayor Como Entero	
	contador <- 1
	mayor <- 0
	Mientras contador <= 10 Hacer
		Escribir "Ingrese el número ", contador, ":"
		Leer digito
		Si contador = 1 Entonces
			mayor <- digito
		SiNo
			Si digito > mayor Entonces
				mayor <- digito
			FinSi
		FinSi
		contador <- contador + 1
	FinMientras
	Escribir "El número más grande es: ", mayor
FinAlgoritmo