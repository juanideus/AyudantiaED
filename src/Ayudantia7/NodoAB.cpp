//
// Created by Deus on 07-10-2026.
//

#include "NodoAB.h"

NodoAB::NodoAB() {
    this->data = -1;
    this->izq = nullptr;
    this->der = nullptr;
}
NodoAB::NodoAB(int data) {
    this->data = data;
    this->izq = nullptr;
    this->der = nullptr;

}
NodoAB::~NodoAB() {
}



int NodoAB::getData() {
    return this->data;
}

void NodoAB::setData(int data) {
    this->data = data;
}

NodoAB * NodoAB::getIzq() {
    return this->izq;
}

NodoAB * NodoAB::getDer() {
    return this->der;
}

void NodoAB::setIzq(NodoAB *izq) {
    this->izq = izq;
}

void NodoAB::setDer(NodoAB *der) {
    this->der = der;
}
