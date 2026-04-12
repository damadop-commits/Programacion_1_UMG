#include <iostream>

using namespace std;

void cuadrado(int lado, char caracterRelleno) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << caracterRelleno;
        }
        cout << endl;
    }
}

int main() {
    cuadrado(5, '&');

    return 0;
}
