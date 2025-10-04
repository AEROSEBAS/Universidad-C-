#include <iostream>
#include <cmath>
#include <algorithm>//Para sort
using namespace std;
void llenarAleatorios(int *pArr, int tam,int min,int max) {
    for (int i = 0; i < tam; i++) {
        pArr[i] = rand() % (max-min+1)+min;
    }
}
void imprimir(int *pArr, int tam) {
    cout << endl;
    for (int i = 0; i < tam; i++) {
        cout << pArr[i] << " ";
    }
}
double media(int *pArr, int tam) {
    double suma = 0;
    for (int i = 0; i < tam; i++) {
        suma += pArr[i];
    }
    return suma / tam;
}
int moda(int *pArr, int tam) {
    int moda=*pArr;
    int maxFrecuencia=0;
    for (int i = 0; i < tam; i++) {int frecuencia = 0;
        for (int j = 0; j < tam; j++) {
            if (*(pArr+j)==*(pArr+i)) {frecuencia++;}}
        if (frecuencia>maxFrecuencia) {
            maxFrecuencia=maxFrecuencia;moda=*(pArr+i);}}
return moda;}
double mediana(int *pArr, int tam) {
    sort(pArr, pArr + tam);

    if (tam % 2 == 1) {
        return *(pArr + tam/2);
    } else {
        int mid1 = *(pArr + (tam/2 - 1));
        int mid2 = *(pArr + tam/2);
        return (mid1 + mid2) / 2.0;
    }
}
double DesviacionRespectoMedia(int *pArr, int tam) {
    double Di=0;
    for (int i = 0; i < tam; i++) {
        Di+=abs(pArr[i]-media(pArr, tam));
    }
    return Di;
}
double DesviacionMedia(int *pArr,int tam) {
    double Di=DesviacionRespectoMedia(pArr, tam)/tam;
    return Di;
}
double Varianza(int *pArr, int tam) {
    double Vari=(DesviacionMedia(pArr, tam)*DesviacionMedia(pArr,tam))/tam;
    return Vari;
}
double Desviacion_De_Varianza(int *pArr, int tam) {
    return sqrt(Varianza(pArr, tam));
}