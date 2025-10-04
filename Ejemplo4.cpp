#include <iostream>
#include "arreglo.h"
using namespace std;
int main() {
    int tam, *pArr;
    cout <<"Tam:";
    cin >> tam;
    pArr = new int[tam];
    llenarAleatorios(pArr, tam);
    imprimir(pArr, tam);
    cout<<endl<<"Media : "<<media(pArr,tam)<<endl<<"moda: "<<moda(pArr, tam)
    <<endl<<"Mediana: "<<mediana(pArr, tam)
    <<endl<<"Desviacion Respecto a la media : "<<DesviacionRespectoMedia(pArr, tam)
    <<endl<<"Desviacion media: "<<DesviacionMedia(pArr, tam)
    <<endl<<"Varianza: "<<Varianza(pArr, tam)
    <<endl<<"Desviacion estandar: "<<Desviacion_De_Varianza(pArr, tam);
    return 0;
}