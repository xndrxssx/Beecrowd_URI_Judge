#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    double x;
    vector<double> num;
    int i=0;
    cin>>x;
    cout<<fixed<<setprecision(4);
    num.push_back(x);
    cout<<"N["<<i<<"] = "<<num.at(i)<<endl;
    for(i=1; i<100; i++){
        double aux=num.at(i-1)/2;
        num.push_back(aux);
        cout<<fixed<<setprecision(4);
        cout<<"N["<<i<<"] = "<<num.at(i)<<endl;
    }
}