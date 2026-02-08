Algoritmo CalculoMetrosCuadrados
	Definir ancho, largo, perimetro, Precio, area Como Entero
	Escribir 'ingrese el ancho del terreno: '
	Leer ancho
	Escribir 'ingrese el largo del tereno: '
	Leer largo
	Escribir 'ingrese el Precio por metro cuadrado: '
	Leer Precio
	area <- ancho*largo
	perimetro <- (2*ancho)+(2*largo)
	Escribir 'El precio del terreno es: ', area*Precio
	Escribir 'El alambre necesario para cercar 3 veces es: ', perimetro*3
FinAlgoritmo
