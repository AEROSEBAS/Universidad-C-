//
// Created by sebastian on 23/08/2025.
//
#include <iostream>
int main() {
    double kw,monto1,monto2;
    std::cout<<"Ingrese el valor de kw :";
    std::cin>>kw;
    monto1=kw*0.4522;
    monto2=100*0.4522+(kw-100)*0.7;
    bool menor_100=kw<=100;
    bool mayor_100=kw>=100;
    std::cout<<menor_100*monto1<<std::endl;
    std::cout<<mayor_100*monto2<<std::endl;
    return 0;
}