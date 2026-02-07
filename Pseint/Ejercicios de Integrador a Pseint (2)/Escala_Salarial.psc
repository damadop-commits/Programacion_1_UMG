Algoritmo Escala_Salarial
	// DEfinicion de Variables
	Definir edad Como Entero
	Definir sueldo_anual, aporte_final, aporte Como Real
	// Ingreso de Datos
	Escribir 'Ingrese su edad'
	Leer edad
	aporte <- 0
	// Proceso para obtener un resultado
	Si edad>30 Y edad<122 Entonces
		Escribir 'Ingrese sueldo anual'
		Leer sueldo_anual
		Si sueldo_anual>0 Y sueldo_anual<10000 Entonces
			aporte_final <- (sueldo_anual*(0.5/100))
			Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
		SiNo
			Si sueldo_anual>=10000 Y sueldo_anual<=19999 Entonces
				aporte_final <- (sueldo_anual*(1/100))
				Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
			SiNo
				Si sueldo_anual>=20000 Y sueldo_anual<=29999 Entonces
					aporte_final <- (sueldo_anual*(2/100))
					Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
				SiNo
					Si sueldo_anual>=30000 Entonces
						aporte_final <- (sueldo_anual*(2.5/100))
						Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
					FinSi
					Escribir 'ERROR, valor incorrecto'
				FinSi
			FinSi
		FinSi
	SiNo
		Si edad>0 Y edad<=30 Entonces
			Escribir 'Ingrese sueldo anual'
			Leer sueldo_anual
			Si sueldo_anual>0 Y sueldo_anual<10000 Entonces
				aporte <- (sueldo_anual*(0.5/100))
				aporte_final <- aporte+(aporte*20/100)
				Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
			SiNo
				Si sueldo_anual>=10000 Y sueldo_anual<=19999 Entonces
					aporte <- (sueldo_anual*(1/100))
					aporte_final <- aporte+(aporte*20/100)
					Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
				SiNo
					Si sueldo_anual>=20000 Y sueldo_anual<=29999 Entonces
						aporte <- (sueldo_anual*(2/100))
						aporte_final <- aporte+(aporte*20/100)
						Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
					SiNo
						Si sueldo_anual>30000 Entonces
							aporte <- (sueldo_anual*(2.5/100))
							aporte_final <- aporte+(aporte*20/100)
							Escribir 'Su aporte seria: $ ', aporte_final, ' dolares'
						SiNo
							Escribir 'ERROR, valor incorrecto'
						FinSi
					FinSi
				FinSi
			FinSi
		SiNo
			Escribir 'ERROR, valor incorrecto'
		FinSi
	FinSi
FinAlgoritmo
