cmake_minimum_required(VERSION 4.0)
project(Ayudantia)

set(CMAKE_CXX_STANDARD 20)

add_executable(Ayudantia main.cpp
        src/Ayudantia2/Persona.cpp
        src/Ayudantia2/Persona.h
        src/Ayudantia5/Nodo.cpp
        src/Ayudantia5/Nodo.h
        src/Ayudantia5/ListaSimple.cpp
        src/Ayudantia5/ListaSimple.h
        src/Ayudantia3/lecturaArchivo.cpp
        src/Ayudantia3/LecturaArchivo.h
        src/Ayudantia4/Estudiante.cpp
        src/Ayudantia4/Estudiante.h
        src/Ayudantia4/HistorialDeNotas.cpp
        src/Ayudantia4/HistorialDeNotas.h
        src/Ayudantia4/ServicioAcademico.cpp
        src/Ayudantia4/ServicioAcademico.h
        src/Ayudantia5/ListaSimpleCircular.cpp
        src/Ayudantia5/ListaSimpleCircular.h
        src/Ayudantia5/NodoDoble.cpp
        src/Ayudantia5/NodoDoble.h
        src/Ayudantia5/ListaDoble.cpp
        src/Ayudantia5/ListaDoble.h
        src/Ayudantia6/MPP.cpp
        src/Ayudantia6/MPP.h
        src/Ayudantia6/NodoMPP.cpp
        src/Ayudantia6/NodoMPP.h
)
