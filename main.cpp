//
// Created by david on 2/04/2025.
//

#include <iostream>
#include "Torneo.h"

void mostrarMenu() {
    cout << "\n--- TORNEO ---\n";
    cout << "1. Registrar nuevo videojuego\n";
    cout << "2. Registrar nuevo jugador\n";
    cout << "3. Inscribir jugador a un Videojuego\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cin.ignore();

        switch (opcion) {
            case 1: {
                torneo->registrarVideojuego();
                break;
            }
            case 2: {
                torneo->registrarJugador();
                break;
            }
            case 3: {
                torneo->incribirJugador();
                break;
            }
            case 4: {
                // Salir
                cout << "Saliendo del sistema...\n";
                break;
            }
            default:
                cout << "Opción no válida, intente nuevamente.\n";
        }

    } while (opcion != 4);