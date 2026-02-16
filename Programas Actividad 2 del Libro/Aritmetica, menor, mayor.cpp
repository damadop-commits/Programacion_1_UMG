//Aritmerica, menor y menor
 int main()
 {
     int numero1 = 0;
     int numero2 = 0;
     int numero3 = 0;
     int suma = 0;
     int promedio = 0;
     int producto = 0;
     int menor = 0;
     int mayor = 0;

     std::cout <<"Ingrese Tres Numeros Enteros ";
     std::cin >> numero1, numero2, numero3;

     suma = numero1 + numero2 + numero3;
     promedio = (numero1 + numero2 + numero3)/3;
     producto = numero1 * numero2 * numero3;


     std::cout << "La Suma es:" << " " << suma;
     std::cout << "El Promedio es:" << " " << promedio << endl;
     return 0;
 }

