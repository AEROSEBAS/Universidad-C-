#include <iostream>
using namespace std;
int main() {
    float numero;
    cout << "Ingrese un numero entero: ";
    cin>>numero;
    int entera=numero;
    float resto=numero-entera;
    cout<<"El numero es: "<<numero <<endl;
    cout<<"El numero entero: "<<entera<<endl;
    cout<<"El resto es: "<<resto<<endl;
    cout<<"El numero entero: "<<int(entera)<<endl;
}