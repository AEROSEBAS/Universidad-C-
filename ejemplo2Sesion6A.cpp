#include<iostream>
#include<random>
#include<iomanip>
using namespace std;
void llenarMatriz(int **PArr,int Largo,int Alto) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distrib(0,99);
    for(int i=0;i<Largo;i++) {
        for(int j=0;j<Alto;j++) {
            PArr[i][j]=distrib(gen);
        }
    }
}
int main() {
    int Largo,Alto;
    cout<<"Ingrese las filas y columnas para la matriz";
    cin>>Largo>>Alto;
    int **Matriz=new int*[Largo];
    for(int i=0;i<Largo;i++) {
        Matriz[i]=new int[Alto];
    }
    llenarMatriz(Matriz,Largo,Alto);
    for(int i=0;i<Largo;i++) {
        for(int j=0;j<Alto;j++) {
            cout<<setw(3)<<Matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    for(int i=Largo-1;i>=0;i--) {
        for(int j=0;j<Alto;j++) {
            cout<<setw(3)<<Matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0;i<Largo;i++) {
        delete[] Matriz[i];
    }delete[] Matriz;
    return 0;
}
