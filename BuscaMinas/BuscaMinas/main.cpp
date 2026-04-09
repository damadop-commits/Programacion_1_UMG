#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    // Valores iniciales del juego (configuración por defecto)
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;

    // Se crea el objeto de configuración con los valores iniciales
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);

    // Se crea un juego inicial con la configuración actual
    Juego juego(
        Tablero(
            configuracionJuego.getfilasTablero(),
            configuracionJuego.getcolumnasTablero(),
            configuracionJuego.getmodoDesarrolladorTablero()
        ),
        configuracionJuego.getminasTablero()
    );

    // Se inicializa la semilla para los números aleatorios
    // Esto permite que las minas se distribuyan diferente en cada ejecución
    srand(getpid());

    int opciones;
    bool repetir = true;

    // Menú principal del juego
    do
    {
        //("cls"); // Limpia la pantalla

        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;

        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;

        switch (opciones)
        {
        case 1:
        {
            // Abre el menú de configuración para modificar valores del juego
            configuracionJuego.menuConfiguracion();
            break;
        }

        case 2:
        {
            // Se crea un nuevo juego con la configuración actualizada
            // Esto es importante para que los cambios sí se reflejen
            Juego juegoTemporal(
                Tablero(
                    configuracionJuego.getfilasTablero(),
                    configuracionJuego.getcolumnasTablero(),
                    configuracionJuego.getmodoDesarrolladorTablero()
                ),
                configuracionJuego.getminasTablero()
            );

            // Se inicia el juego
            juegoTemporal.iniciar();

            system("pause"); // Pausa para que el usuario vea el resultado
            break;
        }

        case 3:
            // Opción para salir del programa
            repetir = false;
            break;
        }

    } while (repetir);

    //system("cls"); // Limpia la pantalla al salir
    return 0;
}
