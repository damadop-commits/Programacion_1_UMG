#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

// Constructor por defecto
Tablero::Tablero()
{
    // No inicializa valores, se puede configurar después
}

// Constructor que inicializa el tablero con tamaño y modo
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;

    int x, y;

    // Se construye la matriz del tablero (vector de vectores)
    for (y = 0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila;

        for (x = 0; x < this->anchoTablero; x++)
        {
            // Cada celda inicia sin mina (false)
            fila.push_back((Celda(x, y, false)));
        }

        // Se agrega la fila al tablero
        this->contenidoTablero.push_back(fila);
    }
}

// Devuelve la altura del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}

// Asigna la altura del tablero
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}

// Devuelve el ancho del tablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}

// Asigna el ancho del tablero
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}

// Devuelve si el modo desarrollador está activo
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}

// Activa o desactiva el modo desarrollador
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

// Devuelve lo que se debe mostrar en cada celda
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    // Se obtiene la celda actual
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);

    // Si la celda ya fue descubierta o está en modo desarrollador
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        // Si tiene mina, se muestra "*"
        if (celdaTemporal.getMina())
        {
            return "*";
        }
        else
        {
            // Si no tiene mina, se muestra la cantidad de minas cercanas
            int cantidadCelda = this->minasCercanas(coordenadaY, coordenadaX);

            // Conversión de int a string
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;

            return cantidadCeldaString;
        }
    }
    else
    {
        // Si no está descubierta, se muestra oculto
        return "?";
    }
}

// Cuenta cuántas minas hay alrededor de una celda
int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
    int contadorTablero = 0;

    int filaInicioTablero, filaFinTablero;
    int columnaInicioTablero, columnaFinTablero;

    // Control de límites para no salirse del tablero
    if (filaTablero <= 0)
        filaInicioTablero = 0;
    else
        filaInicioTablero = filaTablero - 1;

    if (filaTablero + 1 >= this->alturaTablero)
        filaFinTablero = this->alturaTablero - 1;
    else
        filaFinTablero = filaTablero + 1;

    if (columnaTablero <= 0)
        columnaInicioTablero = 0;
    else
        columnaInicioTablero = columnaTablero - 1;

    if (columnaTablero + 1 >= this->anchoTablero)
        columnaFinTablero = this->anchoTablero - 1;
    else
        columnaFinTablero = columnaTablero + 1;

    // Se recorren las celdas vecinas
    for (int m = filaInicioTablero; m <= filaFinTablero; m++)
    {
        for (int l = columnaInicioTablero; l <= columnaFinTablero; l++)
        {
            if (this->contenidoTablero.at(m).at(l).getMina())
            {
                contadorTablero++;
            }
        }
    }

    return contadorTablero;
}

// Imprime la línea superior del tablero
void Tablero::imprimirSeparadorEncabezado()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        cout << "----";
        if (m + 2 == this->anchoTablero)
        {
            cout << "-";
        }
    }
    cout << "\n";
}

// Imprime las separaciones entre filas
void Tablero::imprimirSeparadorFilas()
{
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        if (m <= 1)
        {
            cout << "|---";
        }
        else
        {
            cout << "+---";
        }

        if (m == this->anchoTablero)
        {
            cout << "+";
        }
    }
    cout << "\n";
}

// Imprime el encabezado con números de columnas
void Tablero::imprimirEncabezado()
{
    this->imprimirSeparadorEncabezado();

    cout << "|   ";

    for (int l = 0; l < this->anchoTablero; l++)
    {
        cout << "| " << l + 1 << " ";

        if (l + 1 == this->anchoTablero)
        {
            cout << "|";
        }
    }

    cout << "\n";
}

// Imprime todo el tablero en consola
void Tablero::imprimir()
{
    this->imprimirEncabezado();
    this->imprimirSeparadorEncabezado();

    for (int y = 0; y < this->alturaTablero; y++)
    {
        cout << "| " << y + 1 << " ";

        for (int x = 0; x < this->anchoTablero; x++)
        {
            cout << "| " << this->getRepresentacionMina(x, y) << " ";

            if (x + 1 == this->anchoTablero)
            {
                cout << "|";
            }
        }

        cout << "\n";
        this->imprimirSeparadorFilas();
    }
}

// Intenta colocar una mina en una posición
bool Tablero::colocarMina(int x, int y)
{
    return this->contenidoTablero.at(y).at(x).setMina(true);
}

// Descubre una celda (cuando el jugador selecciona una posición)
bool Tablero::descubrirMina(int x, int y)
{
    this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);

    Celda celda = this->contenidoTablero.at(y).at(x);

    // Si la celda tiene mina, el jugador pierde
    if (celda.getMina())
    {
        return false;
    }

    return true;
}

// Cuenta las celdas seguras que aún no han sido descubiertas
int Tablero::contarCeldasSinMinasYSinDescubrir()
{
    int contador = 0;

    for (int y = 0; y < this->alturaTablero; y++)
    {
        for (int x = 0; x < this->anchoTablero; x++)
        {
            Celda celdaTemporal = this->contenidoTablero.at(y).at(x);

            if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
            {
                contador++;
            }
        }
    }

    return contador;
}
