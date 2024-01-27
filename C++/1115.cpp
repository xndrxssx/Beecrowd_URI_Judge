#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    while(cin>>x>>y){
        if(x>0){
            if(y>0) cout<<"primeiro\n";
            else if (y<0) cout<<"quarto\n";
            else break;
        }
        else if(x<0){
            if(y>0) cout<<"segundo\n";
            else if (y<0) cout<<"terceiro\n";
            else break;
        }
        else break;
    }
}