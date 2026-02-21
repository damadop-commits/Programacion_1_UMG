#include <iostream>
using namespace std;

double kilometros = 0;
double kplViaje = 0;
double litros = 0;
double totalKilometros = 0;
double totalLitros = 0;
double kplTotal = 0;
int main() {

     cout << "Ingrese los Kilometros Conuducidos (Ingresar -1 para Salir): ";
    cin >> kilometros;

 while (kilometros != -1) {

    cout << "Ingrese los Litros Gastados: " ;
    cin >> litros;
    kplViaje = (kilometros / litros);

    cout << "KPL en este reabastecimiento: " << kplViaje << endl;
    totalKilometros += kilometros;
    totalLitros += litros;

    kplTotal += kplViaje;

    cout << "Ingrese los Kilometros Conuducidos (Ingresar -1 para Salir): ";
    cin >> kilometros;
 }

      cout <<"Los litros Totales son: " << totalLitros << "\t" << "Los kilometros Totales son "<< totalKilometros<< endl;
 return 0;
}
