#include<iostream>
using namespace std;
int main() {
    int aprox,i=1;
    cout<<"Cuantas iteraciones para calcular pi?:";
    cin>>aprox;
    double pi=3,i2;
    while (i<=aprox){if (i%2!=0) {i2=2*i;pi=pi+(4/(i2*(i2+1)*(i2+2)));} else if (i%2==0){i2=2*i;pi=pi-(4/(i2*(i2+1)*(i2+2)));}
        i++;
    }
    cout<<pi<<endl;
 return 0;
}