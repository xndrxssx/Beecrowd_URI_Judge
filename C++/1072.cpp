#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n, in=0, out=0;;
    cin>>n;
    while(n--){
        int x; 
        cin>>x;
        if(x>=10 && x<=20) in++;
        else out++;
    }
    cout<<in<<" in\n";
    cout<<out<<" out\n";
 
    return 0;
}