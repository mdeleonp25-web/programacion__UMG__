Algoritmo kilometrajeGasolina
	definir litrosConsumidos Como Entero
	definir ingresoKilometros Como Entero
	ingresoKilometros<- 0
	litrosConsumidos<-0
	Repetir
		Escribir "ingrese los kilometros conducidos: "
		Leer ingresoKilometros
		Si (ingresoKilometros>0)
			Escribir "ingrese los litros consumidos:"
			Leer litrosConsumidos
			Escribir "kilometros conducidos: ", ingresoKilometros
			Escribir "litros consumidos: ", litrosConsumidos
			Escribir "Total KPL: ",ingresoKilometros/litrosConsumidos
		FinSi
	Hasta Que	(ingresoKilometros<0) 
FinAlgoritmo
