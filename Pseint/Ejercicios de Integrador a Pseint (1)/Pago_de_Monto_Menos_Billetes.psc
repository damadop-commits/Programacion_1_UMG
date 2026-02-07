Algoritmo Pago_de_Monto_Menos_Billetes
	
	//Definicion de Variables
	Definir monto, billetes Como entero
	
	//Solicitar datos al Usuario
	Escribir "Ingrese monto a Descomponer en la menor cantidad de billetes"
	leer monto
	
	//Proceso para resolver problema
	
	billetes <- TRUNC (monto/100)
	Escribir billetes " billetes de US$ 100"
	monto <- (monto - billetes * 100)
	
	billetes <- TRUNC (monto / 50)
	Escribir billetes " billetes de US$ 50"
	monto <- (monto mod 50)
	
	billetes <- TRUNC (monto / 20)
	Escribir billetes " billetes de US$ 20"
	monto <- (monto mod 20)
	
	billetes <- TRUNC (monto / 10)
	Escribir billetes " billetes de US$ 10"
	monto <- (monto mod 10)
	
	billetes <- TRUNC (monto / 5)
	Escribir billetes " billetes de US$ 5"
	monto <- (monto mod 5)
	
	billetes <- TRUNC (monto / 2)
	Escribir billetes " billetes de US$ 2"
	monto <- (monto mod 2)
	
	billetes <- TRUNC (monto / 1)
	Escribir billetes " billetes de US$ 1"
	monto <- (monto mod 1)
	
FinAlgoritmo
