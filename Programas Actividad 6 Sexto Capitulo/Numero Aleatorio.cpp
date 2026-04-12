#include <iostream>
#include <cstdlib>
using namespace std;

main(){
    char opcion;
do {
cout << 2 + 2 * (rand() % 5) << endl;

cout << 3 + 2 * (rand() % 5) << endl;

cout << 6 + 4 * (rand() % 5) << endl;

 cout <<"Desea Obtener Otros Numero Aleatorios S/N";
 cin >> opcion;
}
while(opcion == 's' || opcion == 'S');
return 0;
}
