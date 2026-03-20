#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones miLibro("Programacion en C++");

    miLibro.establecerNombreInstructor("Juan Perez");

    miLibro.mostrarMensaje();

    return 0;
}
