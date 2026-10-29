#include <iostream>

#include "src/Ayudantia8/ListaConNexo.h"

using namespace std;
#include "src/Ayudantia7/ArbolAB.h"
#include "src/Ayudantia2/Persona.h"

//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
  Persona *persona = new Persona();
  ListaConNexo<Persona*>* lista = new ListaConNexo<Persona*>();
  lista->insertar(persona);

}