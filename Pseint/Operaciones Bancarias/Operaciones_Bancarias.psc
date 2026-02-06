Algoritmo Operaciones_Bancarias
	Definir nombre Como Caracter
	Definir saldo_inicial como real
	Definir saldo_final Como real
	Definir monto Como Real
	Definir promedio_de_retiro, total_retiros Como Real
	definir maximo, minimo Como Real
	definir deposito_efectivo, deposito_cheque, retiro Como Entero
	definir accion como caracter
	definir  accion_2 como entero
	total_retiros <- 0
	monto <- 0
	saldo_inicial <- 0
	deposito_cheque <- 0
	deposito_efectivo <- 0
	retiro<-0
	minimo <- 0
	maximo <- 0
	Escribir "Ingrese el Nombre de Usuario de la Cuenta"
	leer nombre
	Escribir "Ingrese su saldo inicial"
	leer saldo_inicial
	saldo_final <- saldo_inicial
	
	repetir 
		EScribir "-----------Opciones Bancarias---------------"
		Escribir "  D) deposito"
		Escribir "  R) Retiro"
		Escribir "  F) fin"
		leer accion
		si (accion == "D" ) entonces
			Escribir "Elija que opcion de deposito desea Cheque/Efectivo"
			Escribir " 1) Cheque"
			Escribir " 2) Efectivo"
			Leer accion_2
			si accion_2 == 1 entonces 
				Escribir "Ingrese la Canntidad de Deposito"
				Leer monto
				saldo_final <- saldo_final + (monto - (monto*0.01))
				deposito_cheque <- deposito_cheque + 1
			sino 
				si accion_2 == 2 entonces
					Escribir "Ingrese la Canntidad de Deposito"
					Leer monto
					saldo_final <- saldo_final + monto
					deposito_efectivo <- deposito_efectivo + 1
				FinSi
			FinSi
		FinSi
		si minimo = 0 Entonces
			minimo <- monto
		SiNo
			si monto < minimo Entonces
				minimo <- monto
				
			FinSi
		FinSi
		si accion = "R"
			Escribir "ingrese el monto que desea retirar: "
			leer monto
			si monto < saldo_final Entonces
				saldo_final<-saldo_final-monto
				retiro <-retiro+1
				total_retiros=total_retiros+monto
				si maximo < monto Entonces
					maximo<-monto
				FinSi
			SiNo
				escribir "el monto que desea retirar es mayor a su saldo disponible"
			FinSi
		FinSi
		Escribir "saldo inicial: ", saldo_inicial
		Escribir "saldo final: ", saldo_final
	Hasta Que accion == "F"
	Escribir "El nombres es: "  nombre
	Escribir "Saldo inicial es: " saldo_inicial
	Escribir "Saldo Final es: " saldo_final
	Escribir "Numero de depositos en efectivo:" deposito_efectivo
	Escribir "Numero de depositos en cheque:" deposito_cheque
	Escribir "Monto promedio de Retiro:" total_retiros/retiro
	Escribir "Monto minimo Despositado:" minimo
	Escribir "Monto maximo Retirado: " maximo
	
FinAlgoritmo
