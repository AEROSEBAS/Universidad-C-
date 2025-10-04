#include <cmath>
#include<iostream>
using namespace std;
int main() {
    int vertice=0;
    double x0,y0,x1,y1,x2,y2,distancia=0;
    while (vertice<3 or vertice>11) {
        cout<<"Numero de vertices";
        cin>>vertice;}
    cout<<"Punto 1:";
    cin>>x1>>y1;
    x0=x1;y0=y1;
    for (int i=2;i<=vertice;i++) {
        cout<<"Punto "<<i<<": ";
        cin>>x2>>y2;
        distancia+=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
        x1=x2;y1=y2;
    }
    distancia=sqrt(pow(x2-x0,2)+pow(y2-y0,2));
    cout<<"Perimetro"<<distancia<<endl;
    string poligono="";
    switch (vertice) {
        case 3:poligono="Triangulo";break;
        case 4:poligono="Cuadrilatero";break;
        case 5:poligono="Pentagono";break;
    }
    cout<<"Poligono: "<<poligono<<endl;


    return 0;
}