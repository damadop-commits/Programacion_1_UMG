#include <iostream>
#include <cmath>

using namespace std;

main() {
 float y;
 double x;
 char opcion;

 do{
        cout <<"Ingrese un Numero: ";
        cin >> x;
        y = floor (x + 0.5);

        cout << "Numero Redondeado: "<< y << endl;
        cout << "Numero Original: "<< x << endl;

        cout <<"Desea Continuar (S/N): ";
        cin >> opcion;
}

while(opcion == 's' || opcion == 'S');

              return 0;
}
