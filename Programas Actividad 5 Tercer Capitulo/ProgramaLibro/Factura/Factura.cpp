#include <iostream>
#include "Factura.h"
using namespace std;

// Constructor
Factura::Factura(string nombre)
: nombreFactura(nombre)
{
}

// Establece nombre Factura
void Factura::establecerNombreFactura(string nombre)
{
    nombreFactura = nombre;
}

// Obtener nombre Factura
string Factura::obtenerNombreFactura() const
{
    return nombreFactura;
}

void Factura::establecerNumeroPieza(string pieza)
{
    numeroPieza = pieza;
}

string Factura::obtenerNumeroPieza() const
{
    return numeroPieza;
}

void Factura::establecerDescripcionPieza(string descripcion)
{
    descripcionPieza = descripcion;
}

string Factura::obtenerDescripcionPieza() const
{
    return descripcionPieza;
}

void Factura::establecerCantidadPiezas(int cantidad)
{
    if(cantidad > 0)
        cantidadPiezas = cantidad;
    else
        cantidadPiezas = 0;
}

int Factura::obtenerCantidadPiezas() const
{
    return cantidadPiezas;
}

void Factura::establecerPrecioPieza(float precio)
{
    if(precio > 0)
        precioPieza = precio;
    else
        precioPieza = 0;
}

float Factura::obtenerPrecioPieza() const
{
    return precioPieza;
}

float Factura::obtenerMontoFactura() const
{
    return cantidadPiezas * precioPieza;
}

// Mostrar Factura
void Factura::mostrarMensaje() const
{
    cout << "Factura de: " << nombreFactura << endl;
    cout << "Numero de Pieza: " << numeroPieza << endl;
    cout << "Descripcion: " << descripcionPieza << endl;
    cout << "Cantidad de Piezas: " << cantidadPiezas << endl;
    cout << "Precio por Pieza: " << precioPieza << endl;
    cout << "Monto Total: " << obtenerMontoFactura() << endl;
}
