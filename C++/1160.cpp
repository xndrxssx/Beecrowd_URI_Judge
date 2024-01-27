#include <bits/stdc++.h>
using namespace std;

int main(){
    long int t, pa, pb, i;
    double g1, g2;

    cin>>t;
    while(t--){
            cin>>pa>>pb>>g1>>g2;
            for(i=0; pa<=pb && i<101; i++){
                pa+=pa*(g1/100);
                pb+=pb*(g2/100);
            }
        if(i>100) cout<<"Mais de 1 seculo."<<endl;
        else cout<<i<<" anos."<<endl;
    }
}