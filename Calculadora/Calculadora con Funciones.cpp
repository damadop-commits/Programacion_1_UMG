#include <iostream>
using namespace std;

float calcular(float numeroUno, float numeroDos, char op) {

    switch (op) {
    case 'A':
        return numeroUno + numeroDos;
    case 'B':
        return numeroUno - numeroDos;
    case 'C':
        return numeroUno * numeroDos;
    case 'D':
        if (numeroDos != 0)
            return numeroUno / numeroDos;
        else {
            cout << "Error: division entre cero" << endl;
            return numeroUno;
        }
    default:
        cout << "Opcion invalida" << endl;
        return numeroUno;
    }
}

void mostrarMenu() {
    cout << "A) Suma" << endl;
    cout << "B) Resta" << endl;
    cout << "C) Multiplicacion" << endl;
    cout << "D) Division" << endl;
}

int main() {

    float numeroUno, numeroDos, total;
    char opcion;

    cout << "Ingrese el primer numero: ";
    cin >> numeroUno;

    cout << "Ingrese el segundo numero: ";
    cin >> numeroDos;

    mostrarMenu();
    cin >> opcion;

    total = calcular(numeroUno, numeroDos, opcion);

    cout << "Resultado: " << total << endl;

    while (true) {

        cout << "________________________" << endl;
        cout << "G) Otra operacion" << endl;
        cout << "F) Salir" << endl;
        cin >> opcion;

        if (opcion == 'F') {
            cout << "Saliendo..." << endl;
            cout << "Total final: " << total << endl;
            break;
        }

        if (opcion == 'G') {

            cout << "Ingrese nuevo numero: ";
            cin >> numeroDos;

            mostrarMenu();
            cin >> opcion;

            total = calcular(total, numeroDos, opcion);

            cout << "Nuevo total: " << total << endl;
        }
    }

    return 0;
}
