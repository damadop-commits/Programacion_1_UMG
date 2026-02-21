# include <iostream>
# include <iomanip>
using namespace std;

int main() {

double poblacionInicial = 8100000000 ;
double poblacionActual = 0;
double tasaCrecimiento = 1.009;
double aumento = 0;
double anio = 0;
double poblacionBase = 8100000000;
bool yaSeDuplico = false;
double anioDuplicacion = 0;

   cout << "Anio" << "\t" << "Poblacion Estimada" "\t" << "Aumento" << endl;
for (anio = 1 ; anio <= 80; anio++ ) {

    poblacionActual = poblacionInicial * tasaCrecimiento;
    aumento = (poblacionActual - poblacionInicial);


    cout << fixed;
    cout << setprecision(0);
    cout << "------------------------------------------------------------" << endl;
    cout << anio << " \t" << poblacionActual << " \t \t"  << aumento << endl;

    poblacionInicial = poblacionActual;


   if (!yaSeDuplico && poblacionActual >= (poblacionBase * 2)) {
   anioDuplicacion = anio;
    yaSeDuplico = true;
}

}

     cout <<" El anio en que se duplicaria la poblacion seria: anio " << anioDuplicacion << endl;

    return 0;
}
