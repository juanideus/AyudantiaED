#pragma once
#include "nodoSimple.h"

template<class T>
class ListaConNexo {
    nodoSimple<T> *head;
    public:
    ListaConNexo();
    ~ListaConNexo();
    bool insertar(T data);
    bool remover(T data);
    bool buscar(T data);



};


#include "ListaConNexo.tpp"