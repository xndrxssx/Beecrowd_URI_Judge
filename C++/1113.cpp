#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int x, y;
    
    while(1){
        cin>>x>>y;
        if(x==y) break;
        else if(x>y) cout<<"Decrescente\n";
        else cout<<"Crescente\n";
    }
    
 
    return 0;
}