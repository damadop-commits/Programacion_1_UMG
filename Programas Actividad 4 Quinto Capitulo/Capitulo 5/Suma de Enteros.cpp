# include <iostream>
using namespace std;
 int veces = 0;
 int numeroVeces = 0;
 int numeroSumar = 0;
 int total = 0;
 int totalFinal = 0;

int main() {
    cout << "Ingrese Cantidad de la secuencia: ";
    cin >> veces;
    cout << "Ingrese Numero a Sumar en la Secuencia: ";
    cin >> numeroSumar;
for ( numeroVeces = 1;  numeroVeces  <= veces; numeroVeces ++ ) {
        if (numeroVeces == 6)
        break ;
    total = numeroSumar * numeroVeces;
    cout << total << endl;
    totalFinal += total;
}
cout << "                " << endl;
cout << totalFinal << endl;


return 0;
}
