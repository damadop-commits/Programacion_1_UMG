#include <iostream>
#include <unistd.h>
#include "Config.h"
using namespace std;

// Constructor de la clase Config
// Inicializa todos los valores del tablero (filas, columnas, minas, modo y vidas)
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero)
{
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    this->vidasTablero = vidasTablero;
}

// Método que muestra un menú para modificar la configuración del juego
void Config::menuConfiguracion()
{
    int opciones;          // Guarda la opción seleccionada por el usuario
    int valorIngresado;    // Guarda el nuevo valor que el usuario desea asignar
    bool repetir = true;   // Controla si el menú se sigue mostrando

    do
    {
        system("cls"); // Limpia la pantalla (en Windows)

        // Se muestra la configuración actual
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Filas del Tablero ----> " << this->getfilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero -> " << this->getcolumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero ----> " << this->getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego -------> " << this->getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador ----> " << this->getvidasTablero() << endl;
        cout << "\t\t6. Regresar al menu general" << endl;

        // Se pide una opción al usuario
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        // Si no elige salir, se le pide el nuevo valor
        if (opciones != 6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }

        // Se evalúa la opción seleccionada
        switch (opciones)
        {
        case 1:
        {
            // Cambia la cantidad de filas
            this->setfilasTablero(valorIngresado);
            cout << "Filas del Tablero actualizadas" << endl;
            break;
        }
        case 2:
        {
            // Cambia la cantidad de columnas
            this->setcolumnasTablero(valorIngresado);
            cout << "Columnas del Tablero actualizadas" << endl;
            break;
        }
        case 3:
        {
            // Cambia la cantidad de minas
            this->setminasTablero(valorIngresado);
            cout << "Minas del Tablero actualizadas" << endl;
            break;
        }
        case 4:
        {
            // Cambia el modo del juego (normal o desarrollador)
            this->setmodoDesarrolladorTablero(valorIngresado);
            cout << "Modo del Juego actualizado" << endl;
            break;
        }
        case 5:
        {
            // Cambia la cantidad de vidas del jugador
            this->setvidasTablero(valorIngresado);
            cout << "Vidas del Juego actualizadas" << endl;
            break;
        }
        case 6:
            // Sale del menú
            repetir = false;
            break;
        }

        system("pause"); // Pausa la ejecución para que el usuario vea los cambios

    } while (repetir);
}

// Devuelve la cantidad de filas del tablero
int Config::getfilasTablero()
{
    return this->filasTablero;
}

// Asigna un nuevo valor a las filas del tablero
int Config::setfilasTablero(int filasTablero)
{
    this->filasTablero = filasTablero;
}

// Devuelve la cantidad de columnas del tablero
int Config::getcolumnasTablero()
{
    return this->columnasTablero;
}

// Asigna un nuevo valor a las columnas del tablero
int Config::setcolumnasTablero(int columnasTablero)
{
    this->columnasTablero = columnasTablero;
}

// Devuelve la cantidad de minas del tablero
int Config::getminasTablero()
{
    return this->minasTablero;
}

// Asigna un nuevo valor a las minas del tablero
int Config::setminasTablero(int minasTablero)
{
    this->minasTablero = minasTablero;
}

// Devuelve si el modo desarrollador está activo
bool Config::getmodoDesarrolladorTablero()
{
    return this->modoDesarrolladorTablero;
}

// Activa o desactiva el modo desarrollador
bool Config::setmodoDesarrolladorTablero(bool modoDesarrolladorTablero)
{
    this->modoDesarrolladorTablero = modoDesarrolladorTablero;
    return this->modoDesarrolladorTablero;
}

// Devuelve la cantidad de vidas del jugador
int Config::getvidasTablero()
{
    return this->vidasTablero;
}

// Asigna un nuevo valor a las vidas del jugador
int Config::setvidasTablero(int vidasTablero)
{
    this->vidasTablero = vidasTablero;
    return this->vidasTablero;
}
