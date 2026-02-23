# include <iostream>
# include <string>
using namespace std;

int cantidadAsteriscos = 0;

int main () {
    for ( int i = 1; i <= 5; i++) {
     cout << "Ingrese Cantidad de Asperiscos a Crear: ";
     cin >> cantidadAsteriscos;

     if (cantidadAsteriscos >= 1 && cantidadAsteriscos <= 30) {
        cout << string(cantidadAsteriscos,'*') << endl;
        }else
            cout <<"ERROR, Valor invalido" << endl;
}

return 0;
}
