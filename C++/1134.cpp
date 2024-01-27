#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0, g=0, d=0, f;
    while(1){
        int n;
        cin>>n;
        if(n==4) break;
        else if (n==1) a++;
        else if (n==2) g++;
        else if (n==3) d++;
        else continue;
    }
    cout<<"MUITO OBRIGADO\n";
    cout<<"Alcool: "<<a<<endl;
    cout<<"Gasolina: "<<g<<endl;
    cout<<"Diesel: "<<d<<endl;
}