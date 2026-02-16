#include <iostream>
using namespace std;

int main() {

    double kilometros = 0;
    double C_gasolina = 0;
    double P_kilo_x_litro = 0;
    double C_estacionamiento = 0;
    double peaje = 0;
    double costo_total = 0;

    cout << "Ingrese el Total de Kilometros Conducidos por Dia: ";
    cin >> kilometros;

    cout << "Ingrese el Costo por litro de Gasolina: ";
    cin >> C_gasolina;

    cout << "Ingrese el Promedio de Kilometros por Litro: ";
    cin >> P_kilo_x_litro;

    cout << "Ingrese la Cuota de Estacionamiento por Dia: ";
    cin >> C_estacionamiento;

    cout << "Ingrese el Peaje por Dia: ";
    cin >> peaje;

    costo_total = C_estacionamiento + peaje + (C_gasolina * (kilometros / P_kilo_x_litro));

    cout << "El total a gastar por dia es de: Q. " << costo_total << endl;

    return 0;
}

