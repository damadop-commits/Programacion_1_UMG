#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int codigoPago;
    double salarioTotal, ventasSemanales, montoPorArticulo;
    int horasTrabajadas, articulosProducidos;
    double sueldoFijoHora, sueldoFijoSemanal;

    cout << "--- Sistema de Calculo de Salarios ---" << endl;
    cout << "Introduzca el codigo de pago (-1 para terminar): ";
    cin >> codigoPago;

    while (codigoPago != -1) {
        switch (codigoPago) {
            case 1: // Gerentes
                cout << "Selecciono: Gerente." << endl;
                cout << "Ingrese el salario semanal fijo: ";
                cin >> sueldoFijoSemanal;
                salarioTotal = sueldoFijoSemanal;
                break;

            case 2: // Trabajadores por horas
                cout << "Selecciono: Trabajador por horas." << endl;
                cout << "Ingrese el sueldo por hora: ";
                cin >> sueldoFijoHora;
                cout << "Ingrese las horas trabajadas: ";
                cin >> horasTrabajadas;

                if (horasTrabajadas <= 40) {
                    salarioTotal = horasTrabajadas * sueldoFijoHora;
                } else {
                    // 40 horas normales + horas extra a 1.5
                    salarioTotal = (40 * sueldoFijoHora) + ((horasTrabajadas - 40) * sueldoFijoHora * 1.5);
                }
                break;

            case 3: // Empleados por comision
                cout << "Selecciono: Empleado por comision." << endl;
                cout << "Ingrese las ventas totales de la semana: ";
                cin >> ventasSemanales;
                // $250 fijos + 5.7% de las ventas
                salarioTotal = 250 + (ventasSemanales * 0.057);
                break;

            case 4: // Trabajadores por piezas
                cout << "Selecciono: Trabajador por piezas." << endl;
                cout << "Ingrese la cantidad de articulos producidos: ";
                cin >> articulosProducidos;
                cout << "Ingrese el monto por articulo: ";
                cin >> montoPorArticulo;
                salarioTotal = articulosProducidos * montoPorArticulo;
                break;

            default:
                cout << "Codigo de pago incorrecto." << endl;
                salarioTotal = 0;
                break;
        }

        if (salarioTotal > 0) {
            cout << fixed << setprecision(2);
            cout << "El sueldo semanal es: $" << salarioTotal << endl;
        }
        cout << "\nIntroduzca el siguiente codigo de pago (-1 para terminar): ";
        cin >> codigoPago;
    }
    return 0;
}
