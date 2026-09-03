#include <iostream>

#include "src/Ayudantia2/Persona.h"
#include "src/Ayudantia2/ListaSimple.h"

namespace Perro {
   string mostrar();
}
namespace gato {
   string mostrar();
}
using namespace std;
//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
   ListaSimple *lista = new ListaSimple();
   lista->agregar(1,0);
   lista->agregar(2,1);
   lista->agregar(3,2);
   lista->agregar(4,3);
   cout<<lista->toString() <<endl;
   lista->eliminar(2);
   cout<<lista->toString();


}



