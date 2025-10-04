#include<iostream>
#include<string>
//Ejercicio 2:
using namespace std;
int leerNota() {
    int nota;
    cin>>nota;
    while (nota<0 || nota>20) {cin>>nota;}
    return nota;}
int Porcentaje_Nota(int nota) {return (nota*100)/20;}
string BarraDe_Progresso(int porcentaje) {
    const int largo=40;
    int progreso=(porcentaje*largo)/100;
    string barra_de_progreso="";
    for (int i=0;i<progreso;i++)barra_de_progreso+="|";
    for (int i=progreso; i<largo; i++)barra_de_progreso+=" ";
    return barra_de_progreso;
}
int main() {
    int nota;
    cout<<"Nota: ";
    nota=leerNota();
    int porcentaje=Porcentaje_Nota(nota);
    string barra_de_progreso=BarraDe_Progresso(porcentaje);
    cout<<"0%"<<barra_de_progreso<<"  "<<porcentaje<<"/100%"<<endl;
    return 0;
}