
// Created by Deus on 29-10-2026.
//

#include "ListaConNexo.h"

template<class T>
ListaConNexo<T>::ListaConNexo() {
    this->head = nullptr;
}

template<class T>
ListaConNexo<T>::~ListaConNexo() {
}

template<class T>
bool ListaConNexo<T>::insertar(T data) {
    nodoSimple<T>* nodo;
    try {
        nodo = new nodoSimple<T>(data);
    }catch (...) {
        std::cerr << "Error al insertar en linea 18";
        throw std::invalid_argument("Intenete Nuevamente");
    }
    if (this->head == nullptr) {
        this->head = nodo;
        return true;
    }
    nodoSimple<T>* aux = this->head;
    while (aux->getNext() != nullptr) {
        aux = aux->getNext();
    }
    aux->setNext(nodo);
    nodo->setPrev(aux);
    return true;
}

template<class T>
bool ListaConNexo<T>::remover(T data) {

}

template<class T>
bool ListaConNexo<T>::buscar(T data) {
}
