#include <cmath>
#include<iostream>
using namespace std;
int triple(int num){return num*3;}
double raiz(int num){return sqrt(num);}
bool es_divisible_de_3(int num){switch (num%3==0) {
    case 1: return true;
    case 0: return false;
}}
int main() {
    int num;
    cout<<"Ingrese un numero entero: ";
    cin>>num;
    cout<<"El triple es: "<<triple(num)<<endl;
    cout<<"La raiz cuadrada es: "<<raiz(num)<<endl;
    cout<<"Multiplo de 3: "<<
        (es_divisible_de_3(num)? "true":"false")
    <<endl;
    return 0;
}