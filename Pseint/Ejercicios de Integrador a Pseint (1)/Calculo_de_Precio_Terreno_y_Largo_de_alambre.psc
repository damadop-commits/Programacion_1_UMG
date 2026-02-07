Algoritmo Calculo_de_Precio_Terreno_y_Largo_de_alambre
	// DEfinicion de Variables
	definir ancho, largo, precio, alambre_a_comprar, perimetro Como Real
	definir total, terreno Como Real
	
	// Solicitar Datos al usuario para el calculo y almacenarlos en variables
	Escribir "Ingrese el ancho del terreno (metros)"
	leer ancho
	
	Escribir "Ingrese el largo del terreno (metros)"
	leer largo
	
	Escribir "Ingrese el precio de metro cuadrado"
	leer precio
	
	//Calculo de precio y metros de alambre 
	terreno <- ancho * largo
	total <- terreno * precio
	perimetro <- (ancho * 2 + largo * 2)
	alambre_a_comprar <- perimetro * 3
	
	//Envio de resultados
	Escribir "El Precio de el Terreno es: " total "," " tiene que comprar " alambre_a_comprar " metros de alambre."
	
FinAlgoritmo
