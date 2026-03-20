#ifndef FACTURA_H
#define FACTURA_H

#include <string>
using namespace std;

class Factura
{
public:
    Factura(string nombre);

    //set
    void establecerNombreFactura(string nom);
    void establecerNumeroPieza(string num);
    void establecerDescripcionPieza(string desc);
    void establecerCantidadPiezas(int cant);
    void establecerPrecioPieza(float prec);

    // get
    string obtenerNombreFactura()const;
    string obtenerNumeroPieza() const;
    string obtenerDescripcionPieza() const;
    int obtenerCantidadPiezas() const;
    float obtenerPrecioPieza() const;

    //calcular monto de la Factura
    float obtenerMontoFactura() const;

    //mostrar Mensaje
    void mostrarMensaje() const;

private:
    string nombreFactura;
    string numeroPieza;
    string descripcionPieza;
    int cantidadPiezas;
    float precioPieza;

};
#endif
