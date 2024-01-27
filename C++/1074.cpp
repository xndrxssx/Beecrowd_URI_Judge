#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, t;
    cin>>n;
    while(n--){
        cin>>t;
            if(t<0){
                if(abs(t)%2) cout<<"ODD NEGATIVE\n";
                else cout<<"EVEN NEGATIVE\n";
            }
            else if(t>0){
                if(abs(t)%2) cout<<"ODD POSITIVE\n";
                else cout<<"EVEN POSITIVE\n";
            }
            else cout<<"NULL\n";
    }
}