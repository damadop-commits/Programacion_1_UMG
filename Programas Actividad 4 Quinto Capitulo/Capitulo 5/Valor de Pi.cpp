#include <iostream>
using namespace std;

int main() {

    double pi = 0.0;
    double valorNumerador = 4.0;
    int signo = 1;   // controla + y -

    for (int valorDivision = 1; valorDivision <= 1000; valorDivision += 2) {

        pi += signo * (valorNumerador / valorDivision);

        signo = -signo;   // cambia el signo
    }

    cout << "Valor aproximado de pi: " << pi << endl;

    return 0;
}
