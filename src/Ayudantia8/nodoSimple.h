#pragma once

template<class T>
class nodoSimple {
    T data;
    nodoSimple<T> *next;
    nodoSimple<T> *prev;
    public:
    nodoSimple(T data);
    nodoSimple<T>* getNext();
    nodoSimple<T>* getPrev();
    void setNext(nodoSimple<T> *nodo);
    void setPrev(nodoSimple<T> *nodo);

};


#include "nodoSimple.tpp"