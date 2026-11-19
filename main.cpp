#include <iostream>

#include "src/Ayudantia8/ListaConNexo.h"

using namespace std;

#include <thread>
#include <mutex>
void procesartransaccion(int *data,int inicio,int final,long long & balanceTotal, int &totalDepositos, int& maximoGlobal, mutex& mtx);
//Punto de entrada de nuestra aplicacion (Entry point)
int main() {
    mutex  mtx;
    //creamos variables globales
    int N = 100000;
    int NUM_H=4;
    int *transacciones = new int[N];
    thread  *hilos = new thread[NUM_H];
    long long balanceTotal=0;
    int cantidadDepositos=0;
    int transaccionMaxima=0;
    srand(time(NULL));
    for (int i = 0; i < N; i++) {
        transacciones[i]=(i%2 == 0) ? rand()%1000 : -(rand()%1000);
    }

    int bloque= N/4; // 250000
    for ( int i = 0; i < NUM_H; i++) {
        int inico = i * bloque;
        int final=(i == NUM_H-1) ? N : (i+1)*bloque;
        hilos[i]= thread(procesartransaccion,transacciones,inico,final,ref(balanceTotal),ref(cantidadDepositos),ref(transaccionMaxima),ref(mtx));
    }
    for ( int i = 0; i < NUM_H; i++) {
        hilos[i].join();
    }
    cout << balanceTotal << endl;
    cout << cantidadDepositos << endl;
    cout << transaccionMaxima << endl;




}
void procesartransaccion(int *data, int inicio, int final, long long &balanceTotal, int &totalDepositos, int &maximoGlobal, mutex &mtx) {
    int balanceLocal=0,totalDepositosLocal=0,maximoLocal=INT_MIN;
    for (int i = inicio; i < final; i++) {
        int dato = data[i];
        balanceLocal+=dato;
        if (dato > 0) {
            totalDepositosLocal++;
        }
        if (dato > maximoLocal) {
            maximoLocal=dato;
        }
    }
    std::lock_guard guard(mtx);
    balanceTotal+=balanceLocal;
    totalDepositos+=totalDepositosLocal;
    if ( maximoGlobal < maximoLocal) {
        maximoGlobal=maximoLocal;
    }


}

