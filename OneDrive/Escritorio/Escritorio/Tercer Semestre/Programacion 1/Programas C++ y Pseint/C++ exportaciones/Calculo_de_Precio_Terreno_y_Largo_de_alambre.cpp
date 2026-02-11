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
	float alambre_a_comprar;
	float ancho;
	float largo;
	float perimetro;
	float precio;
	float terreno;
	float total;
	// DEfinicion de Variables
	// Solicitar Datos al usuario para el calculo y almacenarlos en variables
	cout << "Ingrese el ancho del terreno (metros)" << endl;
	cin >> ancho;
	cout << "Ingrese el largo del terreno (metros)" << endl;
	cin >> largo;
	cout << "Ingrese el precio de metro cuadrado" << endl;
	cin >> precio;
	// Calculo de precio y metros de alambre
	terreno = ancho*largo;
	total = terreno*precio;
	perimetro = (ancho*2+largo*2);
	alambre_a_comprar = perimetro*3;
	// Envio de resultados
	cout << "El Precio de el Terreno es: " << total << "," << " tiene que comprar " << alambre_a_comprar << " metros de alambre." << endl;
	return 0;
}

