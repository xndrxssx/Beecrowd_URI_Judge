#include <bits/stdc++.h>
using namespace std;

int main(){
    int acum=0, x, y;

    cin>>x>>y;

    for(int i=y; i<=x; i++){
        if(i%2) 
            if(i!=y) acum+=i;
    }
    cout<<acum<<endl;
}