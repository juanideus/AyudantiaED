//
// Created by Deus on 16-09-2026.
//

#include "Estudiante.h"

Estudiante::Estudiante() {
}

Estudiante::Estudiante(int id, string nombre, int ege, HistorialDeNotas* h) {
    this->id = id;
    this->name = nombre;
    this->age = ege;
    this->historial = h;

}

HistorialDeNotas * Estudiante::getHistorial() {
    return historial;
}



