//
// Created by Deus on 07-10-2026.
//

#ifndef AYUDANTIA_ARBOLAB_H
#define AYUDANTIA_ARBOLAB_H
#include "NodoAB.h"


class ArbolAB {
    NodoAB * root;
    NodoAB* constuir();
public:
    ArbolAB();
    // bool insertar(int dato);
    // bool eliminar(int dato);
    // void recorrer();

    void insertar();
};


#endif //AYUDANTIA_ARBOLAB_H