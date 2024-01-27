#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin>>n;
    while(n--){
        float a,b,c;
        cin>>a>>b>>c;
        a=((2*a)+(3*b)+(5*c))/10.0;
        cout<<fixed<<setprecision(1);
        cout<<a<<endl;
    }
 
    return 0;
}