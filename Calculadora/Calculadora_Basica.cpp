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
	float nuevonumero;
	float numerodos;
	float numerouno;
	char opcion;
	float total;
	// Definicion de Variables
	// Menu inicial
	cout << "Ingrese el primer numero:" << endl;
	cin >> numerouno;
	cout << "Ingrese el segundo numero:" << endl;
	cin >> numerodos;
	cout << "Menu de Operaciones" << endl;
	cout << "A) Suma" << endl;
	cout << "B) Resta" << endl;
	cout << "C) Multiplicacion" << endl;
	cout << "D) Division" << endl;
	cin >> opcion;
	// Primera operacion
	switch (opcion) {
	case 'A':
		total = numerouno+numerodos;
		break;
	case 'B':
		total = numerouno-numerodos;
		break;
	case 'C':
		total = numerouno*numerodos;
		break;
	case 'D':
		if (numerodos!=0) {
			total = numerouno/numerodos;
		} else {
			cout << "Error: division entre cero" << endl;
		}
		break;
	default:
		cout << "Opcion invalida" << endl;
	}
	cout << "Resultado: " << total << endl;
	// Menu corto (solo otra operacion o salir)
	while (opcion!='F') {
		cout << "________________________" << endl;
		cout << "G) Otra operacion" << endl;
		cout << "F) Salir" << endl;
		cin >> opcion;
		if (opcion=='F') {
			cout << "Saliendo..." << endl;
			cout << "El Total es: " << total << endl;
		}
		if (opcion=='G') {
			cout << "Ingrese nuevo numero:" << endl;
			cin >> nuevonumero;
			cout << "Seleccione operacion:" << endl;
			cout << "A) Suma" << endl;
			cout << "B) Resta" << endl;
			cout << "C) Multiplicacion" << endl;
			cout << "D) Division" << endl;
			cin >> opcion;
			switch (opcion) {
			case 'A':
				total = total+nuevonumero;
				break;
			case 'B':
				total = total-nuevonumero;
				break;
			case 'C':
				total = total*nuevonumero;
				break;
			case 'D':
				if (nuevonumero!=0) {
					total = total/nuevonumero;
				} else {
					cout << "Error: division entre cero" << endl;
				}
				break;
			default:
				cout << "Opcion invalida" << endl;
			}
			cout << "Nuevo total: " << total << endl;
		}
	}
	return 0;
}

