#pragma once
#include <string>
#include "../Ayudantia2/Persona.h"
using namespace std;
namespace LecturaArchivos {
    void leerArchivo(const string &path);
    void leerArchivoDelimiter(const string &path,char delimiter);
    void leerArchivoConClase(const string &path,char delimiter,Persona**arr,int &tamanio);
}