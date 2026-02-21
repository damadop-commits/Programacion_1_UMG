#include <iostream>
using namespace std;

float ventas = 0;
float salario = 0;

int main(){

    cout << "Ingrese el Total de Ventas en Dolares (Ingrese -1 para salir)";
    cin >> ventas;

    while (ventas != -1) {
        salario = 0;
        salario += 200 +((0.09) * ventas);

        cout << "El Salario es: $ " << salario << endl;

        cout << "Ingrese el Total de Ventas en Dolares (Ingrese -1 para salir)";
    cin >> ventas;
}
return 0;
}
