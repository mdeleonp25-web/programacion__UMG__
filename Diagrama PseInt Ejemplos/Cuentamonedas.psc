Algoritmo sin_titulo
	Definir monedacien Como Entero
	Definir monedacincuenta Como Entero
	Definir monedaveinte Como Entero
	Definir monedadiez Como Entero
	Definir monedacinco Como Entero
	Definir monedauno Como Entero
	Definir cincuentacentavos Como Entero
	Definir veinticincocentavos Como Entero
	Definir uncentavo Como Real
	Definir monto Como Entero
	Definir cantidad Como Real
	Escribir 'ingrese el monto: '
	Leer cantidad
	monto <- trunc(cantidad)
	cantidad <- cantidad-(trunc(cantidad))
	monedacien <- 0
	monedacien <- (monto-(monto MOD 100))/100
	monto <- monto MOD 100
	monedacincuenta <- (monto-(monto MOD 50))/50
	monto <- monto MOD 50
	monedaveinte <- (monto-(monto MOD 20))/20
	monto <- monto MOD 20
	monedadiez <- (monto-(monto MOD 10))/10
	monto <- monto MOD 10
	monedacinco <- (monto-(monto MOD 5))/5
	monto <- monto MOD 5
	monedauno <- monto/1
	Si cantidad>=0.5 Entonces
		cincuentacentavos <- 1
		cantidad <- cantidad-0.5
	FinSi
	Si cantidad>=0.25 Entonces
		veinticincocentavos <- 1
		cantidad <- cantidad-0.25
	FinSi
	Si cantidad>0 Entonces
		uncentavo <- cantidad*100
	FinSi
	Escribir 'billetes de 100: ', monedacien
	Escribir 'billetes de 50: ', monedacincuenta
	Escribir 'billetes de 20: ', monedaveinte
	Escribir 'billetes de 10: ', monedadiez
	Escribir 'billetes de 5: ', monedacinco
	Escribir 'billetes de 1: ', monedauno
	Escribir 'monedas de 0.50: ', cincuentacentavos
	Escribir 'monedas de 0.25: ', veinticincocentavos
	Escribir 'monedas de un centavo: ', uncentavo
FinAlgoritmo
