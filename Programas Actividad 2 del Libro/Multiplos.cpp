#include <iostream>
using namespace std;
int main(){

 int num1 = 0;
 int num2 = 0;

    cout <<"Ingrese el primer numero" << " ";
    cin >> num1;

    cout <<"Ingrese el segundo numero" << " ";
    cin >> num2;

        if (num1 % num2 == 0) {
            cout <<"El numero " << num1 << " " << "es multiplo de " << num2 << endl;
        }
        else{
            cout <<"El numero " << num1 << " " << "no es multiplo de " << num2 << endl;
        }

        return 0;
}
