//Aritmerica, menor y mayor
#include <iostream>
 using namespace std;
     int main(){
     int numero1 = 0;
     int numero2 = 0;
     int numero3 = 0;

     cout <<"Ingrese Primer Numero" << " ";
     cin >> numero1;

    cout <<"Ingrese Segundo Numero" << " ";
    cin >> numero2;

    cout << "Ingrese Tercer Numero" << " ";
    cin >> numero3;

     int suma = 0;
     int producto = 0;
     int mayor = numero1;
     int menor = numero1;

     if (numero2 > mayor) mayor = numero2;
     if (numero3 > mayor) mayor = numero3;

     if (numero2 < menor) menor = numero2;
     if (numero3 < menor) menor = numero3;

     suma = (numero1 + numero2 + numero3);
      double promedio = suma / 3.0;
     producto = (numero1 * numero2 * numero3);


     cout << "La Suma es:" << " " << suma << "\n";
     cout << "El Promedio es:" << " " << promedio << "\n";
     cout << "El Producto es:" << " " << producto << "\n";
     cout << "El Mayor es " << " " << mayor << "\n";
     cout << "El Menor es " << " " << menor << "\n";

     return 0;
 }
