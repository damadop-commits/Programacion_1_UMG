#include <iostream>

using namespace std;

int segundosDesde12(int h, int m, int s) {
    if (h == 12)
        h = 0;

    return h * 3600 + m * 60 + s;
}

int main() {
    int h1, m1, s1;
    int h2, m2, s2;

    cout << "Horas(h)\t Minutos(m)\tSegundos()"<< endl;
    cout << "Ingrese la primera hora (h m s): ";
    cin >> h1 >> m1 >> s1;

    cout << "Ingrese la segunda hora (h m s): ";
    cin >> h2 >> m2 >> s2;

    int t1 = segundosDesde12(h1, m1, s1);
    int t2 = segundosDesde12(h2, m2, s2);

    int diferencia = t2 - t1;

    cout << "Diferencia en segundos: " << diferencia << endl;

    return 0;
}
