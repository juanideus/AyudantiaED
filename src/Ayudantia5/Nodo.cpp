//
// Created by Deus on 03-09-2026.
//

#include "Nodo.h"
Nodo::Nodo() {
    this->dato = -1;
    this->sig = nullptr;
}
Nodo::Nodo(int dato) {
    this->dato = dato;
    this->sig = nullptr;
}

int Nodo::getDato() {
    return this->dato;
}

void Nodo::setDato(int dato) {
    this->dato = dato;
}

Nodo * Nodo::getSig() {
    return this->sig;
}

void Nodo::setSig(Nodo *sig) {
    this->sig = sig;
}
