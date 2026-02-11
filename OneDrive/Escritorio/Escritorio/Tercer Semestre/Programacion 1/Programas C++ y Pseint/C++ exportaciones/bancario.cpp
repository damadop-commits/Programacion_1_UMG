// Este codigo ha sido generado por el modulo psexport 20230904-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	int billetes;
	int monto;
	// Definicion de Variables
	// Solicitar datos al Usuario
	cout << "Ingrese monto a Descomponer en la menor cantidad de billetes" << endl;
	cin >> monto;
	// Proceso para resolver problema
	billetes = int(monto/100);
	cout << billetes << " billetes de US$ 100" << endl;
	monto = (monto-billetes*100);
	billetes = int(monto/50);
	cout << billetes << " billetes de US$ 50" << endl;
	monto = (monto%50);
	billetes = int(monto/20);
	cout << billetes << " billetes de US$ 20" << endl;
	monto = (monto%20);
	billetes = int(monto/10);
	cout << billetes << " billetes de US$ 10" << endl;
	monto = (monto%10);
	billetes = int(monto/5);
	cout << billetes << " billetes de US$ 5" << endl;
	monto = (monto%5);
	billetes = int(monto/2);
	cout << billetes << " billetes de US$ 2" << endl;
	monto = (monto%2);
	billetes = int(monto/1);
	cout << billetes << " billetes de US$ 1" << endl;
	monto = (monto%1);
	return 0;
}

