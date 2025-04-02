//
// Created by david on 1/04/2025.
//

#ifndef JUGADOR_H
#define JUGADOR_H
#include "Videojuego.h"
#include <string>
#include <vector>
using namespace std;

class Jugador {
    private:
      string nickname;
      int nivelRanking;
      vector<Videojuego> videojuegosInscritos;
    public:
        Jugador(string nick, int nivel);
        string getNickname() const;
        int getNivelRanking() const;
        vector<Videojuego> getVideojuegosInscritos() const;
        void inscribirVideojuego(const Videojuego& juego);

};



#endif //JUGADOR_H
