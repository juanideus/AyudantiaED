#include <iostream>
using namespace std;
#include "src/Ayudantia4/Estudiante.h"
#include "../Ayudantia/src/Ayudantia4/ServicioAcademico.h"
void consultarFicha(Estudiante * estudiante,ServicioAcademico *servicio) {
    if (estudiante == nullptr) return;
    cout<< estudiante->getName()<< endl;

    try {
        double promedio = servicio->obtenerPromedioEstudiante(estudiante);
    }catch (std::exception& e) {
        cout<< "EL estudiante con nombre " << estudiante->getName()<< " : " << e.what() << endl;
    }

}


//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {

    ServicioAcademico * servicio = new ServicioAcademico();
    double *notasJuan = new double[3]{6.5,1.0,7.0};
    HistorialDeNotas * historial = new HistorialDeNotas{3,notasJuan};
    Estudiante * estudiante = new Estudiante(100,"Juan",20,historial);
    HistorialDeNotas* h2 = new HistorialDeNotas{0,nullptr};
    Estudiante * estudiante2=new Estudiante(100,"Juan",20,h2);
    consultarFicha(estudiante2,servicio);
    consultarFicha(estudiante,servicio);
    delete historial;
    delete h2;
    delete estudiante2;
    delete servicio;
    delete historial;
    delete estudiante;


    return 0;

}



