# include <iostream>
using namespace std;

int numero = 0;
int producto = 0;
int suma = 1;
int main () {

for (int veces = 1; veces <= 15; veces ++) {

    if ((veces % 2) != 0) {
    suma = suma * veces;
    }
}
  cout << suma  << endl;

return 0;
}
