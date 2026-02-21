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
	int contador;
	int mayor;
	int numeroingresado;
	int segundomayor;
	mayor = -9999;
	segundomayor = -9999;
	for (contador=1; contador<=10; ++contador) {
		cout << "Ingrese unidades vendidas:" << endl;
		cin >> numeroingresado;
		if (numeroingresado>mayor) {
			segundomayor = mayor;
			mayor = numeroingresado;
		} else {
			if (numeroingresado>segundomayor && numeroingresado!=mayor) {
				segundomayor = numeroingresado;
			}
		}
	}
	cout << "El numero Mayor es: " << mayor << endl;
	cout << "El segundo numero Mayor es: " << segundomayor << endl;
	return 0;
}

