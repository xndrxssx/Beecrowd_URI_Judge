#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int num, i, tam=20;
    vector<int> n;
    
    n.resize(tam+1);
    for(i=0; i<tam;i++){
        cin>>num;
        n[i]=num;
    }
    for(i=0; i<tam;i++){
        printf("N[%d] = %d\n", i, n.at(tam-i-1));
    }
 
    return 0;
}