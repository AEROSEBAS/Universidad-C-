#include<iostream>
using namespace std;
int main() {
    int a;
    cout<<"Ingrese una denominacion:"<<endl;
    cin>>a;
    if (a==1){cout<<"George Washington";}
    else if (a==2){cout<<"Thomas Jeffesorn";}
    else if (a==5){cout<<"Abraham Lincoln";}
    else if (a==10){cout<<"Alexander Hamilton";}
    else if (a==20){cout<<"Andrew Jackson";}
    else if (a==50){cout<<"Ulisses S. Grant";}
    else if (a==100){cout<<"Benjamin Franklin";}
    else if (a==500){cout<<"Denominacion descontinuada";}
    else if (a==1000){cout<<"Denominacion descontinuada";}
    else if (a==5000){cout<<"Denominacion descontinuada";}
    else if (a==1000){cout<<"Denominacion descontinuada";}
    else if (a!=100){cout<<"Denominacion descontinuada";}
    return 0;
}