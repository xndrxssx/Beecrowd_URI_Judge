#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    while(cin>>x, x){
        int acum=0;
        for(int i=1; i<=5;){
            if(x%2 == 0){
                acum+=x;
                i++;
            }
            x++;
        }
        cout<<acum<<endl;
    }
}