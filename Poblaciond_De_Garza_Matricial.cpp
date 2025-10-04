#include <iostream>
using namespace std;
double **crearMatriz(int fils, int cols);
void analizar(float a, float b, float c, float d);
int* multiplicar(double **mat, int *pob);
int main() {
    analizar(0.5,0.5,0.5,0.9);
    analizar(0.5,0.5,0.5,0.5);
    return 0;
}
void analizar(float a, float b, float c, float d) {
    int pob[] = {100,100,100}, *tmp;
    double **mat = crearMatriz(3,3);
    mat[0][2] = a;
    mat[1][0] = b;
    mat[2][1] = c;
    mat[2][2] = d;
    int n; cout << "Anios:"; cin >> n;
    for (int i = 0; i < n; i++) {
        tmp = multiplicar(mat, pob);
        pob[0] = tmp[0];
        pob[1] = tmp[1];
        pob[2] = tmp[2];
        cout << pob[0] << " " << pob[1] << " " << pob[2] << endl;
        delete [] tmp;
    }
for (int i = 0; i < 3; i++) {
    delete [] mat[i];
}
delete [] mat;}
int* multiplicar(double **mat, int *pob) {
    int *npob = new int[3]();
    for(int f=0; f < 3; f++) {
        for(int c=0; c < 3; c++) {
            npob[f] += mat[f][c]*pob[c];
        }
    }
    return npob;
}
double **crearMatriz(int fils, int cols) {
    double **mat = new double*[fils];
    for (int i = 0; i < fils; i++) {
        mat[i] = new double[cols]();
    }
    return mat;
}