#include <iostream>
using namespace std;
#include <random>
void Temperatura(int* p,int*PFrio,int*PTemplados,int*PCalurosos) {
    for (int i=0;i<10;i+=1) {
        if(p[i]<=15){*PFrio+=1;}
        else if (p[i]>=16 and p[i]<=25){*PTemplados+=1;}
        else if (p[i]>25){*PCalurosos+=1;}}}
int main(){
    int Frio=0,Templados=0,Calurosos=0;
    random_device rd;
    mt19937_64 rng(rd());
    uniform_int_distribution<int> dist1(0, 40);
    int a[10];
    for (int i=0;i<10;i+=1) {
        a[i]=dist1(rng);
    }
    Temperatura(a,&Frio,&Templados,&Calurosos);
    cout<<Frio<<endl;
    cout<<Templados<<endl;
    cout<<Calurosos<<endl;

return 0;}
