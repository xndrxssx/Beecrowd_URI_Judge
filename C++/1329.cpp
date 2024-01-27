#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, i=0, mary, john;

    while(1){
    mary=0;
    john=0;
    cin>>n;
    if(n==0) break;
    while(n--){
        cin>>i;
        if (i==0) mary++;
        else john++;
    }
    cout<<"Mary won "<<mary<<" times and John won "<<john<<" times"<<endl;
}
}