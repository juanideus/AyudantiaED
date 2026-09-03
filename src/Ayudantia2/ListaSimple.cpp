//
// Created by Deus on 03-09-2026.
//

#include "ListaSimple.h"

#include "Nodo.h"
using namespace std;

bool ListaSimple::eliminarRecursivo(int dato, Nodo* aux) {
    if (this->head == nullptr) {
        return false;
    }

    // Eliminar el primer nodo
    if (this->head->getDato() == dato) {
        Nodo* eliminado = this->head;
        this->head = eliminado->getSig();

        delete eliminado;
        this->tamanio--;
        return true;
    }

    // Llegamos al final sin encontrar el dato
    if (aux == nullptr || aux->getSig() == nullptr) {
        return false;
    }

    Nodo* siguiente = aux->getSig();

    // Eliminar el nodo que viene después de aux
    if (siguiente->getDato() == dato) {
        aux->setSig(siguiente->getSig());

        delete siguiente;
        this->tamanio--;
        return true;
    }

    return eliminarRecursivo(dato, siguiente);
}

ListaSimple::ListaSimple() {
    this->head = nullptr;
    this->tamanio=0;
}

ListaSimple::~ListaSimple() {

}

int ListaSimple::getDato(int pos) {
    Nodo* aux = this->head;
    int contador = 0;
    if (this->head == nullptr || pos > this->tamanio) {
        return -1;
    }
    if (pos == 0) {
        return this->head->getDato();
    }
    while (aux != nullptr) {

        if (contador == pos) {
            return aux->getDato();
        }
        aux = aux->getSig();
        contador++;
    }


}

bool ListaSimple::agregarRecursivo(int pos,Nodo* aux,int contador,Nodo* nn) {
    // Insertar al comienzo, incluso si la lista está vacía
    if (pos == 0) {
        nn->setSig(this->head);
        this->head = nn;
        this->tamanio++;
        return true;
    }

    // La posición no existe
    if (aux == nullptr) {
        return false;
    }

    // Insertar después del nodo actual
    if (contador + 1 == pos) {
        nn->setSig(aux->getSig());
        aux->setSig(nn);
        this->tamanio++;
        return true;
    }

    return agregarRecursivo(
        pos,
        aux->getSig(),
        contador + 1,
        nn
    );
}




void ListaSimple::agregar(int dato,int pos) {
    Nodo* nn = new Nodo(dato);
    agregarRecursivo(pos, this->head, 0, nn);
}

bool ListaSimple::eliminar(int dato) {
    return eliminarRecursivo(dato, this->head);
}

bool ListaSimple::buscar(int dato) {
}

string ListaSimple::toString() {
    string respuesta = "";
    if (this->head == nullptr) {
        return respuesta;
    }
    Nodo* aux = this->head;
    while (aux != nullptr) {
        respuesta += to_string(aux->getDato()) + "->";
        aux = aux->getSig();
    }
    return respuesta;
}
