//
// Created by Deus on 16-09-2026.
//

#ifndef AYUDANTIA_ESTUDIANTE_H
#define AYUDANTIA_ESTUDIANTE_H
#include "../Ayudantia2/Persona.h"
#include "HistorialDeNotas.h"
using namespace std;
#include <string>
class Estudiante : public Persona {
        HistorialDeNotas * historial;

public:
        Estudiante();
        Estudiante(int id,string nombre, int ege, HistorialDeNotas *h);
        HistorialDeNotas * getHistorial();
};


#endif //AYUDANTIA_ESTUDIANTE_H