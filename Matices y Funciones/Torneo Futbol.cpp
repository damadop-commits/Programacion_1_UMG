#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

// Constantes
#define NUMERO_EQUIPOS 10
#define NUMERO_FECHAS 4
#define MAX_PUNTOS 3
#define MIN_PUNTOS 0
#define MAXIMA_LONGITUD_CADENA 100

// Prototipos
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1], char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA], string nombreTorneo);

int main()
{
    srand(getpid());
    llamaCiclo();
    return 0;
}

void llamaCiclo()
{
    float matriz_torneo_1[NUMERO_EQUIPOS][NUMERO_FECHAS + 1];
    float matriz_torneo_2[NUMERO_EQUIPOS][NUMERO_FECHAS + 1];
    float matriz_torneo_3[NUMERO_EQUIPOS][NUMERO_FECHAS + 1];

    char opcion;
    bool repetir = true;

    float promedio_torneo_1;
    float promedio_torneo_2;
    float promedio_torneo_3;

    char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA] =
    {
        "Barcelona","Manchester City","Bayern Munich","PSG","Juventus",
        "Chelsea","Arsenal","Inter","Benfica","Liverpool"
    };

    do
    {
        system("cls");

        cout << "*** Comparativo de Champions Temporadas ***" << endl << endl;

        llenarMatriz(matriz_torneo_1);
        promedio_torneo_1 = imprimirMatriz(matriz_torneo_1, equipos, "Champions 2024");

        llenarMatriz(matriz_torneo_2);
        promedio_torneo_2 = imprimirMatriz(matriz_torneo_2, equipos, "Champions 2025");

        llenarMatriz(matriz_torneo_3);
        promedio_torneo_3 = imprimirMatriz(matriz_torneo_3, equipos, "Champions 2026");

        if (promedio_torneo_1 > promedio_torneo_2 && promedio_torneo_1 > promedio_torneo_3)
            cout << "El torneo con mas puntos promedio fue: Champions 2024 -> " << promedio_torneo_1 << endl;

        else if (promedio_torneo_2 > promedio_torneo_1 && promedio_torneo_2 > promedio_torneo_3)
            cout << "El torneo con mas puntos promedio fue: Champions 2025 -> " << promedio_torneo_2 << endl;

        else if (promedio_torneo_3 > promedio_torneo_1 && promedio_torneo_3 > promedio_torneo_2)
            cout << "El torneo con mas puntos promedio fue: Champions 2026 -> " << promedio_torneo_3 << endl;

        else
            cout << "Algunos torneos tienen el mismo promedio de puntos" << endl;

        cout << "\nDesea otro calculo (s/n)? ";
        cin >> opcion;

        if (opcion == 'n')
            repetir = false;

    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() % (maximo - minimo + 1);
}

void llenarMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1])
{
    int y, x;

    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        float suma = 0;

        for (x = 0; x < NUMERO_FECHAS; x++)
        {
            int resultado = rand() % 3;

            int puntos;

            if (resultado == 0)
                puntos = 0;
            else if (resultado == 1)
                puntos = 1;
            else
                puntos = 3;

            matriz[y][x] = puntos;
            suma += puntos;
        }

        matriz[y][NUMERO_FECHAS] = suma;
    }
}

void imprimirMatrizLinea()
{
    cout << "+----------------------+---------+---------+---------+---------+---------+\n";
}

float imprimirMatriz(float matriz[NUMERO_EQUIPOS][NUMERO_FECHAS + 1], char equipos[NUMERO_EQUIPOS][MAXIMA_LONGITUD_CADENA], string nombreTorneo)
{
    int y, x;

    float mayor = matriz[0][NUMERO_FECHAS];
    float menor = matriz[0][NUMERO_FECHAS];
    float totalGeneral = 0;

    char equipoMayor[MAXIMA_LONGITUD_CADENA];
    char equipoMenor[MAXIMA_LONGITUD_CADENA];

    memcpy(equipoMayor, equipos[0], MAXIMA_LONGITUD_CADENA);
    memcpy(equipoMenor, equipos[0], MAXIMA_LONGITUD_CADENA);

    cout << nombreTorneo << endl;

    imprimirMatrizLinea();

    cout << "|" << setw(20) << "Equipo"
         << "|" << setw(8) << "P1"
         << "|" << setw(8) << "P2"
         << "|" << setw(8) << "P3"
         << "|" << setw(8) << "P4"
         << "|" << setw(8) << "Tot"
         << "|" << endl;

    imprimirMatrizLinea();

    for (y = 0; y < NUMERO_EQUIPOS; y++)
    {
        cout << "|" << setw(20) << equipos[y];

        for (x = 0; x < NUMERO_FECHAS; x++)
        {
            cout << "|" << setw(8) << matriz[y][x];
        }

        float total = matriz[y][NUMERO_FECHAS];
        totalGeneral += total;

        if (total > mayor)
        {
            mayor = total;
            memcpy(equipoMayor, equipos[y], MAXIMA_LONGITUD_CADENA);
        }

        if (total < menor)
        {
            menor = total;
            memcpy(equipoMenor, equipos[y], MAXIMA_LONGITUD_CADENA);
        }

        cout << "|" << setw(8) << total << "|" << endl;

        imprimirMatrizLinea();
    }

    float promedioGeneral = totalGeneral / NUMERO_EQUIPOS;

    cout << "Equipo con mas puntos: " << equipoMayor << " -> " << mayor << endl;
    cout << "Equipo con menos puntos: " << equipoMenor << " -> " << menor << endl;
    cout << "Promedio de puntos: " << promedioGeneral << endl << endl;

    return promedioGeneral;
}
