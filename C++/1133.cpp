#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b, x;
    cin>>a>>b;
        if(a>b){
        x=a;
        a=b;
        b=x;
    }
    a++;
    for(a; a<b; a++){
        if(a%5==2 || a%5==3) cout<<a<<"\n";
    }
}