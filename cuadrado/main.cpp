#include <iostream>
using namespace std;
char Filtro_tecla() {
    char tecla;
    do {
        cout<<"(S R M):";
        cin>>tecla;
        tecla=toupper(tecla);
    }while(tecla!='S' and tecla!='R' and tecla!='M');
    return tecla;
}
char Menu() {
    char tecla;
    cout << "\nElija una opcion\n";
    cout << "\nS. Sumar";
    cout << "\nR. Restar";
    cout << "\nM. Media Aritmetica\n";
    tecla=Filtro_tecla();
    return tecla;
}
int Filtro_Entero() {
    int num;
    do {
        cout<<"Numero:";cin>>num;
    }while (num<1);return num;
}
void Leer_Datos(int &primero,int &segundo) {
    primero=Filtro_Entero();
    segundo=Filtro_Entero();
}
double Computos(char tecla,int primero,int segundo) {
    switch (tecla) {
        case 'S':return primero+segundo;
            case 'R':return primero-segundo;
            case 'M':return (primero+segundo)/2.0;
    }
}
void Salida_Pantalla(double final) {
    cout<<final<<endl;
}

int main(){
int dato1,dato2;
double final;
char tecla;
Leer_Datos(dato1,dato2);
tecla=Menu();
final=Computos(tecla,dato1,dato2);
Salida_Pantalla(final);
return 0;}