#include <iostream>
using namespace std;
//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {



    int a[] = {1, 2, 3,5,6,7,8,9,10};
    for (int i = 0; i < 9; i++) {
        if (i %2 == 0) {
            *(a+i) = 10;
        }

    }
    for (int i = 0; i < 9; i++) {
        cout << *(a+i) << endl;
    }
}



