//
// Created by Deus on 03-09-2026.
//

#ifndef AYUDANTIA_LISTASIMPLE_H
#define AYUDANTIA_LISTASIMPLE_H
#include "Nodo.h"
#include <string>
using namespace std;

class ListaSimple {
    private:
    Nodo *head;
    int tamanio;
    bool eliminarRecursivo(int dato,Nodo * aux);
    bool agregarRecursivo(int pos,Nodo* aux,int contador,Nodo* nn);
    public:
    ListaSimple();
    ~ListaSimple();
    int getDato(int pos);
    void agregar(int dato,int pos);
    bool eliminar(int dato);
    bool buscar(int dato);

    string toString();

};


#endif //AYUDANTIA_LISTASIMPLE_H