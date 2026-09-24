//
// Created by Deus on 19-09-2026.
//

#ifndef AYUDANTIA_NODODOBLE_H
#define AYUDANTIA_NODODOBLE_H


class NodoDoble {
    int dato;
    NodoDoble *sig;
    NodoDoble *ant;
    public:
    NodoDoble();
    NodoDoble(int dato);
    int getDato();
    void setDato(int dato);
    NodoDoble *getSig();
    void setSig(NodoDoble *sig);
    NodoDoble *getAnt();
    void setAnt(NodoDoble *ant);

};


#endif //AYUDANTIA_NODODOBLE_H