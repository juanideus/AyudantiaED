#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
#include "LecturaArchivo.h"

namespace LecturaArchivos {
    //este metodo nos servira para leer archivos
    void leerArchivo(const string &path) {
        fstream *archivo = new std::fstream(path);
        if (!archivo->is_open()) {
            cerr<< "El archivo ta malo";
            exit(1);
        }
        cout<< "El archivo se abrio bien :)" << endl;
        string line;
        while (getline(*archivo,line)) {
            cout << line << endl;
        }


    }
    void leerArchivoDelimiter(const string &path, char delimiter) {
            fstream *archivo = new std::fstream(path);
        if (!archivo->is_open()) {
            cerr<< "El archivo ta malo";
            exit(1);
        }
        string line;
        //leemos y separamos por ;
        while (getline(*archivo,line,delimiter)) {
            cout << line << endl;


        }
    }

    void leerArchivoConClase(const string &path, char delimiter, Persona **arr,int &tamanio) {
        fstream *archivo = new std::fstream(path);
        if (!archivo->is_open()) {
            cerr<< "El archivo ta malo";
            exit(1);
        }
        string line;
        while (getline(*archivo,line)) {
            stringstream * ss = new stringstream(line);
            string id,name,age;
            getline(*ss,id,delimiter);
            getline(*ss,name,delimiter);
            getline(*ss,age,delimiter);
            Persona *persona = new Persona(
                stoi(id),name,stoi(age));
            arr[tamanio] = persona;
            tamanio++;
        }

    }
}
