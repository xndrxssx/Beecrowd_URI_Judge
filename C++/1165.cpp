#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int n){
    if(n<=1){
        return false;
    }
    
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            return false;
        }
    }
    
    return true;
}

int main(){
    int n;
    cin>>n;
    while(n--){
    int p;
    cin>>p;
    
    if(ehPrimo(p)){
        cout<<p<<" eh primo"<<endl;
    }else{
        cout<<p<<" nao eh primo"<<endl;
    }

    }
}