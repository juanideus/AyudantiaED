#include <iostream>

#include "src/Ayudantia8/ListaConNexo.h"

using namespace std;
#include "src/Ayudantia7/ArbolAB.h"
#include "src/Ayudantia2/Persona.h"
#include <thread>
void sumarPorPartes(int * datos,int *resultados,int inicio,int final,int indice) {
    int suma=0;
    for (int i = inicio; i < final; i++) {
        suma += *(datos+ i);
    }
    *(resultados+indice) = suma;

}
//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
    int* numeros = new int[10]{10,20,30,40,50,60,70,80,90,100};
    thread * hilos = new thread[2];
    int * resultados = new int[2]{0,0};

    hilos[0] = thread(sumarPorPartes,numeros,resultados,0,5,0);
    hilos[1]= thread(sumarPorPartes,numeros,resultados,5,10,1);
    for (int i = 0; i < 2; i++) {
        hilos[i].join();
    }
    int sumatotal=0;
    for (int i = 0; i < 2; i++) {
        sumatotal += *(resultados+i);
    }
    cout << sumatotal << endl;
    delete [] resultados;
    delete [] numeros;
    delete hilos;






}
