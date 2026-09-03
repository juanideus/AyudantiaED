cmake_minimum_required(VERSION 4.0)
project(Ayudantia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ayudantia main.cpp
        src/Ayudantia2/Persona.cpp
        src/Ayudantia2/Persona.h
        src/Ayudantia2/Nodo.cpp
        src/Ayudantia2/Nodo.h
        src/Ayudantia2/ListaSimple.cpp
        src/Ayudantia2/ListaSimple.h
)
