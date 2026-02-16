Algoritmo Calculadora_Basica
	// Definicion de Variables
	Definir numeroUno, numeroDos, nuevoNumero, total Como Real
	Definir opcion Como Caracter
	
	// Menu inicial
	Escribir "Ingrese el primer numero:"
	Leer numeroUno	
	Escribir "Ingrese el segundo numero:"
	Leer numeroDos
	
	Escribir "Menu de Operaciones"
	Escribir "A) Suma"
	Escribir "B) Resta"
	Escribir "C) Multiplicacion"
	Escribir "D) Division"
	
	Leer opcion
	
	// Primera operacion
	Segun opcion Hacer
		
		Caso 'A':
			total <- numeroUno + numeroDos
			
		Caso 'B':
			total <- numeroUno - numeroDos
			
		Caso 'C':
			total <- numeroUno * numeroDos
			
		Caso 'D':
			Si numeroDos <> 0 Entonces
				total <- numeroUno / numeroDos
			SiNo
				Escribir "Error: division entre cero"
			FinSi
			
		De Otro Modo:
			Escribir "Opcion invalida"
			
	FinSegun
	
	Escribir "Resultado: ", total
	
	// Menu corto (solo otra operacion o salir)
	Mientras opcion <> 'F' Hacer
		
		Escribir "________________________"
		Escribir "G) Otra operacion"
		Escribir "F) Salir"
		Leer opcion
		
		Si opcion = 'F' Entonces
			Escribir "Saliendo..."
		Escribir "El Total es: " total
		
		FinSi
		
		Si opcion = 'G' Entonces
			
			Escribir "Ingrese nuevo numero:"
			Leer nuevoNumero
			
			Escribir "Seleccione operacion:"
			Escribir "A) Suma"
			Escribir "B) Resta"
			Escribir "C) Multiplicacion"
			Escribir "D) Division"
			
			Leer opcion
			
			Segun opcion Hacer
				
				Caso 'A':
					total <- total + nuevoNumero
					
				Caso 'B':
					total <- total - nuevoNumero
					
				Caso 'C':
					total <- total * nuevoNumero
					
				Caso 'D':
					Si nuevoNumero <> 0 Entonces
						total <- total / nuevoNumero
					SiNo
						Escribir "Error: division entre cero"
					FinSi
					
				De Otro Modo:
					Escribir "Opcion invalida"
					
			FinSegun
			
			Escribir "Nuevo total: ", total
			
		FinSi
		
	FinMientras 
FinAlgoritmo

