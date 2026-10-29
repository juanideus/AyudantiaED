//
// Created by Deus on 29-10-2026.
//

#include <stdexcept>

#include "nodoSimple.h"

template<class T>
nodoSimple<T>::nodoSimple(T data) {
    if (data == nullptr) {
        throw std::invalid_argument("data is null");
    }
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
}

template<class T>
nodoSimple<T> * nodoSimple<T>::getNext() {
    return next;
}

template<class T>
nodoSimple<T> * nodoSimple<T>::getPrev() {
    return prev;
}

template<class T>
void nodoSimple<T>::setNext(nodoSimple<T> *nodo) {
    this->next = nodo;
}

template<class T>
void nodoSimple<T>::setPrev(nodoSimple<T> *nodo) {
    this->prev = nodo;
}
