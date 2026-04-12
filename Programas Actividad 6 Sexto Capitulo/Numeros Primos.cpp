#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int contador = 0;

    for (int i = 2; i <= 10000; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
            contador++;
        }
    }

    cout << "\nCantidad de numeros primos: " << contador << endl;

    return 0;
}
