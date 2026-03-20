#ifndef FECHA_H
#define FECHA_H

class Fecha
{
public:
    // Constructor
    Fecha(int mes, int dia, int anio);

    // Set
    void establecerMes(int mes);
    void establecerDia(int dia);
    void establecerAnio(int anio);

    // Get
    int obtenerMes() const;
    int obtenerDia() const;
    int obtenerAnio() const;

    // Mostrar fecha
    void mostrarFecha() const;

private:
    int Mes;
    int Dia;
    int Anio;
};

#endif
