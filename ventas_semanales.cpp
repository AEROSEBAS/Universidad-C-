#include <iostream>
using namespace std;

double calcularTotal(double *ventas, int tamaño) {
    double total = 0;
    for (int i = 0; i < tamaño; i++) {
        total += ventas[i];
    }
    return total;
}

double calcularPromedio(double *ventas, int tamaño) {
    double total = calcularTotal(ventas, tamaño);
    return total / tamaño;
}


void diasMayorVenta(double *ventas, int tamaño, int *dias, int &cantidad) {
    // Encontrar el valor máximo
    double maxVenta = ventas[0];
    for (int i = 1; i < tamaño; i++) {
        if (ventas[i] > maxVenta) {
            maxVenta = ventas[i];
        }
    }

    cantidad = 0;
    for (int i = 0; i < tamaño; i++) {
        if (ventas[i] == maxVenta) {
            dias[cantidad] = i;
            cantidad++;
        }
    }
}

int main() {
    const int DIAS = 7;
    double ventas[DIAS];

    cout << "Ingrese las ventas de los 7 dias de la semana:" << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << "Dia " << i+1 << ": ";
        cin >> ventas[i];
    }

    double total = calcularTotal(ventas, DIAS);
    double promedio = calcularPromedio(ventas, DIAS);

    int dias[DIAS];
    int cantidad = 0;
    diasMayorVenta(ventas, DIAS, dias, cantidad);

    cout << "\nResultados:" << endl;
    cout << "Total vendido: " << total << endl;
    cout << "Promedio de ventas: " << promedio << endl;
    cout << "Dia(s) con mayores ventas: ";
    for (int i = 0; i < cantidad; i++) {
        cout << "Dia " << (dias[i] + 1);
        if (i < cantidad - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}
