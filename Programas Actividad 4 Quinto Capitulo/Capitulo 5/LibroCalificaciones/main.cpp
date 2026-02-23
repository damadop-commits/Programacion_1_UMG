#include "LibroCalificaciones.h"
#include <iostream>

using namespace std;

int main()
{
    LibroCalificaciones miLibro("Programacion en C++");

    miLibro.mostrarMensaje();
    miLibro.recibirCalificaciones();
    miLibro.mostrarReporteCalificaciones();

    return 0;
}
