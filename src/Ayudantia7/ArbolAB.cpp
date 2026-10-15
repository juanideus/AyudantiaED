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

void ArbolAB::preorderRecursivo(NodoAB *nodo) {
    if (nodo == nullptr) {
        return;
    }
    cout<<nodo->getData();
    preorderRecursivo(nodo->getIzq());
    preorderRecursivo(nodo->getDer());
}

void ArbolAB::preorder() {
    preorderRecursivo(this->root);
}

void ArbolAB::InorderRecursivo(NodoAB *nodo) {

    if (nodo == nullptr) {
        return;
    }
    InorderRecursivo(nodo->getIzq());
    cout<<nodo->getData();
    InorderRecursivo(nodo->getDer());


}

void ArbolAB::postorderRecursivo(NodoAB *nodo) {
    if (nodo == nullptr) {
        return;
    }

    postorderRecursivo(nodo->getIzq());
    postorderRecursivo(nodo->getDer());
    cout<<nodo->getData();
}

void ArbolAB::Inorder() {
}

void ArbolAB::postorder() {

}


NodoAB* ArbolAB::eliminarRecursivo(NodoAB *actual, int dato, bool &elimnado) {
    if (actual == nullptr) {
        return nullptr;
    }
    if (actual->getData() == dato) {
        NodoAB *izq = actual->getIzq();
        NodoAB *der = actual->getDer();
        delete actual;
        elimnado = true;
        if (izq == nullptr) {
            return der;
        }
        if (der == nullptr) {
            return izq;
        }
        NodoAB *extremo = izq;
        while (extremo->getDer() != nullptr) {
            extremo = extremo->getDer();
        }
        extremo->setDer(der);
        return izq;
    }
    actual->setIzq(eliminarRecursivo(actual->getIzq(),dato,elimnado));

    if (!elimnado) {
        actual->setDer(eliminarRecursivo(actual->getDer(),dato,elimnado));
    }
    return actual;

}

bool ArbolAB::eliminar(int dato) {
    bool eliminado= false;
    if (this->root == nullptr) {
        return false;
    }
    this->root = eliminarRecursivo(this->root, dato, eliminado);
    return eliminado;
}
