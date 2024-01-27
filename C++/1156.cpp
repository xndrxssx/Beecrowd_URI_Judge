#include <bits/stdc++.h>
using namespace std;

int main(){
    double s=1;
    for(int i=1, j=3; j<40; j+=2, i++){
        s+=j/pow(2,i);
        cout<<j<<"/"<<i<<endl;
    }
    cout<<fixed<<setprecision(2);
    cout<<s<<endl;
}