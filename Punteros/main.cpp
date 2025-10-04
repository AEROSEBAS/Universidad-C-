#include <iostream>
using namespace std;

int main() {
    int a;
    int *p, *d;   // punteros a int
    int **c;      // puntero a puntero a int
    int *t = &a;
    p = &a;
    a = 4;
    d = &a;
    c = &p;

    cout << "Valor de a usando *p: " << *p << endl;
    cout << "Valor de a usando *d: " << *d << endl;
    cout << "Direccion de a (&a): " << &a << endl;
    cout << "Contenido de p (direccion de a): " << p << endl;
    cout << "Contenido de d (direccion de a): " << d << endl;
    cout << "Contenido de c (direccion de p): " << c << endl;
    cout << "Contenido de *c (direccion de a, porque *c = p): " << *c << endl;
    cout << "Contenido de **c (valor de a): " << **c << endl;
    cout << t <<" t Impre la direccion de a" <<endl;   // imprime la dirección de a (ej: 0x7ffe...)
    cout << *t <<" *t Impre el valor de a(4)" <<endl;  // imprime el valor de a (10)
    return 0;
}