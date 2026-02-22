Algoritmo calculadoraComisiones
	Definir ventasBrutas Como Entero
	Definir pagoSemanal Como Entero
	ventasBrutas<-0
	Mientras (ventasBrutas>=0)
		Escribir "ingrese la venta bruta: "
		Leer ventasBrutas
		si (ventasBrutas>0)
			Escribir "las ventas brutas son: " ventasBrutas
			Escribir "el pago semanal es: ", (ventasBrutas*0.09)+200
		FinSi
	FinMientras
FinAlgoritmo
