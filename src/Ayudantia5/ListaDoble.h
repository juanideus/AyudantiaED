//
// Created by Deus on 19-09-2026.
//

#ifndef AYUDANTIA_LISTADOBLE_H
#define AYUDANTIA_LISTADOBLE_H
#include "NodoDoble.h"

#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include "NodoDoble.h"

class ListaDoble {
private:
    NodoDoble* inicio;
    NodoDoble* fin;

    // Agregar al final
    NodoDoble* agregarFinalRecursivo(
        NodoDoble* actual,
        NodoDoble* anterior,
        int dato
    );

    // Mostrar
    void mostrarAdelanteRecursivo(
        NodoDoble* actual
    ) const;

    void mostrarAtrasRecursivo(
        NodoDoble* actual
    ) const;

    // Buscar
    NodoDoble* buscarRecursivo(
        NodoDoble* actual,
        int dato
    ) const;

    // Contar nodos
    int contarRecursivo(
        NodoDoble* actual
    ) const;

    // Obtener un nodo por su posición
    NodoDoble* obtenerPorPosicionRecursivo(
        NodoDoble* actual,
        int posicion
    ) const;

    // Obtener el último nodo
    NodoDoble* obtenerUltimoRecursivo(
        NodoDoble* actual
    ) const;

    // Eliminar
    NodoDoble* eliminarRecursivo(
        NodoDoble* actual,
        int dato,
        bool& eliminado
    );

    // Encontrar la mitad
    NodoDoble* encontrarMitadRecursivo(
        NodoDoble* lento,
        NodoDoble* rapido
    ) const;

    // Detectar un bucle
    bool detectarBucleRecursivo(
        NodoDoble* lento,
        NodoDoble* rapido
    ) const;

    // Invertir la lista
    void invertirRecursivo(
        NodoDoble* actual
    );

    // Liberar memoria
    void liberarRecursivo(
        NodoDoble* actual
    );

public:
    // Constructor y destructor
    ListaDoble();
    ~ListaDoble();

    // Consultar estado de la lista
    bool estaVacia() const;

    // Agregar nodos
    void agregarInicio(int dato);
    void agregarFinal(int dato);

    // Mostrar la lista
    void mostrarAdelante() const;
    void mostrarAtras() const;

    // Buscar y consultar
    NodoDoble* buscar(int dato) const;
    int contar() const;

    NodoDoble* obtenerPorPosicion(
        int posicion
    ) const;

    NodoDoble* encontrarMitad() const;

    // Eliminar
    bool eliminar(int dato);

    // Detectar ciclos
    bool tieneBucle() const;

    // Invertir
    void invertir();

    // Liberar todos los nodos
    void liberar();

    // Getters de la lista
    NodoDoble* getInicio() const;
    NodoDoble* getFin() const;
};

#endif


#endif //AYUDANTIA_LISTADOBLE_H