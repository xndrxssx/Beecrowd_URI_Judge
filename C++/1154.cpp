#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, count=0, media=0;
    while (cin>>n, n>=0)
    {
        media+=n;
        count++;
    }
    cout<<fixed<<setprecision(2);
    cout<<(float)media/count*1.0<<endl;
    
}