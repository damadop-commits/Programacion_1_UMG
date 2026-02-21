# include <iostream>
using namespace std;
int main() {

int primerNumero = 0;
int segundoNumero = 0;
int tercerNumero = 0;
int hipotenusa = 0;
int catOpuesto = 0;
int catAdyacente = 0;

cout << "Ingrese Primer Numero: ";
cin >> primerNumero;

cout << "Ingrese Segundo Numero: ";
cin >> segundoNumero;

cout << "Ingrese Tercer Numero: ";
cin >> tercerNumero;

    if (primerNumero > 0 && segundoNumero > 0 && tercerNumero > 0 ){
    if (primerNumero > segundoNumero && primerNumero > tercerNumero ){
            hipotenusa = primerNumero;
            catAdyacente = segundoNumero;
            catOpuesto = tercerNumero;
          }  else
            if (segundoNumero > primerNumero &&  segundoNumero > tercerNumero) {
            hipotenusa = segundoNumero;
            catAdyacente = primerNumero;
            catOpuesto = tercerNumero;
              }  else {
            hipotenusa= tercerNumero;
            catAdyacente = primerNumero;
            catOpuesto = segundoNumero; }

            if (((catAdyacente * catAdyacente) + (catOpuesto * catOpuesto)) == (hipotenusa * hipotenusa)) {

            cout << "Los Valores Ingresados Forman un Triangulo Recto";
        } else
          cout << "Los Valores Ingresados NO Forman un Triangulo Recto";
   }else
            cout <<"ERROR (Los Numeros Deden ser Mayores que 0";
return 0;
    }


