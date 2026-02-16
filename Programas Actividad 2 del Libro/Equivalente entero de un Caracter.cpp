#include <iostream>
using namespace std;
int main(){

 char caracter = 0;

  cout <<"Ingrese el Caracter que Sesea Saber su Equivalente en Entero" << " ";
  cin >> caracter;

  cout << "El Caracter Ingresado es: " << caracter <<  endl;
  cout << "Su valor entero es:       " << static_cast < int > (caracter) << endl;
}
