//
// Created by Deus on 07-10-2026.
//

#include "ArbolAB.h"

#include <iostream>
using namespace std;

ArbolAB::ArbolAB() {
    this->root = nullptr;
}

NodoAB*  ArbolAB::constuir() {
    int valor;
    cout<< "Ingrese un dato para el arbol";
    cin >> valor;

    if (valor == -1) {
        return nullptr;
    }
    NodoAB *nn = new NodoAB(valor);

    nn->setIzq(constuir());
    nn->setDer(constuir());
    return nn;

}

void ArbolAB::insertar() {
    this->root = constuir();
}
