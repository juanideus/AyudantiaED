#include <iostream>

using namespace std;
#include "src/Ayudantia7/ArbolAB.h"


//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
  ArbolAB * arbol = new ArbolAB();
    arbol->insertar();
    arbol->preorder();
    arbol->eliminar(5);
    cout<<endl;
    arbol->preorder();

}