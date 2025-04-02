cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(TorneoVideojuego)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar los archivos fuente
add_executable(TorneoVideojuego
        main.cpp
        Torneo.cpp
        Jugador.cpp
        Videojuego.cpp
)

# Incluir los directorios donde están los archivos .h
target_include_directories(TorneoVideojuego PRIVATE ${CMAKE_SOURCE_DIR})
