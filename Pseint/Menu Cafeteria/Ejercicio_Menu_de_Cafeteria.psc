Algoritmo Menu_de_Cafeteria
	// Definir Variables
	Definir total, eleccion Como Entero
	Definir opc Como Cadena
	total <- 0
	opc <- 's'
	eleccion <- 0
	Repetir
		Escribir '-----------Menu de Cafeteria------------'
		Escribir '| 1) Cafe____________________Q.10.00    |'
		Escribir '| 2) Pastel__________________Q.25.00    |'
		Escribir '| 3) Desayuno________________Q.50.00    |'
		Escribir '| 4) Wafles__________________Q.15.00    |'
		Escribir '| 5) Gaseosa_________________Q.10.00    |'
		Escribir 'Ingrese la opcion que desea'
		Leer eleccion
		Si (eleccion==1) Entonces
			total <- total+10
		SiNo
			Si (eleccion==2) Entonces
				total <- total+25
			SiNo
				Si (eleccion==3) Entonces
					total <- total+50
				SiNo
					Si (eleccion==4) Entonces
						total <- total+15
					SiNo
						Si (eleccion==5) Entonces
							total <- total+10
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
		Escribir 'Desea continuar pidiendo(si/no)'
		Leer opc
	Hasta Que opc='n'
	Escribir 'EL total de su Pedido es: Q.', total
	Escribir 'Gracias por su pedido'
FinAlgoritmo
