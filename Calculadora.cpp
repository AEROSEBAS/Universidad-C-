#include <iostream>
using namespace std;
int Paridad(int *n) {
    if (*n%2==0){return 1;}
    else{return 2;}
}
double calculadora(char op,int *pNum1,int *pNum2) {
    switch (op) {
        case '+':return (*pNum1 + *pNum2);break;
        case '-':return (*pNum1 - *pNum2);break;
        case '*':return *pNum1 * *pNum2;break;
        case '/':return ( double(*pNum1) / *pNum2);break;
    }
}
int main() {
    char chara='y';
    while (chara!='*' and chara!='+' and chara!='-' and chara!='/') {cout<<"Ingrese operador"
        "('+' '-' '*' '/': ";cin>>chara;}
    int A,B;
    int *PA=&A,*PB=&B;
    cout<<"Ingrese el valor de A y B: ";
    cin>>A>>B;
    cout<<calculadora(chara,PA,PB)<<endl;
    return 0;
}