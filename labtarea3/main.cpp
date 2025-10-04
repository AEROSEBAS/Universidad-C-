#include<iostream>
using namespace std;
int main() {
    string DiaDeLaSemana[7]={
        "domingo","lunes","martes",
        "miercoles","jueves","viernes",
        "sabado"};
    int DiaParaCadaMes[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int dia,mes;
    cout<<"dia = ";
    cin>>dia;
    cout<<"mes = ";
    cin>>mes;
    while (mes>12){cin>>mes;}

    int diasInicial=0;
    for(int i=0;i<mes-1;i++){diasInicial+=DiaParaCadaMes[i];}
    diasInicial+=dia;
    int DiaAjustado=(diasInicial+2)%7;

    cout<<"Respuesta:"<<DiaDeLaSemana[DiaAjustado]<<endl;
    return 0;
}