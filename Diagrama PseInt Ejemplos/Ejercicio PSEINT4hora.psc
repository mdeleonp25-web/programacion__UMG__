Algoritmo EvaluarHrs
	Definir hora Como Entero
	Escribir 'ingrese una hora (0-23): '
	Leer hora
	Si (hora<0) O (hora>23) Entonces
		Escribir 'la hora ingresada debe estar entre 0hrs y 23 hrs'
	SiNo
		Si (hora>=0) Y (hora<=5) Entonces
			Escribir 'Madrugada'
		SiNo
			Si (hora>=6) Y (hora<=11) Entonces
				Escribir 'Mañana'
			SiNo
				Si (hora>=12) Y (hora<=13) Entonces
					Escribir 'Mediodia'
				SiNo
					Si (hora>=14) Y (hora<=19) Entonces
						Escribir 'Tarde'
					SiNo
						Escribir 'noche'
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
FinAlgoritmo
