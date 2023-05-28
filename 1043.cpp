#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    float a, b, c, p, area, mod;
    cin >> a >> b >> c;

    p=a+b+c;
    area=((a+b)*c)/2;

    mod=b-c;
    
    if (mod<0) 
        mod=-mod;
    if (mod<a && a<(b+c)) 
        cout <<"Perimetro = "<<fixed<<setprecision(1)<<p<<endl;
        else cout <<"Area = " <<fixed<<setprecision(1)<<area<<endl;
 
    return 0;
}