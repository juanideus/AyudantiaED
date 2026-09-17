//
// Created by Deus on 03-09-2026.
//

#ifndef AYUDANTIA_PERSONA_H
#define AYUDANTIA_PERSONA_H
#include <string>
using namespace std;


class Persona {
protected:
    int id;
    string name;
    int age;
    public:
    Persona();
    Persona(int id,string nombre,int age);
    string getName();
    int getId();
    int getAge();

};


#endif //AYUDANTIA_PERSONA_H