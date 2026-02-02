Algoritmo MaximoMinimo
	Definir N Como Entero
	Definir maximo Como Real
	Definir minimo Como Real
	Definir valor Como Real
	Definir i Como Entero
	// Asignar valor de inicio al contador
	i <- 1
	// Solicitar cantidad de numeros
	Escribir 'Cuantos numeros desea ingresar: '
	Leer N
	// Proceso
	Mientras i<=N Hacer
		Escribir 'ingrese un valor: '
		Leer valor
		Si i=1 Entonces
			minimo <- valor
			maximo <- valor
		SiNo
			Si valor<minimo Entonces
				minimo <- valor
			FinSi
			Si valor>maximo Entonces
				maximo <- valor
			FinSi
		FinSi
		i <- i+1
	FinMientras
	// Mostrar resultados al usuario
	Escribir 'El valor maximo es: ', maximo
	Escribir 'El valor minimo es: ', minimo
FinAlgoritmo
