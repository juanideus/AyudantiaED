//
// Created by Deus on 19-09-2026.
//

#include "ListaDoble.h"
#include <iostream>
using namespace std;
NodoDoble * ListaDoble::agregarFinalRecursivo(NodoDoble *actual, NodoDoble *anterior, int dato) {
             if (actual == nullptr) {
                     NodoDoble * nn = new NodoDoble(dato);
                     nn->setAnt(anterior);
                     return nn;
             }
        return agregarFinalRecursivo(actual->getSig(), actual, dato);

}

void ListaDoble::mostrarAdelanteRecursivo(NodoDoble *actual) const {
        if (actual == nullptr) {
                return;
        }
        cout<< actual->getDato()<< endl;
        mostrarAdelanteRecursivo(actual->getSig());
}

void ListaDoble::mostrarAtrasRecursivo(NodoDoble *actual) const {
}

NodoDoble * ListaDoble::buscarRecursivo(NodoDoble *actual, int dato) const {
}

int ListaDoble::contarRecursivo(NodoDoble *actual) const {
        if (actual == nullptr) {
                return 0;
        }
        return 1+contarRecursivo(actual->getSig());

}

NodoDoble * ListaDoble::obtenerPorPosicionRecursivo(NodoDoble *actual, int posicion) const {

        if (actual == nullptr) return nullptr;
        if (posicion == 0) {
                return actual;
        }
        return obtenerPorPosicionRecursivo(actual->getSig(), posicion-1);.

}

NodoDoble * ListaDoble::obtenerUltimoRecursivo(NodoDoble *actual) const {
     if (actual->getSig() == nullptr) return actual;
        obtenerUltimoRecursivo(actual->getSig());
}

NodoDoble * ListaDoble::eliminarRecursivo(NodoDoble *actual, int dato, bool &eliminado) {
}

NodoDoble * ListaDoble::encontrarMitadRecursivo(NodoDoble *lento, NodoDoble *rapido) const {
        if (rapido == nullptr || rapido->getSig() == nullptr) {
                return lento;
        }
        return encontrarMitadRecursivo(lento->getSig(), rapido->getSig()->getSig());
}


bool ListaDoble::detectarBucleRecursivo(NodoDoble *lento, NodoDoble *rapido) const {
}

void ListaDoble::invertirRecursivo(NodoDoble *actual) {
}

void ListaDoble::liberarRecursivo(NodoDoble *actual) {
}

ListaDoble::ListaDoble() {
}

ListaDoble::~ListaDoble() {
}

bool ListaDoble::estaVacia() const {
}

void ListaDoble::agregarInicio(int dato) {

}

void ListaDoble::agregarFinal(int dato) {
        this->fin= agregarFinalRecursivo(this->inicio,nullptr,dato);
}

void ListaDoble::mostrarAdelante() const {
}

void ListaDoble::mostrarAtras() const {
}

NodoDoble * ListaDoble::buscar(int dato) const {
}

int ListaDoble::contar() const {
}

NodoDoble * ListaDoble::obtenerPorPosicion(int posicion) const {
}

NodoDoble * ListaDoble::encontrarMitad() const {

}

bool ListaDoble::eliminar(int dato) {
}

bool ListaDoble::tieneBucle() const {
}

void ListaDoble::invertir() {
}

void ListaDoble::liberar() {
}

NodoDoble * ListaDoble::getInicio() const {
}

NodoDoble * ListaDoble::getFin() const {
}
