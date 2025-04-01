//
// Created by david on 1/04/2025.
//

#ifndef TORNEO_H
#define TORNEO_H
#include "Videojuego.h"
#include <string>
using namespace std;

class Torneo {
  private:
    map<string, Videojuego*> videojuegosDisponibles;
    map<string, Jugador*> jugadorRegistrados;
  public:
    void registrarVideojuego();
    void registrarJugador();
    void incribirJugador();
    mostraPromVideojuegosJugador();
};



#endif //TORNEO_H
