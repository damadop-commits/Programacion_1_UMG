#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Variables para las categorías de gastos
    double vivienda, comida, ropa, transporte, educacion, salud, vacaciones;
    double totalGastos;

    cout << "--- Calculadora de Impuesto Justo (FairTax) ---" << endl;
    cout << "Introduzca sus gastos anuales estimados en las siguientes categorias:" << endl;

    // Entrada de datos del usuario
    cout << "Alojamiento/Vivienda: "; cin >> vivienda;
    cout << "Comida: "; cin >> comida;
    cout << "Ropa: "; cin >> ropa;
    cout << "Transporte: "; cin >> transporte;
    cout << "Educacion: "; cin >> educacion;
    cout << "Servicios medicos/Salud: "; cin >> salud;
    cout << "Vacaciones: "; cin >> vacaciones;

    // Cálculo del gasto total
    totalGastos = vivienda + comida + ropa + transporte + educacion + salud + vacaciones;

    // Formateo de salida para moneda
    cout << fixed << setprecision(2);
    cout << "\n---------------------------------------------" << endl;
    cout << "Total de gastos anuales: $" << totalGastos << endl;

    // El ejercicio menciona dos tasas de interés para comparar
    // 1. La tasa propuesta del 23%
    // 2. La tasa del 30% que sugieren los opositores
    double impuesto23 = totalGastos * 0.23;
    double impuesto30 = totalGastos * 0.30;

    cout << "Impuesto FairTax estimado (tasa 23%): $" << impuesto23 << endl;
    cout << "Impuesto FairTax estimado (tasa 30%): $" << impuesto30 << endl;
    cout << "---------------------------------------------" << endl;

    return 0;
}
