#include <iostream>

#include "src/Ayudantia6/Matriz/MPP.h"
#include "src/Ayudantia6/Sistema/Sistema.h"
using namespace std;
void menuPrincipal(Sistema * sistema);
void prepararPartida(Sistema * sistema) {
    int opcion;
    do {
        cout<< "=========================="<<endl;
        cout<< "Preparar Partida"<<endl;
        cout<< "=========================="<<endl;
        cout<< "1. Eligir Dificultad"<<endl;
        cout<< "2. Ver campo de Batalla"<<endl;
        cout<< "3. Volver Menu Principal"<<endl;
        cout<< "=========================="<<endl;
        cout<< "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout<< "Dificultad"<<endl;
                cout<< "1. FACIL"<<endl;
                cout<< "2. MEDIO"<<endl;
                cout<< "3. DIFICIL"<<endl;
                cout<< "Seleccione una opcion: ";
                int dificultad;
                cin >> dificultad;
                switch (dificultad) {
                    case 1: sistema->iniciarMapa(1); break;
                    case 2: sistema->iniciarMapa(2); break;
                    case 3: sistema->iniciarMapa(3); break;
                    default: cout<<"Dificultad no valida"<<endl;
                }
                break;
            }
            case 2:
                cout<< "Ver campo de Batalla"<<endl;
                cout << sistema->mostrarMapa();
                sistema->mostrarCargador();
                break;

            case 3:
                cout<< "Volviendo al Menu Principal"<<endl;
                menuPrincipal(sistema);

            default:
                cout<<"Opcion no valida"<<endl;
        }

    } while (opcion != 3);
}


void iniciarCombate() {

}
void verEstadisticas() {

}
void salir() {

}
void menuPrincipal(Sistema * sistema) {
    cout<< "=========================="<<endl;
    cout<< "War. War Never Changes"<<endl;
    cout<< "=========================="<<endl;
    cout<< "1. Preparar Partida"<<endl;
    cout<< "2. Iniciar Combate"<<endl;
    cout<< "3. Ver Estadisticas"<<endl;
    cout<< "4. Salir"<<endl;
    cout<< "=========================="<<endl;
    int opcion;
    cout<< "Seleccione una opcion: ";
    cin >> opcion;
    switch (opcion) {
        case 1: prepararPartida(sistema);
        case 2: iniciarCombate();
        case 3: verEstadisticas();
        case 4: salir();
        default: cout<<"Opcion no valida"<<endl;
    };

};



//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
    try {
        Sistema *S = new Sistema();
        menuPrincipal(S);

    }catch (std::invalid_argument &e) {
        cout << e.what() << endl;
    }

    return 0;

}
