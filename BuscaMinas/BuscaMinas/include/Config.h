#ifndef CONFIG_H
#define CONFIG_H

// Clase Config
// Se encarga de almacenar y administrar toda la configuración del juego,
// como el tamaño del tablero, cantidad de minas, modo de juego y vidas del jugador.

class Config
{
    public:
        // Constructor que inicializa todos los valores del juego
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);

        // Devuelve la cantidad de filas del tablero
        int getfilasTablero();

        // Asigna la cantidad de filas del tablero
        int setfilasTablero(int filasTablero);

        // Devuelve la cantidad de columnas del tablero
        int getcolumnasTablero();

        // Asigna la cantidad de columnas del tablero
        int setcolumnasTablero(int columnasTablero);

        // Devuelve la cantidad de minas del tablero
        int getminasTablero();

        // Asigna la cantidad de minas del tablero
        int setminasTablero(int minasTablero);

        // Devuelve si el modo desarrollador está activado
        bool getmodoDesarrolladorTablero();

        // Activa o desactiva el modo desarrollador
        bool setmodoDesarrolladorTablero(bool modoDesarrolladorTablero);

        // Devuelve la cantidad de vidas del jugador
        int getvidasTablero();

        // Asigna la cantidad de vidas del jugador
        int setvidasTablero(int vidasTablero);

        // Muestra el menú de configuración para que el usuario pueda modificar los valores
        void menuConfiguracion();

    protected:
        // (No se utilizan atributos protegidos en esta clase)

    private:
        // Número de filas del tablero
        int filasTablero;

        // Número de columnas del tablero
        int columnasTablero;

        // Cantidad de minas que tendrá el tablero
        int minasTablero;

        // Indica si el modo desarrollador está activo (muestra todas las minas)
        bool modoDesarrolladorTablero;

        // Cantidad de vidas disponibles para el jugador
        int vidasTablero;
};

#endif // CONFIG_H
