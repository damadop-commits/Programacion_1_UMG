#include "Juego.h"
#include <fstream>
#include <unistd.h>

// Función que genera un número aleatorio dentro de un rango específico
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    // Se usa la función rand() para obtener un número entre minimo y maximo
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// Genera una fila aleatoria basada en el tamaño del tablero
int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

// Genera una columna aleatoria basada en el tamaño del tablero
int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// Constructor de la clase Juego
// Recibe un tablero y la cantidad de minas que se desean colocar
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;

    // Se colocan las minas automáticamente al iniciar el juego
    this->colocarMinasAleatoriamente();
}

// Método que coloca las minas en posiciones aleatorias del tablero
void Juego::colocarMinasAleatoriamente()
{
    int x, y;
    int minasColocadas = 0;

    // Se repite hasta colocar todas las minas necesarias
    while (minasColocadas < this->cantidadMinas)
    {
        // Se generan posiciones aleatorias
        x = this->columnaAleatoria();
        y = this->filaAleatoria();

        // Solo se coloca la mina si la celda no tiene una ya
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

// Solicita al usuario la fila donde desea jugar
int Juego::solicitarFilaUsuario()
{
    int fila = 0;

    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;

    // el arreglo en C++ empieza desde 0
    return fila - 1;
}

// Solicita al usuario la columna donde desea jugar
int Juego::solicitarColumnaUsuario()
{
    int columna = 0;

    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;

    // Igual que la fila, se ajusta al índice del arreglo
    return columna - 1;
}

// Verifica si el jugador ha ganado el juego
bool Juego::jugadorGana()
{
    // Cuenta las celdas que no tienen mina y aún no han sido descubiertas
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();

    // Si ya no quedan celdas por descubrir, el jugador gana
    if (conteo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Método principal que inicia el juego
void Juego::iniciar()
{
    int fila, columna;

    // Ciclo principal del juego
    while (true)
    {
        // Se imprime el estado actual del tablero
        this->tablero.imprimir();

        // Se pide al usuario la posición donde quiere jugar
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();

        // Se intenta descubrir la celda seleccionada
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        // Si el usuario pierde (descubre una mina)
        if (!respuestaAUsuario)
        {
            cout << "Perdiste el Juego\n";

            // Se activa el modo desarrollador para mostrar todas las minas
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }

        // Si el jugador gana (descubre todas las celdas seguras)
        if (this->jugadorGana())
        {
            cout << "Ganaste el Juego\n";

            // Se muestra el tablero completo
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }
    }
}
