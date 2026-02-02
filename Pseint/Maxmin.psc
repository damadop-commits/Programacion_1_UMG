Algoritmo Maxmin
	Definir N como entero
	Definir max Como Real
	DEfinir min Como Real
	Definir val Como real
	definir i Como Entero
	
	
	Escribir ' Cuantos Numeros desea ingresar: '
	Leer N
	i = 1
	mientras i <= N Hacer
		Escribir 'Ingrese un valor: '
		Leer val
		
		si i = 1 Entonces
			min <-val
			max <-val
		SiNo
			si val < min Entonces
				min = val
			FinSi
			
			si val > max Entonces
				max <-val
			FinSi
		FinSi
		i <- i +1;
	FinMientras
	
	Escribir 'El valor maximo es: ', max
	Escribir 'El valor Minimo es: ', min
FinAlgoritmo

