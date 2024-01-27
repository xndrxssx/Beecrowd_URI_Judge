#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1, j=0; j<n; j++){
        int c=3;
        while(c--){
            cout<<i<<" ";
            i++;
        }
        i++;
        cout<<"PUM\n";
    }
}