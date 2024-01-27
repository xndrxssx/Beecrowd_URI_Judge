#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y, n;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if (y==0) cout<<"divisao impossivel\n";
        else {
            cout<<fixed<<setprecision(1);
            cout<<(float)x/y*1.0<<endl;
        }
    }

}