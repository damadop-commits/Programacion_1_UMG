// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float aporte;
	float aporte_final;
	int edad;
	float sueldo_anual;
	// DEfinicion de Variables
	// Ingreso de Datos
	cout << "Ingrese su edad" << endl;
	cin >> edad;
	aporte = 0;
	// Proceso para obtener un resultado
	if (edad>30 && edad<122) {
		cout << "Ingrese sueldo anual" << endl;
		cin >> sueldo_anual;
		if (sueldo_anual>0 && sueldo_anual<10000) {
			aporte_final = (sueldo_anual*(0.5/100));
			cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
		} else {
			if (sueldo_anual>=10000 && sueldo_anual<=19999) {
				aporte_final = (sueldo_anual*(1/100));
				cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
			} else {
				if (sueldo_anual>=20000 && sueldo_anual<=29999) {
					aporte_final = (sueldo_anual*(2/100));
					cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
				} else {
					if (sueldo_anual>=30000) {
						aporte_final = (sueldo_anual*(2.5/100));
						cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
					}
					cout << "ERROR, valor incorrecto" << endl;
				}
			}
		}
	} else {
		if (edad>0 && edad<=30) {
			cout << "Ingrese sueldo anual" << endl;
			cin >> sueldo_anual;
			if (sueldo_anual>0 && sueldo_anual<10000) {
				aporte = (sueldo_anual*(0.5/100));
				aporte_final = aporte+(aporte*20/100);
				cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
			} else {
				if (sueldo_anual>=10000 && sueldo_anual<=19999) {
					aporte = (sueldo_anual*(1/100));
					aporte_final = aporte+(aporte*20/100);
					cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
				} else {
					if (sueldo_anual>=20000 && sueldo_anual<=29999) {
						aporte = (sueldo_anual*(2/100));
						aporte_final = aporte+(aporte*20/100);
						cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
					} else {
						if (sueldo_anual>30000) {
							aporte = (sueldo_anual*(2.5/100));
							aporte_final = aporte+(aporte*20/100);
							cout << "Su aporte seria: $ " << aporte_final << " dolares" << endl;
						} else {
							cout << "ERROR, valor incorrecto" << endl;
						}
					}
				}
			}
		} else {
			cout << "ERROR, valor incorrecto" << endl;
		}
	}
	return 0;
}

