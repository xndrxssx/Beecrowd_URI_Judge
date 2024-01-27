#include <bits/stdc++.h>
using namespace std;
#define tam 12

int main(){
    int linha;
    char op;
    float mat[tam][tam];

    cin>>linha;
    cin>>op;
    for (int i=0; i<tam; i++) {
        for (int j=0; j<tam; j++) {
            cin>>mat[i][j];
        }
    }
    float soma=0;
    for (int j=0; j<tam; j++) {
            soma+=mat[linha][j];
        }
    
    if(op=='S'){
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<soma/tam<<endl;
    }
    
}