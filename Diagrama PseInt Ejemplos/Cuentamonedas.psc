Algoritmo sin_titulo
	Definir monedaCien Como Entero
	Definir monedaCincuenta Como Entero
	Definir monedaVeinte Como Entero
	Definir monedaDiez Como Entero
	Definir monedaCinco Como Entero
	Definir monedaUno Como Entero
	Definir cincuentaCentavos Como Entero
	Definir veinticincoCentavos Como Entero
	Definir unCentavo Como Real
	Definir monto Como Entero
	Definir cantidad Como Real
	Escribir 'ingrese el monto: '
	Leer cantidad
	monto <- trunc(cantidad)
	cantidad <- cantidad-(trunc(cantidad))
	monedaCien <- 0
	monedaCien <- (monto-(monto MOD 100))/100
	monto <- monto MOD 100
	monedaCincuenta <- (monto-(monto MOD 50))/50
	monto <- monto MOD 50
	monedaVeinte <- (monto-(monto MOD 20))/20
	monto <- monto MOD 20
	monedaDiez <- (monto-(monto MOD 10))/10
	monto <- monto MOD 10
	monedaCinco <- (monto-(monto MOD 5))/5
	monto <- monto MOD 5
	monedaUno <- monto/1
	Si cantidad>=0.5 Entonces
		cincuentaCentavos <- 1
		cantidad <- cantidad-0.5
	FinSi
	Si cantidad>=0.25 Entonces
		veinticincoCentavos <- 1
		cantidad <- cantidad-0.25
	FinSi
	Si cantidad>0 Entonces
		unCentavo <- cantidad*100
	FinSi
	Escribir 'billetes de 100: ', monedaCien
	Escribir 'billetes de 50: ', monedaCincuenta
	Escribir 'billetes de 20: ', monedaVeinte
	Escribir 'billetes de 10: ', monedaDiez
	Escribir 'billetes de 5: ', monedaCinco
	Escribir 'billetes de 1: ', monedaUno
	Escribir 'monedas de 0.50: ', cincuentaCentavos
	Escribir 'monedas de 0.25: ', veinticincoCentavos
	Escribir 'monedas de un centavo: ', unCentavo
FinAlgoritmo
