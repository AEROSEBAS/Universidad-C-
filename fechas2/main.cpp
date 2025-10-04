#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;
    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes (1=enero, 2=febrero,...): ";
    cin >> mes;
    cout << "Ingrese el ano: ";
    cin >> anio;


    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};


    bool esBisiesto = ( (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0) );
    if (esBisiesto) {
        diasMes[1] = 29;
    }


    int diasTotales = 0;
    for (int i = 0; i < mes-1; i++) {
        diasTotales += diasMes[i];
    }
    diasTotales += dia;

    int offset;
    if (anio == 2024) offset = 1;
    else if (anio == 2025) offset = 3;
    else {
        cout << "Este programa solo funciona para 2024 y 2025." << endl;
        return 0;
    }

    int diaSemana = (diasTotales + (offset - 1)) % 7;

    string nombres[7] = {"domingo","lunes","martes","miercoles","jueves","viernes","sabado"};

    cout << "El " << dia << "/" << mes << "/" << anio << " es " << nombres[diaSemana] << endl;

    return 0;
}