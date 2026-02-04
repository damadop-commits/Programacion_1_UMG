Algoritmo Monto_En_Billetes_Y_Monedas
	//Definir Variables
	Definir monto Como real
	Definir billetes como Entero
	Definir monedas Como real
	
	//Solicitar monto de dinero
	Escribir "Ingrese el Monto de Dinero: "
	Leer monto
	
	//billetes
	billetes <- TRUNC (monto/200)
	Escribir "Billetes de Q.200: ", billetes
	monto <- monto - billetes * 200
	
	billetes <- TRUNC (monto/100)
	Escribir "Billetes de Q.100: ", billetes
	monto <- monto - billetes * 100
	
	billetes <- TRUNC (monto/50)
	Escribir "Billetes de Q.50: ", billetes
	monto <- monto - billetes * 50
	
	billetes <- TRUNC (monto/20)
	Escribir "Billetes de Q.20: ", billetes
	monto <- monto - billetes * 20
	
	billetes <- TRUNC (monto/10)
	Escribir "Billetes de Q.10: ", billetes
	monto <- monto - billetes * 10
	
	billetes <- TRUNC (monto/5)
	Escribir "Billetes de Q.5: ", billetes
	monto <- monto - billetes * 5
	
	billetes <- TRUNC (monto/1)
	Escribir "Billetes de Q.1: ", billetes
	monto <- monto - billetes * 1
	
	//monedas
	monedas <- TRUNC (monto/0.50)
	Escribir "Monedas de Q.0.50: ", monedas
	monto <- monto - monedas * 0.50
	
	monedas <- TRUNC (monto/0.25)
	Escribir "Monedas de Q.0.25: ", monedas
	monto <- monto - monedas * 0.25
	
	monedas <- TRUNC (monto/0.10)
	Escribir "Monedas de Q.0.10: ", monedas
	monto <- monto - monedas * 0.10
	
	monedas <- TRUNC (monto/0.05)
	Escribir "Monedas de Q.0.05: ", monedas
	monto <- monto - monedas * 0.05
	
	monedas <- TRUNC (monto/0.01)
	Escribir "Monedas de Q.0.01: ", monedas
	monto <- monto - monedas * 0.01
FinAlgoritmo
