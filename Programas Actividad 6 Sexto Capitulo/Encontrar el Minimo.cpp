#include <iostream>

using namespace std;

double minimo(double a, double b, double c){
double menor = a;

    if (b < menor)
    menor = b;

    if (c < menor)
    menor = c;

    return menor;
}

main(){
    double a,b,c;

    cout <<"Ingrese tres Nombre"<<endl;
    cin >> a >> b >> c;

    cout << "El menor es: " << minimo(a,b,c) << endl;

        return 0;
}
