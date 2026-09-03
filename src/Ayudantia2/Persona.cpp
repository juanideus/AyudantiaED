//
// Created by Deus on 03-09-2026.
//

#include "Persona.h"
#include <string>
using namespace std;
Persona::Persona() {
    this->id = -1;
    this->name= "vacio";
    this->age= 0;
}
Persona::Persona(int id,string nombre, int age) {
    this->id = id;
    this->name = nombre;
    this->age= age;
}
string Persona::getName() {
    return this->name;

}
