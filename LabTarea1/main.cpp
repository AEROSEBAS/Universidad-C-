#include <iostream>
using namespace std;
int main() {
    int horas,minutos;
    int angulo_H,angulo_M,TOTAL_angulo,angulo_FINAL;
    char separador;
    cout <<"Formato hh:mm";
    cin>>horas>>separador>>minutos;
    angulo_H=(horas%12)*30+minutos*0.5;
    angulo_M=minutos*6;
    TOTAL_angulo=abs(angulo_H-angulo_M);
    angulo_FINAL=min(TOTAL_angulo,360-TOTAL_angulo);
    cout<<"angulo: "<<angulo_FINAL<<endl;
    return 0;
}