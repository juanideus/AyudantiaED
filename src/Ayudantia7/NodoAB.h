//
// Created by Deus on 07-10-2026.
//

#ifndef AYUDANTIA_NODOAB_H
#define AYUDANTIA_NODOAB_H


class NodoAB {
    int data;
    NodoAB * izq;
    NodoAB * der;
    public:
    NodoAB();
    ~NodoAB();
    NodoAB(int data);
    int getData();
    void setData(int data);
    NodoAB * getIzq();
    NodoAB * getDer();
    void setIzq(NodoAB * izq);
    void setDer(NodoAB * der);

};


#endif //AYUDANTIA_NODOAB_H