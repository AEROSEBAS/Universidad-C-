#include <iostream>
using namespace std;
int main() {
    int edad;
    double precio;
    cout<<"Ingrese su edad:";
    cin>>edad;
    if(edad<18){precio=15;cout<<"Se aplica el descuento para menor de edad"<<endl;cout<<precio<<" soles";}
    else if (edad<26){precio=40;cout<<"Se apllica descuento de estudiante"<<endl;}
    else if (edad<=59){precio=70;cout<<"No se aplica el descuento"<<endl;}
    else{precio=20;cout<<"Se aplica el descuento para adulto mayor\n";}
    int i=1;
    while (i<=8){std::cout<<"UTEC\n";i++;}
    std::cout<<endl;
    for (i=1;i<=8;i++){cout<<i<<endl;}
    return 0;
}