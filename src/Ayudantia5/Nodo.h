//
// Created by Deus on 03-09-2026.
//

#ifndef AYUDANTIA_NODO_H
#define AYUDANTIA_NODO_H


class Nodo {
    private:
    int dato;
    Nodo *sig;
    public:
    Nodo();
    Nodo(int dato);
public:
    int getDato();
    void setDato(int dato);
    Nodo *getSig();
    void setSig(Nodo *sig);

};


#endif //AYUDANTIA_NODO_H