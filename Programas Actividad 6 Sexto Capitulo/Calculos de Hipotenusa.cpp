#include <iostream>
#include <cmath>
using namespace std;

double hipotenusa(double a, double b){
    return sqrt ((a * a) + (b* b));
}
main(){
double a, b;

cout << "a"<<"\t"<< "b" << "\t" << "hipotenusa"
 <<endl;
a = 3.0; b= 4.0;
cout << a << "\t" << b << "\t" <<hipotenusa(a, b)<< endl;

a = 5.0; b= 12.0;
cout << a << "\t" << b << "\t" <<hipotenusa(a, b)<< endl;

a = 8.0; b= 15.0;
cout << a << "\t" << b << "\t" <<hipotenusa(a, b)<< endl;

return 0;
}
