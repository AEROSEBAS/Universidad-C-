#ifndef ARREGLO_H
#define ARREGLO_H

void llenarAleatorios(int *pArr, int tam,int min=0,int max=10);
void imprimir(int *pArr, int tam);
double media(int *pArr, int tam);
int moda(int *pArr, int tam);
double mediana(int *pArr, int tam);
double DesviacionRespectoMedia(int *pArr, int tam);
double DesviacionMedia(int *pArr,int tam);
double Varianza(int *pArr, int tam);
double Desviacion_De_Varianza(int *pArr, int tam);
#endif //ARREGLO_H