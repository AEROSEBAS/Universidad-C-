#include<iostream>
#include <list>
using namespace std;
int main() {
    int numero=0,dig,read=0,pares=0;
    while (numero<100){cout<<"Ingrese un numero:";cin>>numero;}
    list<int> lista;
    while(numero%10!=0) {
        dig=numero%10;numero=numero/10;read++;
        if (dig%2==0){pares++;}
    }
    cout<<"Cantidad de digitos:"<<read<<endl;
    cout<<"Cantidad de digitos pares:"<<pares<<endl;
    cout<<"Cantidad de digitos impares:"<<read-pares<<endl;
    return 0;
}