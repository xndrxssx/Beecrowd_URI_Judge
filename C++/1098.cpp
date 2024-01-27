#include <bits/stdc++.h>
using namespace std;

int main(){
    double i, j;
    for(i=0.0, j=1.0; i<2.0+1e-9;){
        while(j<4){
            cout<<"I="<<i<<" J="<<j<<"\n";
            j++;
        }
        if (i>0.9) cout<<"I="<<i<<" J="<<j<<"\n";
        i+=0.2;
        j = i + 1.0; // Reset j for each iteration of i
    }
    cout<<"I="<<2<<" J="<<5<<"\n";
    
}