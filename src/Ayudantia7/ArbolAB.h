//
// Created by Deus on 07-10-2026.
//

#ifndef AYUDANTIA_ARBOLAB_H
#define AYUDANTIA_ARBOLAB_H
#include "NodoAB.h"


class ArbolAB {
    NodoAB * root;
    NodoAB* constuir();
    void preorderRecursivo(NodoAB* nodo);
    void InorderRecursivo(NodoAB* nodo);
    void postorderRecursivo(NodoAB* nodo);
    NodoAB* eliminarRecursivo(NodoAB* actual,int dato,bool & elimnado);

public:
    ArbolAB();
    void Inorder();
    void postorder();


    // bool insertar(int dato);
    bool eliminar(int dato);
    // void recorrer();
    void preorder();
    void insertar();

};


#endif //AYUDANTIA_ARBOLAB_H