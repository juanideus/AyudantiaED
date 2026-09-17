//
// Created by Deus on 16-09-2026.
//

#ifndef AYUDANTIA_SERVICIOACADEMICO_H
#define AYUDANTIA_SERVICIOACADEMICO_H

#include "Estudiante.h"
class ServicioAcademico {
    public:
    double calcularPromedioCrudo(double* data,int total);
    double obtenerPromedioEstudiante( Estudiante * e);

};


#endif //AYUDANTIA_SERVICIOACADEMICO_H