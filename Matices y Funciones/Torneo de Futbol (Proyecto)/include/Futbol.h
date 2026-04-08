#ifndef FUTBOL_H
#define FUTBOL_H

#include <string>
using namespace std;
class Futbol
{
    public:
        Futbol();

// Constantes
static const int NUMERO_EQUIPOS=10;
static const int NUMERO_FECHAS = 4;
static const int MAX_PUNTOS = 3;
static const int MIN_PUNTOS = 0;
static const int MAXIMA_LONGITUD_CADENA = 100;

// Prototipos
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1],
                     char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA],
                     string nombreTorneo);
};
#endif
