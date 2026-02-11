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
	int anio_actual;
	int anio_nacimiento;
	int edad;
	string nombre;
	// Definicion de Variables
	// Solicitar datos al usuario
	cout << "Ingrese Nombre Completo" << endl;
	cin >> nombre;
	cout << "Ingrese año de Nacimiento" << endl;
	cin >> anio_nacimiento;
	// Calculo de Edad
	anio_actual = 2026;
	edad = anio_actual-anio_nacimiento;
	// Resultado edad y persona que lo solicita
	cout << nombre << " ustede tiene: " << edad << " años" << endl;
	return 0;
}

