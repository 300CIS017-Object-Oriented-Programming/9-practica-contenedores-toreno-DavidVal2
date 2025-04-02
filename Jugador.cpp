//
// Created by david on 1/04/2025.
//

#include "Jugador.h"
#include <iostream>

using namespace std;

// Constructor
Jugador::Jugador(string nick, int nivel) : nickname(nick), nivelRanking(nivel) {}

// Getter para nickname
string Jugador::getNickname() const {
    return nickname;
}

// Getter para nivelRanking
int Jugador::getNivelRanking() const {
    return nivelRanking;
}

// Getter para videojuegosInscritos
vector<Videojuego> Jugador::getVideojuegosInscritos() const {
    return videojuegosInscritos;
}


void Jugador::inscribirVideojuego(const Videojuego& juego) {
    // Añadimos el videojuego al vector
    videojuegosInscritos.push_back(juego);
}
