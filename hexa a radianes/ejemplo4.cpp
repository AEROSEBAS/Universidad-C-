//
// Created by sebastian on 23/08/2025.
//
#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    double x1,y1,x2,y2;
    std::cout<<"Ingrese el valor para x1,y1,x2,y2 (En ese orden) :";
    std::cin>>x1>>y1>>x2>>y2;
    double distancia=pow(pow(x2-x1,2)+pow(y2-y1,2),0.5);
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"La pendiente es :"<<distancia<<std::endl;
    return 0;
}