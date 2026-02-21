Algoritmo EncontrarelmasGrande
	definir contador Como entero
	definir numeroIngresado Como Entero
	definir mayor Como Entero
	
	para  contador <- 1 Hasta 10 hacer 
		escribir "Ingrese unidades vendidas"
		leer numeroIngresado
		
		si contador = 1 Entonces
			mayor <- numeroIngresado
		sino 
			si numeroIngresado > mayor Entonces
				mayor <- numeroIngresado
			FinSi
		FinSi
	FinPara
	Escribir "El numero Mayor es: " mayor
FinAlgoritmo
