#include <bits/stdc++.h>
using namespace std;
#define tam 12

int main(){
    char op;
    float mat[tam][tam];

    cin>>op;

    for (int i=0; i<tam; i++) {
        for (int j=0; j<tam; j++) {
            cin>>mat[i][j];
        }
    }
    float soma=0;
    int count=0;
    for (int j=0; j<tam; j++) {
        for (int i=0; i<j; i++) {
            soma+=mat[i][j];
            count++;
        }
    }

    if(op=='S'){
        cout<<fixed<<setprecision(1)<<soma<<endl;
    }else{
        cout<<fixed<<setprecision(1)<<soma/count<<endl;
    }

    


}