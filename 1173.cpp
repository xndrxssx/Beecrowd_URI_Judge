#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> n;
    int v;

    cin>>v;

    for (int i=0; i<10; i++){
        n.push_back(v);
        v*=2;
        cout<<"N["<<i<<"] = "<<n.at(i)<<endl;
        }

}

