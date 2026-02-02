Algoritmo Formula_Masa
	Definir c1 Como real
	Definir c2 como real
	Definir presion Como real
	Definir volumen como real
	Definir temperatura Como Real
	Definir masa Como Real
	
	// Constantes
	c1 <- 0.37
	c2 <- 460
	//Entrada de datos por parte de el usuario
	Escribir 'Ingrese la presion: '
	Leer presion
	Escribir 'Ingrese el Volumen: '
	Leer volumen
	Escribir 'Ingrese la temperatura: '
	Leer temperatura
	
	//Proceso 
	masa<-(presion*volumen) / (c1 * temperatura + c2)
	//salida de datos al usuario
	Escribir 'La masa resultante es: ', masa
	
FinAlgoritmo
