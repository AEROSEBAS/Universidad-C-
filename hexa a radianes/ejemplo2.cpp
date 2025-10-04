//
// Created by sebastian on 23/08/2025.
//
#include <iomanip>
#include <iostream>
#include <functional>
int main(){
    double numero1,numero2,numero3;
    std::cout<<"Ingrese el primer numero :";std::cin>>numero1;
    std::cout<<"Ingrese el segundo numero :";std::cin>>numero2;
    std::cout<<"Ingrese el tercer numero :";std::cin>>numero3;
    int entero=int(numero1)+numero2;double resto=numero2+numero3-(int(numero3)+int(numero2));
    double resultado=entero+resto;
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"Nuevo numero :"<<resultado<<"\n";
    std::hash<int> hasher;
    int red=1213414;
    size_t hash_value=hasher(red);
    std::cout << "Numero: " << red << "\nHash: " << hash_value << std::endl;
    return 0;
}