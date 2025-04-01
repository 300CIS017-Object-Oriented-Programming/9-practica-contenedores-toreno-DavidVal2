//
// Created by david on 1/04/2025.
//

#include "Torneo.h"
#include <iostream>

using namespace std;

void Torneo::registrarVideojuego() {
    string nombre;
    cout << "Ingrese el nombre del videojuego: ";
    getline(cin, nombre);

    string codigo;
    cout << "Ingrese el codigo del videojuego: ";
    getline(cin, codigo);

    if (videojuegosDisponibles.find(codigo) != videojuegosDisponibles.end()) {
        cout << "El videojuego ya está registrado en el torneo.\n";
        return;
    }

    string genero;
    cout << "Ingrese el genero del videojuego: ";
    getline(cin, genero);

    int dificultad;
    cout << "Ingrese la dificultad (1-5) del videojuego: ";
    getline(cin, dificultad);

    Videojuego* nuevoJuego = new Videojuego(codigo, nombre, genero, dificultad);
    videojuegosDisponibles[codigo] = nuevoJuego;

    cout << "Videojuego '" << nombre << "' registrado exitosamente con código '" << codigo << "'.\n";
}

void registrarJugador(){
    string nickname;
    cout << "Ingrese el nickname del jugador: ";
    getline(cin, nickname);

    if (jugadoresDisponibles.find(nickname) != jugadoresDisponibles.end()) {
      cout <<"Este Nickname no esta disponible."<<endl;
      return;
    }

    int nivelRanking;
    cout << "Ingrese el nivel ranking: ";
    getline(cin, nivelRanking);
  }

void Torneo::inscribirJugador() {
    string nickname, codigo;

    cout << "Ingrese el nickname del jugador: ";
    getline(cin, nickname);

    auto jugadorIt = jugadorRegistrados.find(nickname);
    if (jugadorIt == jugadorRegistrados.end()) {
        cout << "Error: El jugador '" << nickname << "' no está registrado en el torneo.\n";
        return;
    }

    cout << "Ingrese el código del videojuego: ";
    getline(cin, codigo);

    auto juegoIt = videojuegosDisponibles.find(codigo);
    if (juegoIt == videojuegosDisponibles.end()) {
        cout << "Error: El videojuego con código '" << codigo << "' no está disponible en el torneo.\n";
        return;
    }

    Jugador* jugador = jugadorIt->second;
    Videojuego* juego = juegoIt->second;

    for (const auto& vj : jugador->getVideojuegosInscritos()) {
        if (vj.getCodigo() == codigo) {
            cout << "Error: El jugador '" << nickname << "' ya está inscrito en el videojuego '" << juego->getNombre() << "'.\n";
            return;
        }
    }

    // Inscribir al jugador en el videojuego
    jugador->inscribirVideojuego(*juego); // Suponiendo que Jugador tiene inscribirVideojuego(Videojuego& juego)
    cout << "Jugador '" << nickname << "' inscrito exitosamente en el videojuego '" << juego->getNombre() << "'.\n";
}


