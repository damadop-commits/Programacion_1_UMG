#include <iostream>
#include <string>
using namespace std;

class Cuenta {
public:
    Cuenta(unsigned int num, string nom, string ape, double sal)
        : numeroCuenta{num}, primerNombre{nom},
          apellido{ape}, saldo{sal} {}

private:
    unsigned int numeroCuenta;
    string primerNombre;
    string apellido;
    double saldo;
};

int main() {

    // Inciso a)
    unsigned int contadorEstudiantes{0};

    // Inciso b)
    double saldoInicial{1000.0};

    // Inciso c)
    Cuenta cuenta1{12345, "Daniel", "Amado", saldoInicial};

    return 0;
}
