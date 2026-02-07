Algoritmo Que_Momento_del_Dia_es
	//DEfinicion de Variables
	Definir horas Como Entero
	
	//Solicitar Datos
	Escribir "Ingrese Horas para Saber a que Momnento del dia Pertenece"
	Leer horas
	
	si horas >= 0 y horas <= 5 Entonces
		Escribir "Esta hora pertenece a la Madrugada"
	SiNo
		si horas >= 6 y horas <= 11 Entonces
			Escribir "Esta hora pertenece a la Mañana"
		SiNo
			si horas >= 12 y horas <= 13 Entonces
				Escribir "Esta hora pertenece a Mediodia"
			SiNo
				si horas >= 14 y horas <= 19 Entonces
					Escribir "Esta hora pertenece a la Tarde"
				SiNo
					si horas >= 20 y horas <= 23 Entonces
						Escribir "Esta hora pertenece a la Noche"
					SiNo
						Escribir "        |||| ERROR ||||"
						Escribir "Valor Fuera del rango (0 - 23)"
					FinSi
				FinSi
			FinSi
		FinSi
		
	FinSi
	
	
FinAlgoritmo
