#include <iostream>
using namespace std;
int main() {

int numeroBinario;
int numeroDecimal = 0;
int potencia = 1;
int digito;

cout << "Ingrese el Numero Binario a Convertir: ";
cin >> numeroBinario;

while (numeroBinario > 0 ){
    digito = numeroBinario % 10;
    numeroDecimal += digito * potencia;
    potencia *= 2;
    numeroBinario /= 10;
}
    cout << "El aquivalente Decimal es: " << numeroDecimal;

 return 0;
}
