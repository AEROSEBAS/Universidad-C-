#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int n,copia;
    do {
        cout<<"n:";
        cin>>n;
    }while (n<10);
    copia=n;
    while (true){n++;bool es_primo=true;
        for (int div=2;div<sqrt(n);div++) {
            if (n%div==0) {
                es_primo=false;
                break;
            }
        }
        if (es_primo==true) {cout<<"Siguiente primo:"<<n<<endl;break;}
    }
    n=copia;
    while (true){n--;bool es_primo=true;
        for (int div=2;div<sqrt(n);div++) {
            if (n%div==0) {
                es_primo=false;
                break;
            }
        }
        if (es_primo==true) {cout<<"Anterior primo:"<<n<<endl;break;}
    }
    return 0;
}