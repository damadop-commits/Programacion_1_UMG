#include <iostream>

using namespace std;

bool esPar(int n) {
    return (n % 2 == 0);
}

int main() {
    int num;
    char opcion;

    do {
        cout << "Ingrese un numero entero: ";
        cin >> num;

        if (esPar(num)) {
            cout << num << " es par" << endl;
        } else {
            cout << num << " es impar" << endl;
        }

        cout << "\nDesea ingresar otro numero? (s/n): ";
        cin >> opcion;

    } while (opcion == 's' || opcion == 'S');

    return 0;
}
