#include <iostream>
using namespace std;

float numeroUno = 0;
float numeroDos = 0;
int numeroVeces = 0;

float calcularPromedio(float totalGeneral, int numeroVeces){
    return totalGeneral / numeroVeces;
}

int main() {

    cout << "Ingrese Primer Numero: ";
    cin >> numeroUno;

    cout << "Ingrese Segundo Numero: ";
    cin >> numeroDos;

    cout << "Ingrese el numero de Veces: ";
    cin >> numeroVeces;

    float totalInicial = numeroUno + numeroDos;

    cout << "Promedio General: "
         << calcularPromedio(totalInicial, numeroVeces)
         << endl;

    return 0;
}

