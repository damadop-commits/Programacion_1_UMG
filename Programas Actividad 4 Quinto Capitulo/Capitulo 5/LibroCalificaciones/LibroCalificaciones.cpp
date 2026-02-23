#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;
float promedio = 0;
float tACuenta = 0;
float tBCuenta = 0;
float tCCuenta = 0;
float tDCuenta = 0;
float tFCuenta = 0;

LibroCalificaciones::LibroCalificaciones(string nombre)
    : aCuenta(0), bCuenta(0), cCuenta(0),
      dCuenta(0), fCuenta(0)
{
    establecerNombreCurso(nombre);
}

void LibroCalificaciones::establecerNombreCurso(string nombre)
{
    if (nombre.size() <= 25)
        nombreCurso = nombre;
    else
        nombreCurso = nombre.substr(0, 25);
}

string LibroCalificaciones::obtenerNombreCurso() const
{
    return nombreCurso;
}

void LibroCalificaciones::mostrarMensaje() const
{
    cout << "Bienvenido al libro de calificaciones para\n"
         << obtenerNombreCurso() << "!\n" << endl;
}

void LibroCalificaciones::recibirCalificaciones()
{
    int calificacion;

    cout << "Ingrese letras A, B, C, D o F.\n";
    cout << "Presione Ctrl + Z y Enter para terminar.\n";

    while ((calificacion = cin.get()) != EOF)
    {
        switch (calificacion)
        {
        case 'A':
        case 'a':
            ++aCuenta;
            break;
        case 'B':
        case 'b':
            ++bCuenta;
            break;
        case 'C':
        case 'c':
            ++cCuenta;
            break;
        case 'D':
        case 'd':
            ++dCuenta;
            break;
        case 'F':
        case 'f':
            ++fCuenta;
            break;
        }
    }
    tACuenta = (aCuenta * 4);
    tBCuenta = (bCuenta * 3);
    tCCuenta = (cCuenta * 2);
    tDCuenta = (dCuenta * 1);
    tFCuenta = (fCuenta * 0);
  promedio = ((tACuenta + tBCuenta + tCCuenta + tDCuenta + tFCuenta) / 5) ;

}

void LibroCalificaciones::mostrarReporteCalificaciones() const
{
    cout << "\nReporte de calificaciones:\n";
    cout << "A: " << aCuenta << endl;
    cout << "B: " << bCuenta << endl;
    cout << "C: " << cCuenta << endl;
    cout << "D: " << dCuenta << endl;
    cout << "F: " << fCuenta << endl;
    cout << "--------------------------" << endl;
    cout << "El Pormedio de Notas es: " << promedio << endl;
}
