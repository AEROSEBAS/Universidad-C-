
#include <iostream>
#include <random>
#include <string>
using namespace std;
int main() {
    int tam, *pArr;
    cout << "Ingrese tamano del arreglo" << endl;
    cin >> tam;
    pArr = new int[tam];
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 10);
    for (int i = 0; i < tam; i++) {
        pArr[i] = dis(gen);
    }
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
    cout<<endl<<"Numero a buscar: ";
    int Buscar;
    cin >> Buscar;
    int Ni;string *pArr2;
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == Buscar) {
            Ni+=1;}
    }
    int a=0;
    pArr2 = new string[Ni];
    for (int i = 0; i < tam; i++) {
        if (pArr[i] == Buscar) {
            pArr2[a] =to_string(i);
            a++;
        }
    }

    if (Ni>0) {
        cout<<"Esta "<<Ni<<" veces"<<endl;
        for (int i = 0; i < tam; i++) {
            cout <<pArr2[i]<<" ";
        }
    }else{cout<<"El dato no se encuentra en el array";}
    return 0;
}