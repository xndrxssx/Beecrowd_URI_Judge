#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin>>n;
    while (n--){
        cin>>x;
        int count=0;

        for(int i=1; i<x; i++){
            if(x%i == 0) count+=i;
        }

        if(count==x) cout<<x<<" eh perfeito"<<endl;
        else cout<<x<<" nao eh perfeito"<<endl;
    }
    
}