//
// Created by david on 1/04/2025.
//

#include "Videojuego.h"
#include <string>
using namespace std;

Videojuego(string cod, string nom, string genero, int dific): codigo(cod), nombre(nom), genero(genero), dificultad(dific) {}

getCodigo(){ return codigo; }