//
// Created by david on 1/04/2025.
//

#ifndef VIDEOJUEGO_H
#define VIDEOJUEGO_H

#include <string>
using namespace std;


class Videojuego {
    private:
      string codigo;
      string nombre;
      string genero;
      int dificultad;
    public:
      Videojuego(string cod, string nom, string genero, int dific);
      getCodigo();
};



#endif //VIDEOJUEGO_H
