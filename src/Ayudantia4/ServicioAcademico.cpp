//
// Created by Deus on 16-09-2026.
//

#include "ServicioAcademico.h"

#include <iostream>
#include <ostream>
#include <stdexcept>

#include "Estudiante.h"
double ServicioAcademico::calcularPromedioCrudo(double *data, int total) {
    if (data == nullptr) {
        throw std::invalid_argument("La data es nula");
    }
    if (total <= 0) {
        throw std::invalid_argument("El total no pueder ser igual o menor a 0");
    }
    double suma;
    for (int i = 0; i < total; i++) {
        suma += *(data + i);

    }
    return suma/total;
}

double ServicioAcademico::obtenerPromedioEstudiante(Estudiante *e) {
    if (e == nullptr) {
        throw std::invalid_argument("El estudiante es nulo");
    }
    try {
        HistorialDeNotas* h = e->getHistorial();
        if (h == nullptr) {
            throw std::invalid_argument("El estudiante no tiene historial saludos.");
        }
        return calcularPromedioCrudo(h->notas,h->cant);
    }catch (std::invalid_argument& e) {
        cerr << e.what() << endl;
        throw std::runtime_error(e.what());
    }
}
