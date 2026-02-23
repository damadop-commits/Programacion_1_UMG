#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double monto;
    double principal = 1000.0;
    double tasa = 0.05;

    cout << "Anio" << setw(20) << "Monto en deposito" << endl;
    cout << fixed << setprecision(2);

    for (unsigned int anio = 1; anio <= 6; ++anio) {

        monto = principal * pow(1.0 + tasa, anio);

        cout << setw(4) << anio
             << setw(20) << monto << endl;

        tasa += 0.01;   // aumenta 1% cada año
    }

    return 0;
}
