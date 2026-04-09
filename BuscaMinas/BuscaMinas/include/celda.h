#ifndef CELDA_H
#define CELDA_H

// Librería que define la clase Celda
// Esta clase representa cada espacio del tablero del juego (puede tener mina o no)
// Fecha: 17 marzo 2023

class Celda
{
    public:
        // Constructor por defecto
        // Se usa cuando no se inicializan valores inmediatamente
        Celda();

        // Constructor con parámetros
        // Permite crear una celda con coordenadas específicas y definir si tiene mina
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);

        // Asigna la coordenada X de la celda
        int setCoordenadaX(int coordenadaX);

        // Devuelve la coordenada X de la celda
        int getCoordenadaX();

        // Asigna la coordenada Y de la celda
        int setCoordenadaY(int coordenadaY);

        // Devuelve la coordenada Y de la celda
        int getCoordenadaY();

        // Define si la celda tiene mina o no
        // Retorna false si ya tenía mina previamente
        bool setMina(bool estadoMina);

        // Devuelve si la celda tiene mina
        bool getMina();

        // Marca si la mina ha sido descubierta
        bool setMinaDescubierta(bool minaDescubierta);

        // Devuelve si la mina ya fue descubierta
        bool getMinaDescubierta();

        // Imprime la información de la celda (coordenadas y si tiene mina)
        void imprimirCelda();

    protected:
        // (No se utilizan atributos protegidos en esta clase)

    private:
        // Coordenadas de la celda dentro del tablero
        int coordenadaX, coordenadaY;

        // Indica si la celda contiene una mina
        bool mina;

        // Indica si la celda ya fue descubierta por el jugador
        bool minaDescubierta;
};

#endif // CELDA_H
