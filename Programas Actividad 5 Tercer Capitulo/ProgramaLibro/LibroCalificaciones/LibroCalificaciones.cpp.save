#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

// constructor
LibroCalificaciones::LibroCalificaciones(string nombre)
: nombreCurso(nombre)
{
}

// función para establecer el nombre del curso
void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    nombreCurso = nombre;
}

// función para obtener el nombre del curso
string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

// función para establecer el nombre del instructor
void LibroCalificaciones::establecerNombreInstructor(string nombre)
{
    nombreInstructor = nombre;
}

// función para obtener el nombre del instructor
string LibroCalificaciones::obtenerNombreInstructor() const
{
    return nombreInstructor;
}

// función para mostrar mensaje
void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para\n"
         << obtenerNombreCurso() << "!" << endl;

    cout << "Este curso es presentado por: "
         << obtenerNombreInstructor() << endl;
}
