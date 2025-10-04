#include <iostream>
using namespace std;
int main() {
    int numero,cn=0,cp=0,ci=0;
    while (numero!=0){
        cout<<"Digite un numero:";
        cin>>numero;
        if (numero!=0){if (numero%2==0){cp++;cn++;} else if (numero%2==1){ci++;cn++;}}
    }
    cout<<"Cantidad de numeros:"<<cn<<endl;
    cout<<"Cantidad de numeros pares:"<<cp<<endl;
    cout<<"Cantidad de numeros impares:"<<ci<<endl;
    return 0;
}