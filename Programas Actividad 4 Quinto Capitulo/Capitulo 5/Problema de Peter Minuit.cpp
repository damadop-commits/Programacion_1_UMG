#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double principal = 24.00;
    int anios = 2026 - 1626;

    cout << "Calculo del valor de la inversion de Peter Minuit" << endl;
    cout << "Anios transcurridos: " << anios << endl;
    cout << "-----------------------------------------------" << endl;
    cout << setw(10) << "Tasa (%)" << setw(25) << "Monto en Deposito" << endl;

    for (int tasaInt = 5; tasaInt <= 10; ++tasaInt) {
        double tasaDecimal = tasaInt / 100.0;

        double monto = principal * pow(1.0 + tasaDecimal, anios);

        cout << setw(10) << tasaInt << "%"
             << setw(25) << fixed << setprecision(2) << monto << endl;
    }

    return 0;
}
