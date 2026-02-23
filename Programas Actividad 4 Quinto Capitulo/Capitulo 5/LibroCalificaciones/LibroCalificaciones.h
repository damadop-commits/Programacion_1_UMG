#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H

#include <string>
using namespace std;

class LibroCalificaciones
{
public:
    LibroCalificaciones(string);

    void establecerNombreCurso(string);
    string obtenerNombreCurso() const;

    void mostrarMensaje() const;
    void recibirCalificaciones();
    void mostrarReporteCalificaciones() const;

private:
    string nombreCurso;
    int aCuenta;
    int bCuenta;
    int cCuenta;
    int dCuenta;
    int fCuenta;
};

#endif
