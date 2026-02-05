Algoritmo sin_titulo
	Definir cafe_Americano Como Entero
	Definir cafe_leche Como Entero
	Definir jugo_naraja Como Entero
	Definir pastel_chocolate Como Entero
	Definir muffin Como Entero
	Definir condicion Como Cadena
	Definir numero_articulo Como Entero
	Definir cantidades Como Entero
	Definir total Como Real
	total <- 0
	condicion <- 'si'
	Escribir 'Bienvenido seleccione el numero de articulo que dea adquirir'
	Repetir
		Escribir '1. Cafe Amaricano Q10.00'
		Escribir '2. cafe con leche Q13.50'
		Escribir '3. jugo de naranja Q15.00'
		Escribir '4. pastel de chocolate Q17.25'
		Escribir '5. muffin Q8.00'
		Leer numero_articulo
		Si numero_articulo=1 Entonces
			Escribir 'ingrese cuantos cafe Americano desea adquirir: '
			Leer cantidades
			cafe_Americano <- cafe_Americano+cantidades
		FinSi
		Si numero_articulo=2 Entonces
			Escribir 'ingrese cuantos cafe con leche desea adquirir: '
			Leer cantidades
			cafe_leche <- cafe_leche+cantidades
		FinSi
		Si numero_articulo=3 Entonces
			Escribir 'ingrese cuantos jugo de naranja desea adquirir: '
			Leer cantidades
			jugo_naraja <- jugo_naraja+cantidades
		FinSi
		Si numero_articulo=4 Entonces
			Escribir 'ingrese cuantos pastel de chocolate desea adquirir: '
			Leer cantidades
			pastel_chocolate <- pastel_chocolate+cantidades
		FinSi
		Si numero_articulo=5 Entonces
			Escribir 'ingrese cuantos muffin desea adquirir: '
			Leer cantidades
			muffin <- muffin+cantidades
		FinSi
		Escribir 'desea adquirir otro producto si/no: '
		Leer condicion
	Hasta Que condicion<>'si'
	Si cafe_Americano>0 Entonces
		Escribir cafe_Americano, ' cafe americano: ', cafe_Americano*10
		total <- total+cafe_Americano*10
	FinSi
	Si cafe_leche>0 Entonces
		Escribir cafe_leche, ' cafe con leche: ', cafe_leche*13.5
		total <- total+cafe_leche*13.5
	FinSi
	Si jugo_naraja>0 Entonces
		Escribir jugo_naraja, ' jugo de naranja: ', jugo_naraja*15
		total <- total+jugo_naraja*15
	FinSi
	Si pastel_chocolate>0 Entonces
		Escribir pastel_chocolate, ' pastel de chocolate: ', pastel_chocolate*17.25
		total <- total+pastel_chocolate*17.25
	FinSi
	Si muffin>0 Entonces
		Escribir muffin, ' muffin: ', muffin*8
		total <- total+muffin*8
	FinSi
	Escribir 'total de la compra: ', total
FinAlgoritmo
