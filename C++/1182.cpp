#include <bits/stdc++.h>
using namespace std;
#define tam 12

int main(){
    int col;
    char op;
    float mat[tam][tam];

    cin>>col;
    cin>>op;
    for (int i=0; i<tam; i++) {
        for (int j=0; j<tam; j++) {
            cin>>mat[i][j];
        }
    }
    float soma=0;
    for (int i=0; i<tam; i++) {
            soma+=mat[i][col];
        }
    
    if(op=='S'){
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<soma/tam<<endl;
    }
    
}