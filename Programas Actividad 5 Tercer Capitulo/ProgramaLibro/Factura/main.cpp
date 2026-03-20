#include <iostream>
#include "Factura.h"

using namespace std;

int main()
{     //Crear Objeto Factura
    Factura factura1 ("Ferreteria Amado");

    // Datos para Factura
    factura1.establecerNumeroPieza("A123");
    factura1.establecerDescripcionPieza("Martillo");
    factura1.establecerCantidadPiezas(10);
    factura1.establecerPrecioPieza(10.5);

    //Mostrar Factura
    factura1.mostrarMensaje();

    return 0;

    }
