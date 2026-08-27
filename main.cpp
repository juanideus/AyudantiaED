#include <iostream>
using namespace std;
//Punto de entrada de nuestra aplicacion (Entry poiny)
int main() {
    int * a = new int [10];
    for (int i = 0; i < 10; i++) {
        a[i] = i;
        cout << a[i] << " ";

    }
    cout << endl;
    int *b = &a[0];
    *b = 6;
    int *c = &a[*b];
    *c = *b +2;
    *(a + (*c+*b-5|)) = *b+10;
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    delete[] a;
}



