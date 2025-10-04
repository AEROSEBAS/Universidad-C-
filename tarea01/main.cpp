#include <iostream>
#include <string>
using namespace std;
int main() {
    double diametro,R_mecanica;int paredes,P_eletrica;
    cout<<"Ingrese el diametro en nm:";
    cin >> diametro;
    cout<<"Ingrese la cantidad de paredes:";
    cin>>paredes;
    cout<<"Ingrese las propiedades electricas (1 para conductor, 2 para semiconductor):";
    cin>>P_eletrica;
    cout<<"Ingrese la resistencia mecanica en GPa:";
    cin>>R_mecanica;
    string V_D,C_P,P_E,R_M;
    if (diametro<=1.4){ V_D=" Nanometrico";}
    else if (diametro<=3.0){V_D=" Submicrometrico";}else {V_D=" Micrometrico";}
    if (paredes<=1){C_P=" Unipared";} else{C_P=" Multipared";}
    if (P_eletrica==1){P_E=" conductor";} else{P_E=" semiconductor";}
    if (R_mecanica<30){R_M=" de Bajo modulo";} else if (R_mecanica<=50){R_M=" de modulo intermedio";}
    else {R_M=" de Alto modulo";}
    string Aplicacion;
    if (P_E==" conductor" and V_D==" Nanometrico"){Aplicacion="Electronica";}
    else if (P_E==" semiconductor" and V_D==" Submicrometrico"){Aplicacion="Medicina";}
    else if (R_M==" de Alto modulo"){Aplicacion="Materiales compuestos";}
    else{Aplicacion="Sin aplicacion especifica";}
    cout<<"Clasificacion:"<<V_D<<C_P<<R_M<<"."<<endl;
    cout<<"Aplicacion:"<<Aplicacion<<".";
    return 0;

}