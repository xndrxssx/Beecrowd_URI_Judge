#include <bits/stdc++.h>
using namespace std;

long long pot (int a, int b){
    long long mod=2147483647;
    if(b==0) return 1;
    long long aux=pot(a,b/2);
    if (b%2){
        /*aux=a^(b-1)%mod;*/
        return aux * aux % mod * a % mod;
    }else{
        /*aux=a^(b/2)%mod;*/
        return (aux*aux)%mod;
    }
}

int main(){
    int r;
    cin>>r;
    cout<<pot(3,r)<<endl;
}