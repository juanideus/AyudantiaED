//
// Created by Deus on 19-09-2026.
//

#include "NodoDoble.h"

NodoDoble::NodoDoble() {
    this->dato = -1;
}

NodoDoble::NodoDoble(int dato) {
    this->dato = dato;
    this->ant = nullptr;
    this->sig = nullptr;
}

int NodoDoble::getDato() {
    return this->dato;
}

void NodoDoble::setDato(int dato) {
    this->dato = dato;
}

NodoDoble * NodoDoble::getSig() {
    return this->sig;
}

void NodoDoble::setSig(NodoDoble *sig) {
    this->sig = sig;
}

NodoDoble * NodoDoble::getAnt() {
    return this->ant;
}

void NodoDoble::setAnt(NodoDoble *ant) {
    this->ant = ant;
}
