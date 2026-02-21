Algoritmo Encontrar_los_dos_Numeros_mas_Grandes
	
	definir contador Como Entero
	definir numeroIngresado Como Entero
	definir mayor Como Entero
	definir segundoMayor Como Entero
	
	mayor <- -9999
	segundoMayor <- -9999
	
	Para contador <- 1 Hasta 10 Hacer
		Escribir "Ingrese unidades vendidas:"
		Leer numeroIngresado
		
		Si numeroIngresado > mayor Entonces
			segundoMayor <- mayor
			mayor <- numeroIngresado
		SiNo
			Si numeroIngresado > segundoMayor Y numeroIngresado <> mayor Entonces
				segundoMayor <- numeroIngresado
			finsi
		FinSi
		
	FinPara
	
	Escribir "El numero Mayor es: ", mayor
	Escribir "El segundo numero Mayor es: ", segundoMayor
	
FinAlgoritmo


