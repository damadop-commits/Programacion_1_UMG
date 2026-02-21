#include <iostream>
using namespace std;
int main() {
int tamanioCuadro {0};

cout << "Ingrese el Tamanio que desea el Cuadrado de (1 a 20): ";
cin >> tamanioCuadro;

    if (tamanioCuadro <= 20 and tamanioCuadro >= 1)

    for (int fila = 1; fila <= tamanioCuadro ; fila++ ) {

        for (int columna = 1; columna <= tamanioCuadro; columna++) {

        if (fila == 1 || fila == tamanioCuadro || columna == 1 || columna == tamanioCuadro)
            cout << "*";
        else
            cout << " " ;
    }
    cout << endl;
}
    else
   cout << "Error Solo se Permimte Ingresar de (1 a 20)";
return 0;
}
